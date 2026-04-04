#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00116280
// Address: 0x116280 - 0x116708
void sub_00116280_0x116280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116280_0x116280");
#endif

    ctx->pc = 0x116280u;

    // 0x116280: 0x27bdfe00  addiu       $sp, $sp, -0x200
    ctx->pc = 0x116280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966784));
    // 0x116284: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x116284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x116288: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x116288u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11628c: 0x7fb101d0  sq          $s1, 0x1D0($sp)
    ctx->pc = 0x11628cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 17));
    // 0x116290: 0xe7b401f0  swc1        $f20, 0x1F0($sp)
    ctx->pc = 0x116290u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
    // 0x116294: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x116294u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116298: 0x7fb001e0  sq          $s0, 0x1E0($sp)
    ctx->pc = 0x116298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 16));
    // 0x11629c: 0x7fb201c0  sq          $s2, 0x1C0($sp)
    ctx->pc = 0x11629cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 18));
    // 0x1162a0: 0x7fb301b0  sq          $s3, 0x1B0($sp)
    ctx->pc = 0x1162a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 19));
    // 0x1162a4: 0x7fb401a0  sq          $s4, 0x1A0($sp)
    ctx->pc = 0x1162a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 20));
    // 0x1162a8: 0x7fb50190  sq          $s5, 0x190($sp)
    ctx->pc = 0x1162a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 21));
    // 0x1162ac: 0x7fb60180  sq          $s6, 0x180($sp)
    ctx->pc = 0x1162acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 22));
    // 0x1162b0: 0x7fb70170  sq          $s7, 0x170($sp)
    ctx->pc = 0x1162b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 23));
    // 0x1162b4: 0x7fbe0160  sq          $fp, 0x160($sp)
    ctx->pc = 0x1162b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 30));
    // 0x1162b8: 0xffbf0150  sd          $ra, 0x150($sp)
    ctx->pc = 0x1162b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 31));
    // 0x1162bc: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1162bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1162c0: 0xafa500f0  sw          $a1, 0xF0($sp)
    ctx->pc = 0x1162c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 5));
    // 0x1162c4: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x1162c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1162c8: 0xafa600f4  sw          $a2, 0xF4($sp)
    ctx->pc = 0x1162c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 6));
    // 0x1162cc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1162ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1162d0: 0xc6230024  lwc1        $f3, 0x24($s1)
    ctx->pc = 0x1162d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1162d4: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x1162d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x1162d8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1162d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1162dc: 0xc441021c  lwc1        $f1, 0x21C($v0)
    ctx->pc = 0x1162dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1162e0: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1162e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1162e4: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x1162e4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1162e8: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x1162e8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[20] = ctx->f[0] / ctx->f[1];
    // 0x1162ec: 0xe441021c  swc1        $f1, 0x21C($v0)
    ctx->pc = 0x1162ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 540), bits); }
    // 0x1162f0: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1162f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1162f4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1162f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1162f8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1162f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1162fc: 0x70421488  pextlw      $v0, $v0, $v0
    ctx->pc = 0x1162fcu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x116300: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x116300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x116304: 0x7042ac88  pextlw      $s5, $v0, $v0
    ctx->pc = 0x116304u;
    SET_GPR_VEC(ctx, 21, PS2_PEXTLW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x116308: 0x70631c88  pextlw      $v1, $v1, $v1
    ctx->pc = 0x116308u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 3)));
    // 0x11630c: 0x7063a488  pextlw      $s4, $v1, $v1
    ctx->pc = 0x11630cu;
    SET_GPR_VEC(ctx, 20, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 3)));
    // 0x116310: 0x7fb50000  sq          $s5, 0x0($sp)
    ctx->pc = 0x116310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 21));
    // 0x116314: 0x7fb40000  sq          $s4, 0x0($sp)
    ctx->pc = 0x116314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 20));
    // 0x116318: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x116318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x11631c: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x11631cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x116320: 0x24032000  addiu       $v1, $zero, 0x2000
    ctx->pc = 0x116320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x116324: 0x70421488  pextlw      $v0, $v0, $v0
    ctx->pc = 0x116324u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x116328: 0x70631c88  pextlw      $v1, $v1, $v1
    ctx->pc = 0x116328u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 3)));
    // 0x11632c: 0x70422c88  pextlw      $a1, $v0, $v0
    ctx->pc = 0x11632cu;
    SET_GPR_VEC(ctx, 5, PS2_PEXTLW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x116330: 0x70639c88  pextlw      $s3, $v1, $v1
    ctx->pc = 0x116330u;
    SET_GPR_VEC(ctx, 19, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 3)));
    // 0x116334: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x116334u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116338: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x116338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
    // 0x11633c: 0x70441488  pextlw      $v0, $v0, $a0
    ctx->pc = 0x11633cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x116340: 0x7fb30000  sq          $s3, 0x0($sp)
    ctx->pc = 0x116340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 19));
    // 0x116344: 0x70842488  pextlw      $a0, $a0, $a0
    ctx->pc = 0x116344u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 4)));
    // 0x116348: 0x7fa50100  sq          $a1, 0x100($sp)
    ctx->pc = 0x116348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 5));
    // 0x11634c: 0x70443488  pextlw      $a2, $v0, $a0
    ctx->pc = 0x11634cu;
    SET_GPR_VEC(ctx, 6, PS2_PEXTLW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x116350: 0x7fa60110  sq          $a2, 0x110($sp)
    ctx->pc = 0x116350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 6));
    // 0x116354: 0x7fa60000  sq          $a2, 0x0($sp)
    ctx->pc = 0x116354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 6));
    // 0x116358: 0x3c024c22  lui         $v0, 0x4C22
    ctx->pc = 0x116358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19490 << 16));
    // 0x11635c: 0x3442f986  ori         $v0, $v0, 0xF986
    ctx->pc = 0x11635cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63878);
    // 0x116360: 0x70421488  pextlw      $v0, $v0, $v0
    ctx->pc = 0x116360u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x116364: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x116364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x116368: 0x70421389  pcpyld      $v0, $v0, $v0
    ctx->pc = 0x116368u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x11636c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x11636cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x116370: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x116370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x116374: 0x3c0239c9  lui         $v0, 0x39C9
    ctx->pc = 0x116374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14793 << 16));
    // 0x116378: 0x34420fd8  ori         $v0, $v0, 0xFD8
    ctx->pc = 0x116378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4056);
    // 0x11637c: 0x70421488  pextlw      $v0, $v0, $v0
    ctx->pc = 0x11637cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x116380: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x116380u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116384: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x116384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x116388: 0x70421389  pcpyld      $v0, $v0, $v0
    ctx->pc = 0x116388u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x11638c: 0x8e2801f0  lw          $t0, 0x1F0($s1)
    ctx->pc = 0x11638cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 496)));
    // 0x116390: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x116390u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x116394: 0xafa80128  sw          $t0, 0x128($sp)
    ctx->pc = 0x116394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 8));
    // 0x116398: 0x8e29005c  lw          $t1, 0x5C($s1)
    ctx->pc = 0x116398u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x11639c: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x11639cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1163a0: 0xafa90120  sw          $t1, 0x120($sp)
    ctx->pc = 0x1163a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 9));
    // 0x1163a4: 0x8e22006c  lw          $v0, 0x6C($s1)
    ctx->pc = 0x1163a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x1163a8: 0x110000ca  beqz        $t0, . + 4 + (0xCA << 2)
    ctx->pc = 0x1163A8u;
    {
        const bool branch_taken_0x1163a8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1163ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1163A8u;
            // 0x1163ac: 0xafa20124  sw          $v0, 0x124($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1163a8) {
            ctx->pc = 0x1166D4u;
            goto label_1166d4;
        }
    }
    ctx->pc = 0x1163B0u;
    // 0x1163b0: 0xafa70130  sw          $a3, 0x130($sp)
    ctx->pc = 0x1163b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 7));
    // 0x1163b4: 0x0  nop
    ctx->pc = 0x1163b4u;
    // NOP
