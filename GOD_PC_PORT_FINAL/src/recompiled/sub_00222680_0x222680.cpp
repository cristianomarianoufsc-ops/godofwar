#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00222680
// Address: 0x222680 - 0x2229a0
void sub_00222680_0x222680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222680_0x222680");
#endif

    ctx->pc = 0x222680u;

    // 0x222680: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x222680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x222684: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x222684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x222688: 0x7fb00180  sq          $s0, 0x180($sp)
    ctx->pc = 0x222688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 16));
    // 0x22268c: 0x2442a380  addiu       $v0, $v0, -0x5C80
    ctx->pc = 0x22268cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943616));
    // 0x222690: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x222690u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222694: 0x7fb10170  sq          $s1, 0x170($sp)
    ctx->pc = 0x222694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 17));
    // 0x222698: 0x7fb20160  sq          $s2, 0x160($sp)
    ctx->pc = 0x222698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 18));
    // 0x22269c: 0x70078ca9  por         $s1, $zero, $a3
    ctx->pc = 0x22269cu;
    SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 7)));
    // 0x2226a0: 0x7fb30150  sq          $s3, 0x150($sp)
    ctx->pc = 0x2226a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 19));
    // 0x2226a4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2226a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2226a8: 0x7fb40140  sq          $s4, 0x140($sp)
    ctx->pc = 0x2226a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 20));
    // 0x2226ac: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2226acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2226b0: 0x7fb50130  sq          $s5, 0x130($sp)
    ctx->pc = 0x2226b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 21));
    // 0x2226b4: 0x700aa4a9  por         $s4, $zero, $t2
    ctx->pc = 0x2226b4u;
    SET_GPR_VEC(ctx, 20, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x2226b8: 0x7fb60120  sq          $s6, 0x120($sp)
    ctx->pc = 0x2226b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 22));
    // 0x2226bc: 0x3c15002a  lui         $s5, 0x2A
    ctx->pc = 0x2226bcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)42 << 16));
    // 0x2226c0: 0xe7b40190  swc1        $f20, 0x190($sp)
    ctx->pc = 0x2226c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x2226c4: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x2226c4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2226c8: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x2226c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x2226cc: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2226ccu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2226d0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2226d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2226d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2226d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2226d8: 0x8ea4d2ac  lw          $a0, -0x2D54($s5)
    ctx->pc = 0x2226d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294955692)));
    // 0x2226dc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2226dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2226e0: 0x7fa80100  sq          $t0, 0x100($sp)
    ctx->pc = 0x2226e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 8));
    // 0x2226e4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2226e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2226e8: 0xc07974c  jal         func_1E5D30
    ctx->pc = 0x2226E8u;
    SET_GPR_U32(ctx, 31, 0x2226F0u);
    ctx->pc = 0x2226ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2226E8u;
            // 0x2226ec: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5D30u;
    if (runtime->hasFunction(0x1E5D30u)) {
        auto targetFn = runtime->lookupFunction(0x1E5D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2226F0u; }
        if (ctx->pc != 0x2226F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1e5d30_0x1e5e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2226F0u; }
        if (ctx->pc != 0x2226F0u) { return; }
    }
    ctx->pc = 0x2226F0u;
    // 0x2226f0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2226f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2226f4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2226f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x2226f8: 0x24429a00  addiu       $v0, $v0, -0x6600
    ctx->pc = 0x2226f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941184));
    // 0x2226fc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2226fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x222700: 0xae13004c  sw          $s3, 0x4C($s0)
    ctx->pc = 0x222700u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 19));
    // 0x222704: 0xc04c992  jal         func_132648
    ctx->pc = 0x222704u;
    SET_GPR_U32(ctx, 31, 0x22270Cu);
    ctx->pc = 0x222708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222704u;
            // 0x222708: 0x2664003c  addiu       $a0, $s3, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132648u;
    if (runtime->hasFunction(0x132648u)) {
        auto targetFn = runtime->lookupFunction(0x132648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22270Cu; }
        if (ctx->pc != 0x22270Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132648_0x132648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22270Cu; }
        if (ctx->pc != 0x22270Cu) { return; }
    }
    ctx->pc = 0x22270Cu;
    // 0x22270c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x22270cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222710: 0x10e00075  beqz        $a3, . + 4 + (0x75 << 2)
    ctx->pc = 0x222710u;
    {
        const bool branch_taken_0x222710 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x222714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222710u;
            // 0x222714: 0xae07003c  sw          $a3, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222710) {
            ctx->pc = 0x2228E8u;
            goto label_2228e8;
        }
    }
    ctx->pc = 0x222718u;
    // 0x222718: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x222718u;
    ctx->vu0_vf[4] = ctx->vu0_vf[0];
    // 0x22271c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x22271cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x222720: 0x4be3233d  vmr32.xyzw  $vf3, $vf4
    ctx->pc = 0x222720u;
    ctx->vu0_vf[3] = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,1));
    // 0x222724: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x222724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x222728: 0x4be21b3d  vmr32.xyzw  $vf2, $vf3
    ctx->pc = 0x222728u;
    ctx->vu0_vf[2] = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,1));
    // 0x22272c: 0xfba30020  sqc2        $vf3, 0x20($sp)
    ctx->pc = 0x22272cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x222730: 0x4be1133d  vmr32.xyzw  $vf1, $vf2
    ctx->pc = 0x222730u;
    ctx->vu0_vf[1] = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,1));
    // 0x222734: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x222734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x222738: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x222738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x22273c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x22273cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x222740: 0xfba30050  sqc2        $vf3, 0x50($sp)
    ctx->pc = 0x222740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x222744: 0x122dc2  srl         $a1, $s2, 23
    ctx->pc = 0x222744u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 18), 23));
    // 0x222748: 0xfba20060  sqc2        $vf2, 0x60($sp)
    ctx->pc = 0x222748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x22274c: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x22274cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x222750: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x222750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x222754: 0x3c09002a  lui         $t1, 0x2A
    ctx->pc = 0x222754u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)42 << 16));
    // 0x222758: 0xf8e10020  sqc2        $vf1, 0x20($a3)
    ctx->pc = 0x222758u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x22275c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x22275cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222760: 0xdd24bdf8  ld          $a0, -0x4208($t1)
    ctx->pc = 0x222760u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 9), 4294950392)));
    // 0x222764: 0x8ea6d2ac  lw          $a2, -0x2D54($s5)
    ctx->pc = 0x222764u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294955692)));
    // 0x222768: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x222768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x22276c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x22276cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222770: 0x64840001  daddiu      $a0, $a0, 0x1
    ctx->pc = 0x222770u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)1);
    // 0x222774: 0x84e30060  lh          $v1, 0x60($a3)
    ctx->pc = 0x222774u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 96)));
    // 0x222778: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x222778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x22277c: 0x7ce20030  sq          $v0, 0x30($a3)
    ctx->pc = 0x22277cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 48), GPR_VEC(ctx, 2));
    // 0x222780: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x222780u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x222784: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x222784u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x222788: 0x83500a  movz        $t2, $a0, $v1
    ctx->pc = 0x222788u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 4));
    // 0x22278c: 0x140182d  daddu       $v1, $t2, $zero
    ctx->pc = 0x22278cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222790: 0x7ce20040  sq          $v0, 0x40($a3)
    ctx->pc = 0x222790u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 64), GPR_VEC(ctx, 2));
    // 0x222794: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x222794u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x222798: 0x7ce20050  sq          $v0, 0x50($a3)
    ctx->pc = 0x222798u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 80), GPR_VEC(ctx, 2));
    // 0x22279c: 0xfd24bdf8  sd          $a0, -0x4208($t1)
    ctx->pc = 0x22279cu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 4294950392), GPR_U64(ctx, 4));
    // 0x2227a0: 0xfce30068  sd          $v1, 0x68($a3)
    ctx->pc = 0x2227a0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 104), GPR_U64(ctx, 3));
    // 0x2227a4: 0xae120034  sw          $s2, 0x34($s0)
    ctx->pc = 0x2227a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 18));
    // 0x2227a8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2227a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2227ac: 0x14520002  bne         $v0, $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x2227ACu;
    {
        const bool branch_taken_0x2227ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2227B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2227ACu;
            // 0x2227b0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2227ac) {
            ctx->pc = 0x2227B8u;
            goto label_2227b8;
        }
    }
    ctx->pc = 0x2227B4u;
    // 0x2227b4: 0x8cc80004  lw          $t0, 0x4($a2)
    ctx->pc = 0x2227b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_2227b8:
    // 0x2227b8: 0x11000002  beqz        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2227B8u;
    {
        const bool branch_taken_0x2227b8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2227BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2227B8u;
            // 0x2227bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2227b8) {
            ctx->pc = 0x2227C4u;
            goto label_2227c4;
        }
    }
    ctx->pc = 0x2227C0u;
    // 0x2227c0: 0x8d0200f4  lw          $v0, 0xF4($t0)
    ctx->pc = 0x2227c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 244)));
label_2227c4:
    // 0x2227c4: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x2227c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x2227c8: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x2227c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2227cc: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x2227ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2227d0: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x2227d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2227d4: 0xfba20090  sqc2        $vf2, 0x90($sp)
    ctx->pc = 0x2227d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2227d8: 0xfba300a0  sqc2        $vf3, 0xA0($sp)
    ctx->pc = 0x2227d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x2227dc: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x2227dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2227e0: 0xfba300d0  sqc2        $vf3, 0xD0($sp)
    ctx->pc = 0x2227e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x2227e4: 0xfba200e0  sqc2        $vf2, 0xE0($sp)
    ctx->pc = 0x2227e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2227e8: 0xfba100f0  sqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x2227e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2227ec: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2227ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x2227f0: 0x8c42ec94  lw          $v0, -0x136C($v0)
    ctx->pc = 0x2227f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962324)));
    // 0x2227f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2227f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2227f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2227f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2227fc: 0x8c4400c0  lw          $a0, 0xC0($v0)
    ctx->pc = 0x2227fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x222800: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x222800u;
    {
        const bool branch_taken_0x222800 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x222804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222800u;
            // 0x222804: 0x2482ffec  addiu       $v0, $a0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222800) {
            ctx->pc = 0x222818u;
            goto label_222818;
        }
    }
    ctx->pc = 0x222808u;
    // 0x222808: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x222808u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22280c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x22280Cu;
    {
        const bool branch_taken_0x22280c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22280Cu;
            // 0x222810: 0x44300b  movn        $a2, $v0, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22280c) {
            ctx->pc = 0x22281Cu;
            goto label_22281c;
        }
    }
    ctx->pc = 0x222814u;
    // 0x222814: 0x0  nop
    ctx->pc = 0x222814u;
    // NOP