label_1163b8:
    // 0x1163b8: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x1163b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1163bc: 0x84770000  lh          $s7, 0x0($v1)
    ctx->pc = 0x1163bcu;
    SET_GPR_S32(ctx, 23, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1163c0: 0x12e000bd  beqz        $s7, . + 4 + (0xBD << 2)
    ctx->pc = 0x1163C0u;
    {
        const bool branch_taken_0x1163c0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1163C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1163C0u;
            // 0x1163c4: 0x8fa40120  lw          $a0, 0x120($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1163c0) {
            ctx->pc = 0x1166B8u;
            goto label_1166b8;
        }
    }
    ctx->pc = 0x1163C8u;
    // 0x1163c8: 0x1e1180  sll         $v0, $fp, 6
    ctx->pc = 0x1163c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 6));
    // 0x1163cc: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1163ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1163d0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1163d0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1163d4: 0x8fa60124  lw          $a2, 0x124($sp)
    ctx->pc = 0x1163d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x1163d8: 0x449021  addu        $s2, $v0, $a0
    ctx->pc = 0x1163d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1163dc: 0x458021  addu        $s0, $v0, $a1
    ctx->pc = 0x1163dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1163e0: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x1163e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1163e4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1163e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1163e8: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x1163e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
    // 0x1163ec: 0x0  nop
    ctx->pc = 0x1163ecu;
    // NOP
label_1163f0:
    // 0x1163f0: 0x2e71024  and         $v0, $s7, $a3
    ctx->pc = 0x1163f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & GPR_U64(ctx, 7));
    // 0x1163f4: 0x104000a7  beqz        $v0, . + 4 + (0xA7 << 2)
    ctx->pc = 0x1163F4u;
    {
        const bool branch_taken_0x1163f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1163F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1163F4u;
            // 0x1163f8: 0x8fa8012c  lw          $t0, 0x12C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1163f4) {
            ctx->pc = 0x116694u;
            goto label_116694;
        }
    }
    ctx->pc = 0x1163FCu;
    // 0x1163fc: 0x71027  nor         $v0, $zero, $a3
    ctx->pc = 0x1163fcu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 7)));
    // 0x116400: 0x2e21024  and         $v0, $s7, $v0
    ctx->pc = 0x116400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & GPR_U64(ctx, 2));
    // 0x116404: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x116404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x116408: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x116408u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x11640c: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x11640cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x116410: 0x1060007b  beqz        $v1, . + 4 + (0x7B << 2)
    ctx->pc = 0x116410u;
    {
        const bool branch_taken_0x116410 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x116414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116410u;
            // 0x116414: 0x2bc03  sra         $s7, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116410) {
            ctx->pc = 0x116600u;
            goto label_116600;
        }
    }
    ctx->pc = 0x116418u;
    // 0x116418: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x116418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11641c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x11641cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x116420: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x116420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x116424: 0x21383  sra         $v0, $v0, 14
    ctx->pc = 0x116424u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 14));
    // 0x116428: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x116428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x11642c: 0x42383  sra         $a0, $a0, 14
    ctx->pc = 0x11642cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 14));
    // 0x116430: 0x52b83  sra         $a1, $a1, 14
    ctx->pc = 0x116430u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 14));
    // 0x116434: 0x3c0139c9  lui         $at, 0x39C9
    ctx->pc = 0x116434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14793 << 16));
    // 0x116438: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x116438u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x11643c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x11643cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x116440: 0x31b83  sra         $v1, $v1, 14
    ctx->pc = 0x116440u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 14));
    // 0x116444: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x116444u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x116448: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x116448u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11644c: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x11644cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x116450: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x116450u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x116454: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x116454u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x116458: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x116458u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11645c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x11645cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x116460: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x116460u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x116464: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x116464u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x116468: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x116468u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x11646c: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x11646cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x116470: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x116470u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x116474: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x116474u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x116478: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x116478u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x11647c: 0x71221b89  pcpyld      $v1, $t1, $v0
    ctx->pc = 0x11647cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 2)));
    // 0x116480: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x116480u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x116484: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x116484u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x116488: 0x71091389  pcpyld      $v0, $t0, $t1
    ctx->pc = 0x116488u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9)));
    // 0x11648c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x11648cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x116490: 0x704334c8  ppacw       $a2, $v0, $v1
    ctx->pc = 0x116490u;
    SET_GPR_VEC(ctx, 6, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x116494: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x116494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x116498: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x116498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x11649c: 0x42383  sra         $a0, $a0, 14
    ctx->pc = 0x11649cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 14));
    // 0x1164a0: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1164a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1164a4: 0x52b83  sra         $a1, $a1, 14
    ctx->pc = 0x1164a4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 14));
    // 0x1164a8: 0x31b83  sra         $v1, $v1, 14
    ctx->pc = 0x1164a8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 14));
    // 0x1164ac: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x1164acu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1164b0: 0x21383  sra         $v0, $v0, 14
    ctx->pc = 0x1164b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 14));
    // 0x1164b4: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1164b4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1164b8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1164b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1164bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1164bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1164c0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1164c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1164c4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1164c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1164c8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1164c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1164cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1164ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1164d0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1164d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1164d4: 0x48a62800  qmtc2.ni    $a2, $vf5
    ctx->pc = 0x1164d4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1164d8: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x1164d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x1164dc: 0xfba50040  sqc2        $vf5, 0x40($sp)
    ctx->pc = 0x1164dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1164e0: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x1164e0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1164e4: 0xfba500d0  sqc2        $vf5, 0xD0($sp)
    ctx->pc = 0x1164e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1164e8: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1164e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1164ec: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x1164ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1164f0: 0x44091800  mfc1        $t1, $f3
    ctx->pc = 0x1164f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x1164f4: 0x71092389  pcpyld      $a0, $t0, $t1
    ctx->pc = 0x1164f4u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9)));
    // 0x1164f8: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1164f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1164fc: 0x44081000  mfc1        $t0, $f2
    ctx->pc = 0x1164fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x116500: 0x70c81389  pcpyld      $v0, $a2, $t0
    ctx->pc = 0x116500u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 8)));
    // 0x116504: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x116504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x116508: 0x70444cc8  ppacw       $t1, $v0, $a0
    ctx->pc = 0x116508u;
    SET_GPR_VEC(ctx, 9, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x11650c: 0x48a92000  qmtc2.ni    $t1, $vf4
    ctx->pc = 0x11650cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x116510: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x116510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x116514: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x116514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x116518: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x116518u;
    {
        const bool branch_taken_0x116518 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11651Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116518u;
            // 0x11651c: 0xfba400e0  sqc2        $vf4, 0xE0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116518) {
            ctx->pc = 0x116558u;
            goto label_116558;
        }
    }
    ctx->pc = 0x116520u;
    // 0x116520: 0x4be5209b  vmulw.xyzw  $vf2, $vf4, $vf5w
    ctx->pc = 0x116520u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x116524: 0x4be4285b  vmulw.xyzw  $vf1, $vf5, $vf4w
    ctx->pc = 0x116524u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x116528: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x116528u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x11652c: 0x4bc42afe  vopmula.xyz $ACC, $vf5, $vf4
    ctx->pc = 0x11652cu;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[4]);
    // 0x116530: 0x4bc5206e  vopmsub.xyz $vf1, $vf4, $vf5
    ctx->pc = 0x116530u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x116534: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x116534u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x116538: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x116538u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x11653c: 0x4a2428db  vmulw.w     $vf3, $vf5, $vf4w
    ctx->pc = 0x11653cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x116540: 0x4be4292a  vmul.xyzw   $vf4, $vf5, $vf4
    ctx->pc = 0x116540u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x116544: 0x4b042041  vaddy.x     $vf1, $vf4, $vf4y
    ctx->pc = 0x116544u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x116548: 0x4b040842  vaddz.x     $vf1, $vf1, $vf4z
    ctx->pc = 0x116548u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x11654c: 0x4a2118c4  vsubx.w     $vf3, $vf3, $vf1x
    ctx->pc = 0x11654cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x116550: 0x4a221b3c  vmove.w     $vf2, $vf3
    ctx->pc = 0x116550u;
    ctx->vu0_vf[2] = ctx->vu0_vf[3];
    // 0x116554: 0xfba200e0  sqc2        $vf2, 0xE0($sp)
    ctx->pc = 0x116554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[2]));