label_222818:
    // 0x222818: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x222818u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22281c:
    // 0x22281c: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x22281cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x222820: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x222820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222824: 0xdd25bdf8  ld          $a1, -0x4208($t1)
    ctx->pc = 0x222824u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 9), 4294950392)));
    // 0x222828: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x222828u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
    // 0x22282c: 0x84c20060  lh          $v0, 0x60($a2)
    ctx->pc = 0x22282cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 96)));
    // 0x222830: 0x64a50001  daddiu      $a1, $a1, 0x1
    ctx->pc = 0x222830u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
    // 0x222834: 0x7ba30090  lq          $v1, 0x90($sp)
    ctx->pc = 0x222834u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x222838: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x222838u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x22283c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22283cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x222840: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x222840u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x222844: 0x7cc30030  sq          $v1, 0x30($a2)
    ctx->pc = 0x222844u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 3));
    // 0x222848: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x222848u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22284c: 0xa2180a  movz        $v1, $a1, $v0
    ctx->pc = 0x22284cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x222850: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x222850u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x222854: 0x7cc20040  sq          $v0, 0x40($a2)
    ctx->pc = 0x222854u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 2));
    // 0x222858: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x222858u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x22285c: 0x7cc20050  sq          $v0, 0x50($a2)
    ctx->pc = 0x22285cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 80), GPR_VEC(ctx, 2));
    // 0x222860: 0xfd25bdf8  sd          $a1, -0x4208($t1)
    ctx->pc = 0x222860u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 4294950392), GPR_U64(ctx, 5));
    // 0x222864: 0xc054104  jal         func_150410
    ctx->pc = 0x222864u;
    SET_GPR_U32(ctx, 31, 0x22286Cu);
    ctx->pc = 0x222868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222864u;
            // 0x222868: 0xfcc30068  sd          $v1, 0x68($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 104), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x150410u;
    if (runtime->hasFunction(0x150410u)) {
        auto targetFn = runtime->lookupFunction(0x150410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22286Cu; }
        if (ctx->pc != 0x22286Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_150410_0x1504d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22286Cu; }
        if (ctx->pc != 0x22286Cu) { return; }
    }
    ctx->pc = 0x22286Cu;
    // 0x22286c: 0x82620054  lb          $v0, 0x54($s3)
    ctx->pc = 0x22286cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x222870: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x222870u;
    {
        const bool branch_taken_0x222870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x222870) {
            ctx->pc = 0x222874u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x222870u;
            // 0x222874: 0xae000048  sw          $zero, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2228B8u;
            goto label_2228b8;
        }
    }
    ctx->pc = 0x222878u;
    // 0x222878: 0xc089960  jal         func_226580
    ctx->pc = 0x222878u;
    SET_GPR_U32(ctx, 31, 0x222880u);
    ctx->pc = 0x22287Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222878u;
            // 0x22287c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226580u;
    if (runtime->hasFunction(0x226580u)) {
        auto targetFn = runtime->lookupFunction(0x226580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222880u; }
        if (ctx->pc != 0x222880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00226580_0x226580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222880u; }
        if (ctx->pc != 0x222880u) { return; }
    }
    ctx->pc = 0x222880u;
    // 0x222880: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x222880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x222884: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x222884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222888: 0x26650054  addiu       $a1, $s3, 0x54
    ctx->pc = 0x222888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 84));
    // 0x22288c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22288cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222890: 0x78670020  lq          $a3, 0x20($v1)
    ctx->pc = 0x222890u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x222894: 0x2409fffd  addiu       $t1, $zero, -0x3
    ctx->pc = 0x222894u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x222898: 0xc089a7e  jal         func_2269F8
    ctx->pc = 0x222898u;
    SET_GPR_U32(ctx, 31, 0x2228A0u);
    ctx->pc = 0x22289Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222898u;
            // 0x22289c: 0x78660050  lq          $a2, 0x50($v1) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2269F8u;
    if (runtime->hasFunction(0x2269F8u)) {
        auto targetFn = runtime->lookupFunction(0x2269F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2228A0u; }
        if (ctx->pc != 0x2228A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002269F8_0x2269f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2228A0u; }
        if (ctx->pc != 0x2228A0u) { return; }
    }
    ctx->pc = 0x2228A0u;
    // 0x2228a0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2228a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2228a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2228a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2228a8: 0x4420003  bltzl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2228A8u;
    {
        const bool branch_taken_0x2228a8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2228a8) {
            ctx->pc = 0x2228ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2228A8u;
            // 0x2228ac: 0xae000048  sw          $zero, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2228B8u;
            goto label_2228b8;
        }
    }
    ctx->pc = 0x2228B0u;
    // 0x2228b0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2228b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2228b4: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x2228b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
label_2228b8:
    // 0x2228b8: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x2228b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x2228bc: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x2228bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x2228c0: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x2228c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2228c4: 0xdba20100  lqc2        $vf2, 0x100($sp)
    ctx->pc = 0x2228c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2228c8: 0x4be11058  vmulx.xyzw  $vf1, $vf2, $vf1x
    ctx->pc = 0x2228c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2228cc: 0xfa010010  sqc2        $vf1, 0x10($s0)
    ctx->pc = 0x2228ccu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2228d0: 0xe6140044  swc1        $f20, 0x44($s0)
    ctx->pc = 0x2228d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x2228d4: 0xae160030  sw          $s6, 0x30($s0)
    ctx->pc = 0x2228d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 22));
    // 0x2228d8: 0x7e140020  sq          $s4, 0x20($s0)
    ctx->pc = 0x2228d8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 20));
    // 0x2228dc: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x2228dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x2228e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2228E0u;
    {
        const bool branch_taken_0x2228e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2228E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2228E0u;
            // 0x2228e4: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2228e0) {
            ctx->pc = 0x2228F8u;
            goto label_2228f8;
        }
    }
    ctx->pc = 0x2228E8u;
label_2228e8:
    // 0x2228e8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2228e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2228ec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2228ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2228f0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2228f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2228f4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2228f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2228f8:
    // 0x2228f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2228f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2228fc: 0x7bb10170  lq          $s1, 0x170($sp)
    ctx->pc = 0x2228fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x222900: 0x7bb00180  lq          $s0, 0x180($sp)
    ctx->pc = 0x222900u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x222904: 0x7bb20160  lq          $s2, 0x160($sp)
    ctx->pc = 0x222904u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x222908: 0x7bb30150  lq          $s3, 0x150($sp)
    ctx->pc = 0x222908u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x22290c: 0x7bb40140  lq          $s4, 0x140($sp)
    ctx->pc = 0x22290cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x222910: 0x7bb50130  lq          $s5, 0x130($sp)
    ctx->pc = 0x222910u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x222914: 0x7bb60120  lq          $s6, 0x120($sp)
    ctx->pc = 0x222914u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x222918: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x222918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x22291c: 0xc7b40190  lwc1        $f20, 0x190($sp)
    ctx->pc = 0x22291cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x222920: 0x3e00008  jr          $ra
    ctx->pc = 0x222920u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222920u;
            // 0x222924: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2227B8u: goto label_2227b8;
            case 0x2227C4u: goto label_2227c4;
            case 0x222818u: goto label_222818;
            case 0x22281Cu: goto label_22281c;
            case 0x2228B8u: goto label_2228b8;
            case 0x2228E8u: goto label_2228e8;
            case 0x2228F8u: goto label_2228f8;
            case 0x22295Cu: goto label_22295c;
            case 0x222990u: goto label_222990;
            default: break;
        }
        return;
    }
    ctx->pc = 0x222928u;
    // 0x222928: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x222928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22292c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x22292cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x222930: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x222930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x222934: 0x24429a00  addiu       $v0, $v0, -0x6600
    ctx->pc = 0x222934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941184));
    // 0x222938: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x222938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22293c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22293cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222940: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x222940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x222944: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x222944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x222948: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x222948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x22294c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22294Cu;
    {
        const bool branch_taken_0x22294c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x222950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22294Cu;
            // 0x222950: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22294c) {
            ctx->pc = 0x22295Cu;
            goto label_22295c;
        }
    }
    ctx->pc = 0x222954u;
    // 0x222954: 0xc04c9da  jal         func_132768
    ctx->pc = 0x222954u;
    SET_GPR_U32(ctx, 31, 0x22295Cu);
    ctx->pc = 0x132768u;
    if (runtime->hasFunction(0x132768u)) {
        auto targetFn = runtime->lookupFunction(0x132768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22295Cu; }
        if (ctx->pc != 0x22295Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132768_0x132768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22295Cu; }
        if (ctx->pc != 0x22295Cu) { return; }
    }
    ctx->pc = 0x22295Cu;