label_116558:
    // 0x116558: 0x7ba400d0  lq          $a0, 0xD0($sp)
    ctx->pc = 0x116558u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x11655c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11655cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x116560: 0x7ba500e0  lq          $a1, 0xE0($sp)
    ctx->pc = 0x116560u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x116564: 0xc0429b8  jal         func_10A6E0
    ctx->pc = 0x116564u;
    SET_GPR_U32(ctx, 31, 0x11656Cu);
    ctx->pc = 0x116568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116564u;
            // 0x116568: 0x7fa70140  sq          $a3, 0x140($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A6E0u;
    if (runtime->hasFunction(0x10A6E0u)) {
        auto targetFn = runtime->lookupFunction(0x10A6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11656Cu; }
        if (ctx->pc != 0x11656Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A6E0_0x10a6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11656Cu; }
        if (ctx->pc != 0x11656Cu) { return; }
    }
    ctx->pc = 0x11656Cu;
    // 0x11656c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x11656cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x116570: 0x3c024c22  lui         $v0, 0x4C22
    ctx->pc = 0x116570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19490 << 16));
    // 0x116574: 0x3442f986  ori         $v0, $v0, 0xF986
    ctx->pc = 0x116574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63878);
    // 0x116578: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x116578u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x11657c: 0x4b031058  vmulx.x     $vf1, $vf2, $vf3x
    ctx->pc = 0x11657cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x116580: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x116580u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x116584: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x116584u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x116588: 0x4a831058  vmulx.y     $vf1, $vf2, $vf3x
    ctx->pc = 0x116588u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x11658c: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x11658cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x116590: 0x700417c9  prot3w      $v0, $a0
    ctx->pc = 0x116590u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x116594: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x116594u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x116598: 0x4a431058  vmulx.z     $vf1, $vf2, $vf3x
    ctx->pc = 0x116598u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x11659c: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x11659cu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1165a0: 0x70051789  pexew       $v0, $a1
    ctx->pc = 0x1165a0u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1165a4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1165a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1165a8: 0x4a231098  vmulx.w     $vf2, $vf2, $vf3x
    ctx->pc = 0x1165a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1165ac: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1165acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x1165b0: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x1165b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1165b4: 0x4b020083  vaddw.x     $vf2, $vf0, $vf2w
    ctx->pc = 0x1165b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1165b8: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x1165b8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1165bc: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1165bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1165c0: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x1165c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1165c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1165c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1165c8: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1165c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1165cc: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x1165ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1165d0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1165d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1165d4: 0xe7a1006c  swc1        $f1, 0x6C($sp)
    ctx->pc = 0x1165d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x1165d8: 0x6ba20067  ldl         $v0, 0x67($sp)
    ctx->pc = 0x1165d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1165dc: 0x6fa20060  ldr         $v0, 0x60($sp)
    ctx->pc = 0x1165dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1165e0: 0x6ba3006f  ldl         $v1, 0x6F($sp)
    ctx->pc = 0x1165e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1165e4: 0x6fa30068  ldr         $v1, 0x68($sp)
    ctx->pc = 0x1165e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1165e8: 0xb2020007  sdl         $v0, 0x7($s0)
    ctx->pc = 0x1165e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1165ec: 0xb6020000  sdr         $v0, 0x0($s0)
    ctx->pc = 0x1165ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1165f0: 0xb203000f  sdl         $v1, 0xF($s0)
    ctx->pc = 0x1165f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1165f4: 0xb6030008  sdr         $v1, 0x8($s0)
    ctx->pc = 0x1165f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1165f8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1165F8u;
    {
        const bool branch_taken_0x1165f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1165FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1165F8u;
            // 0x1165fc: 0x7ba70140  lq          $a3, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1165f8) {
            ctx->pc = 0x116694u;
            goto label_116694;
        }
    }
    ctx->pc = 0x116600u;
label_116600:
    // 0x116600: 0x8fa60120  lw          $a2, 0x120($sp)
    ctx->pc = 0x116600u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x116604: 0x8fa800f4  lw          $t0, 0xF4($sp)
    ctx->pc = 0x116604u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x116608: 0x2c61021  addu        $v0, $s6, $a2
    ctx->pc = 0x116608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
    // 0x11660c: 0x7ba40100  lq          $a0, 0x100($sp)
    ctx->pc = 0x11660cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x116610: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x116610u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x116614: 0x2c81821  addu        $v1, $s6, $t0
    ctx->pc = 0x116614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 8)));
    // 0x116618: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x116618u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11661c: 0x70441489  pand        $v0, $v0, $a0
    ctx->pc = 0x11661cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x116620: 0x8fa900f0  lw          $t1, 0xF0($sp)
    ctx->pc = 0x116620u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x116624: 0x70431848  psubw       $v1, $v0, $v1
    ctx->pc = 0x116624u;
    SET_GPR_VEC(ctx, 3, PS2_PSUBW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x116628: 0x72833048  psubw       $a2, $s4, $v1
    ctx->pc = 0x116628u;
    SET_GPR_VEC(ctx, 6, PS2_PSUBW(GPR_VEC(ctx, 20), GPR_VEC(ctx, 3)));
    // 0x11662c: 0x2c92821  addu        $a1, $s6, $t1
    ctx->pc = 0x11662cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 9)));
    // 0x116630: 0x700637ff  psraw       $a2, $a2, 31
    ctx->pc = 0x116630u;
    SET_GPR_VEC(ctx, 6, _mm_srai_epi32(GPR_VEC(ctx, 6), 31));
    // 0x116634: 0x78a40000  lq          $a0, 0x0($a1)
    ctx->pc = 0x116634u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x116638: 0x70d53489  pand        $a2, $a2, $s5
    ctx->pc = 0x116638u;
    SET_GPR_VEC(ctx, 6, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 21)));
    // 0x11663c: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x11663cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x116640: 0x70461048  psubw       $v0, $v0, $a2
    ctx->pc = 0x116640u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x116644: 0x72833008  paddw       $a2, $s4, $v1
    ctx->pc = 0x116644u;
    SET_GPR_VEC(ctx, 6, PS2_PADDW(GPR_VEC(ctx, 20), GPR_VEC(ctx, 3)));
    // 0x116648: 0x700637ff  psraw       $a2, $a2, 31
    ctx->pc = 0x116648u;
    SET_GPR_VEC(ctx, 6, _mm_srai_epi32(GPR_VEC(ctx, 6), 31));
    // 0x11664c: 0x70d53489  pand        $a2, $a2, $s5
    ctx->pc = 0x11664cu;
    SET_GPR_VEC(ctx, 6, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 21)));
    // 0x116650: 0x70461008  paddw       $v0, $v0, $a2
    ctx->pc = 0x116650u;
    SET_GPR_VEC(ctx, 2, PS2_PADDW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x116654: 0x700237ff  psraw       $a2, $v0, 31
    ctx->pc = 0x116654u;
    SET_GPR_VEC(ctx, 6, _mm_srai_epi32(GPR_VEC(ctx, 2), 31));
    // 0x116658: 0x70c01ce9  pnor        $v1, $a2, $zero
    ctx->pc = 0x116658u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x11665c: 0x72663489  pand        $a2, $s3, $a2
    ctx->pc = 0x11665cu;
    SET_GPR_VEC(ctx, 6, PS2_PAND(GPR_VEC(ctx, 19), GPR_VEC(ctx, 6)));
    // 0x116660: 0x72631c89  pand        $v1, $s3, $v1
    ctx->pc = 0x116660u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 19), GPR_VEC(ctx, 3)));
    // 0x116664: 0x70461048  psubw       $v0, $v0, $a2
    ctx->pc = 0x116664u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x116668: 0x70431808  paddw       $v1, $v0, $v1
    ctx->pc = 0x116668u;
    SET_GPR_VEC(ctx, 3, PS2_PADDW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x11666c: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x11666cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x116670: 0x700313bf  psraw       $v0, $v1, 14
    ctx->pc = 0x116670u;
    SET_GPR_VEC(ctx, 2, _mm_srai_epi32(GPR_VEC(ctx, 3), 14));
    // 0x116674: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x116674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
    // 0x116678: 0x7ba60110  lq          $a2, 0x110($sp)
    ctx->pc = 0x116678u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x11667c: 0x70461f09  pmulth      $v1, $v0, $a2
    ctx->pc = 0x11667cu;
    { __m128i prod = _mm_madd_epi16(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)); 
   int32_t p0 = _mm_cvtsi128_si32(prod); 
   int32_t p1 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 4)); 
   int32_t p2 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 8)); 
   int32_t p3 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 12)); 
   int64_t result = (int64_t)p0 + (int64_t)p1 + (int64_t)p2 + (int64_t)p3; 
   ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); 
   SET_GPR_U64(ctx, 3, result); }
    // 0x116680: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x116680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x116684: 0x70832008  paddw       $a0, $a0, $v1
    ctx->pc = 0x116684u;
    SET_GPR_VEC(ctx, 4, PS2_PADDW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x116688: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x116688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
    // 0x11668c: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x11668cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x116690: 0x7fa400c0  sq          $a0, 0xC0($sp)
    ctx->pc = 0x116690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 4));