label_22295c:
    // 0x22295c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x22295cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x222960: 0x2442a380  addiu       $v0, $v0, -0x5C80
    ctx->pc = 0x222960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943616));
    // 0x222964: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x222964u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x222968: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x222968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22296c: 0x8c44d2ac  lw          $a0, -0x2D54($v0)
    ctx->pc = 0x22296cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x222970: 0xc0797a2  jal         func_1E5E88
    ctx->pc = 0x222970u;
    SET_GPR_U32(ctx, 31, 0x222978u);
    ctx->pc = 0x222974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222970u;
            // 0x222974: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5E88u;
    if (runtime->hasFunction(0x1E5E88u)) {
        auto targetFn = runtime->lookupFunction(0x1E5E88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222978u; }
        if (ctx->pc != 0x222978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E5E88_0x1e5e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222978u; }
        if (ctx->pc != 0x222978u) { return; }
    }
    ctx->pc = 0x222978u;
    // 0x222978: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x222978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x22297c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x22297Cu;
    {
        const bool branch_taken_0x22297c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22297c) {
            ctx->pc = 0x222980u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22297Cu;
            // 0x222980: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x222990u;
            goto label_222990;
        }
    }
    ctx->pc = 0x222984u;
    // 0x222984: 0xc0885a8  jal         func_2216A0
    ctx->pc = 0x222984u;
    SET_GPR_U32(ctx, 31, 0x22298Cu);
    ctx->pc = 0x222988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222984u;
            // 0x222988: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2216A0u;
    if (runtime->hasFunction(0x2216A0u)) {
        auto targetFn = runtime->lookupFunction(0x2216A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22298Cu; }
        if (ctx->pc != 0x22298Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2216a0_0x2216c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22298Cu; }
        if (ctx->pc != 0x22298Cu) { return; }
    }
    ctx->pc = 0x22298Cu;
    // 0x22298c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x22298cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_222990:
    // 0x222990: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x222990u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222994: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x222994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222998: 0x3e00008  jr          $ra
    ctx->pc = 0x222998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22299Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222998u;
            // 0x22299c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2227B8u: goto label_2227b8;
            case 0x2227C4u: goto label_2227c4;
            case 0x222818u: goto label_222818;
            case 0x22281Cu: goto label_22281c;
            case 0x2228B8u: goto label_2228b8;
            case 0x2228E8u: goto label_2228e8;
            case 0x2228F8u: goto label_2228f8;
            case 0x22295Cu: goto label_22295c;
            case 0x222990u: goto label_222990;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2229A0u;
}