label_116694:
    // 0x116694: 0x8fa8012c  lw          $t0, 0x12C($sp)
    ctx->pc = 0x116694u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x116698: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x116698u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x11669c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x11669cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1166a0: 0x3047fff0  andi        $a3, $v0, 0xFFF0
    ctx->pc = 0x1166a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65520);
    // 0x1166a4: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x1166a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x1166a8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1166a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1166ac: 0xafa8012c  sw          $t0, 0x12C($sp)
    ctx->pc = 0x1166acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 8));
    // 0x1166b0: 0x16e0ff4f  bnez        $s7, . + 4 + (-0xB1 << 2)
    ctx->pc = 0x1166B0u;
    {
        const bool branch_taken_0x1166b0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x1166B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1166B0u;
            // 0x1166b4: 0x26d60010  addiu       $s6, $s6, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1166b0) {
            ctx->pc = 0x1163F0u;
            runtime->cooperativeGuestYield();
            goto label_1163f0;
        }
    }
    ctx->pc = 0x1166B8u;
label_1166b8:
    // 0x1166b8: 0x8fa90130  lw          $t1, 0x130($sp)
    ctx->pc = 0x1166b8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1166bc: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1166bcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1166c0: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x1166c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x1166c4: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x1166c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x1166c8: 0x3c3102b  sltu        $v0, $fp, $v1
    ctx->pc = 0x1166c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1166cc: 0x1440ff3a  bnez        $v0, . + 4 + (-0xC6 << 2)
    ctx->pc = 0x1166CCu;
    {
        const bool branch_taken_0x1166cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1166D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1166CCu;
            // 0x1166d0: 0xafa90130  sw          $t1, 0x130($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1166cc) {
            ctx->pc = 0x1163B8u;
            runtime->cooperativeGuestYield();
            goto label_1163b8;
        }
    }
    ctx->pc = 0x1166D4u;
label_1166d4:
    // 0x1166d4: 0x7bb001e0  lq          $s0, 0x1E0($sp)
    ctx->pc = 0x1166d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1166d8: 0x7bb101d0  lq          $s1, 0x1D0($sp)
    ctx->pc = 0x1166d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1166dc: 0x7bb201c0  lq          $s2, 0x1C0($sp)
    ctx->pc = 0x1166dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1166e0: 0x7bb301b0  lq          $s3, 0x1B0($sp)
    ctx->pc = 0x1166e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1166e4: 0x7bb401a0  lq          $s4, 0x1A0($sp)
    ctx->pc = 0x1166e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1166e8: 0x7bb50190  lq          $s5, 0x190($sp)
    ctx->pc = 0x1166e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1166ec: 0x7bb60180  lq          $s6, 0x180($sp)
    ctx->pc = 0x1166ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1166f0: 0x7bb70170  lq          $s7, 0x170($sp)
    ctx->pc = 0x1166f0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1166f4: 0x7bbe0160  lq          $fp, 0x160($sp)
    ctx->pc = 0x1166f4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1166f8: 0xdfbf0150  ld          $ra, 0x150($sp)
    ctx->pc = 0x1166f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1166fc: 0xc7b401f0  lwc1        $f20, 0x1F0($sp)
    ctx->pc = 0x1166fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x116700: 0x3e00008  jr          $ra
    ctx->pc = 0x116700u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116700u;
            // 0x116704: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1163B8u: goto label_1163b8;
            case 0x1163F0u: goto label_1163f0;
            case 0x116558u: goto label_116558;
            case 0x116600u: goto label_116600;
            case 0x116694u: goto label_116694;
            case 0x1166B8u: goto label_1166b8;
            case 0x1166D4u: goto label_1166d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x116708u;
}
