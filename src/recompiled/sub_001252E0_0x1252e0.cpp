#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001252E0
// Address: 0x1252e0 - 0x125858
void sub_001252E0_0x1252e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001252E0_0x1252e0");
#endif

    ctx->pc = 0x1252e0u;

    // 0x1252e0: 0x27bdfde0  addiu       $sp, $sp, -0x220
    ctx->pc = 0x1252e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966752));
    // 0x1252e4: 0x7fb301b0  sq          $s3, 0x1B0($sp)
    ctx->pc = 0x1252e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 19));
    // 0x1252e8: 0x7fb401a0  sq          $s4, 0x1A0($sp)
    ctx->pc = 0x1252e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 20));
    // 0x1252ec: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1252ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1252f0: 0x7fb50190  sq          $s5, 0x190($sp)
    ctx->pc = 0x1252f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 21));
    // 0x1252f4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1252f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1252f8: 0x7fb60180  sq          $s6, 0x180($sp)
    ctx->pc = 0x1252f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 22));
    // 0x1252fc: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1252fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125300: 0x7fb001e0  sq          $s0, 0x1E0($sp)
    ctx->pc = 0x125300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 16));
    // 0x125304: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x125304u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125308: 0x7fb101d0  sq          $s1, 0x1D0($sp)
    ctx->pc = 0x125308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 17));
    // 0x12530c: 0x7fb201c0  sq          $s2, 0x1C0($sp)
    ctx->pc = 0x12530cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 18));
    // 0x125310: 0xffbf0170  sd          $ra, 0x170($sp)
    ctx->pc = 0x125310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 31));
    // 0x125314: 0xe7b80210  swc1        $f24, 0x210($sp)
    ctx->pc = 0x125314u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
    // 0x125318: 0xe7b70208  swc1        $f23, 0x208($sp)
    ctx->pc = 0x125318u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
    // 0x12531c: 0xe7b60200  swc1        $f22, 0x200($sp)
    ctx->pc = 0x12531cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x125320: 0xe7b501f8  swc1        $f21, 0x1F8($sp)
    ctx->pc = 0x125320u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
    // 0x125324: 0xe7b401f0  swc1        $f20, 0x1F0($sp)
    ctx->pc = 0x125324u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
    // 0x125328: 0x8e6200ac  lw          $v0, 0xAC($s3)
    ctx->pc = 0x125328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 172)));
    // 0x12532c: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x12532Cu;
    SET_GPR_U32(ctx, 31, 0x125334u);
    ctx->pc = 0x125330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12532Cu;
            // 0x125330: 0x8c500088  lw          $s0, 0x88($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125334u; }
        if (ctx->pc != 0x125334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125334u; }
        if (ctx->pc != 0x125334u) { return; }
    }
    ctx->pc = 0x125334u;
    // 0x125334: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x125334u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x125338: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x125338u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x12533c: 0x3c013000  lui         $at, 0x3000
    ctx->pc = 0x12533cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12288 << 16));
    // 0x125340: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x125340u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x125344: 0x3c01477f  lui         $at, 0x477F
    ctx->pc = 0x125344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18303 << 16));
    // 0x125348: 0x3421ff00  ori         $at, $at, 0xFF00
    ctx->pc = 0x125348u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65280);
    // 0x12534c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12534cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x125350: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x125350u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x125354: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x125354u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x125358: 0x95020006  lhu         $v0, 0x6($t0)
    ctx->pc = 0x125358u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
    // 0x12535c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x12535cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x125360: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x125360u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x125364: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x125364u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x125368: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x125368u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x12536c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x12536Cu;
    {
        const bool branch_taken_0x12536c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12536c) {
            ctx->pc = 0x125370u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12536Cu;
            // 0x125370: 0x85020000  lh          $v0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x125398u;
            goto label_125398;
        }
    }
    ctx->pc = 0x125374u;
    // 0x125374: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x125374u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
label_125378:
    // 0x125378: 0x95020006  lhu         $v0, 0x6($t0)
    ctx->pc = 0x125378u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
    // 0x12537c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x12537cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x125380: 0x0  nop
    ctx->pc = 0x125380u;
    // NOP
    // 0x125384: 0x0  nop
    ctx->pc = 0x125384u;
    // NOP
    // 0x125388: 0x0  nop
    ctx->pc = 0x125388u;
    // NOP
    // 0x12538c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12538Cu;
    {
        const bool branch_taken_0x12538c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12538c) {
            ctx->pc = 0x125390u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12538Cu;
            // 0x125390: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x125378u;
            runtime->cooperativeGuestYield();
            goto label_125378;
        }
    }
    ctx->pc = 0x125394u;
    // 0x125394: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x125394u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_125398:
    // 0x125398: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x125398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x12539c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x12539cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1253a0: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x1253a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1253a4: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x1253a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1253a8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1253a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1253ac: 0x3c0a3f80  lui         $t2, 0x3F80
    ctx->pc = 0x1253acu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16256 << 16));
    // 0x1253b0: 0x8e490000  lw          $t1, 0x0($s2)
    ctx->pc = 0x1253b0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1253b4: 0x70491b89  pcpyld      $v1, $v0, $t1
    ctx->pc = 0x1253b4u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x1253b8: 0x8e490008  lw          $t1, 0x8($s2)
    ctx->pc = 0x1253b8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1253bc: 0x71491389  pcpyld      $v0, $t2, $t1
    ctx->pc = 0x1253bcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x1253c0: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1253c0u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1253c4: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x1253c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x1253c8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1253c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1253cc: 0x85020002  lh          $v0, 0x2($t0)
    ctx->pc = 0x1253ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x1253d0: 0x451818  mult        $v1, $v0, $a1
    ctx->pc = 0x1253d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1253d4: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x1253d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1253d8: 0x8e090004  lw          $t1, 0x4($s0)
    ctx->pc = 0x1253d8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1253dc: 0x8e0a0000  lw          $t2, 0x0($s0)
    ctx->pc = 0x1253dcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1253e0: 0x712a1b89  pcpyld      $v1, $t1, $t2
    ctx->pc = 0x1253e0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x1253e4: 0x8e0a0008  lw          $t2, 0x8($s0)
    ctx->pc = 0x1253e4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1253e8: 0x3c093f80  lui         $t1, 0x3F80
    ctx->pc = 0x1253e8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16256 << 16));
    // 0x1253ec: 0x712a1389  pcpyld      $v0, $t1, $t2
    ctx->pc = 0x1253ecu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x1253f0: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1253f0u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1253f4: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x1253f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x1253f8: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1253f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1253fc: 0x85020004  lh          $v0, 0x4($t0)
    ctx->pc = 0x1253fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x125400: 0x451818  mult        $v1, $v0, $a1
    ctx->pc = 0x125400u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x125404: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x125404u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x125408: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x125408u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x12540c: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x12540cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x125410: 0x70c71b89  pcpyld      $v1, $a2, $a3
    ctx->pc = 0x125410u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 7)));
    // 0x125414: 0x8e280008  lw          $t0, 0x8($s1)
    ctx->pc = 0x125414u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x125418: 0x71281389  pcpyld      $v0, $t1, $t0
    ctx->pc = 0x125418u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x12541c: 0x3c013000  lui         $at, 0x3000
    ctx->pc = 0x12541cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12288 << 16));
    // 0x125420: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x125420u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x125424: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x125424u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x125428: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x125428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x12542c: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x12542Cu;
    SET_GPR_U32(ctx, 31, 0x125434u);
    ctx->pc = 0x125430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12542Cu;
            // 0x125430: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125434u; }
        if (ctx->pc != 0x125434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125434u; }
        if (ctx->pc != 0x125434u) { return; }
    }
    ctx->pc = 0x125434u;
    // 0x125434: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x125434u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x125438: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x125438u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x12543c: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x12543Cu;
    SET_GPR_U32(ctx, 31, 0x125444u);
    ctx->pc = 0x125440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12543Cu;
            // 0x125440: 0x46180502  mul.s       $f20, $f0, $f24 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125444u; }
        if (ctx->pc != 0x125444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125444u; }
        if (ctx->pc != 0x125444u) { return; }
    }
    ctx->pc = 0x125444u;
    // 0x125444: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x125444u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x125448: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x125448u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x12544c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12544cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x125450: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x125450u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x125454: 0x46180042  mul.s       $f1, $f0, $f24
    ctx->pc = 0x125454u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x125458: 0x4601a000  add.s       $f0, $f20, $f1
    ctx->pc = 0x125458u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x12545c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x12545cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x125460: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x125460u;
    {
        const bool branch_taken_0x125460 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x125460) {
            ctx->pc = 0x125478u;
            goto label_125478;
        }
    }
    ctx->pc = 0x125468u;
    // 0x125468: 0x46141501  sub.s       $f20, $f2, $f20
    ctx->pc = 0x125468u;
    ctx->f[20] = FPU_SUB_S(ctx->f[2], ctx->f[20]);
    // 0x12546c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x12546cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x125470: 0x4601a000  add.s       $f0, $f20, $f1
    ctx->pc = 0x125470u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x125474: 0x0  nop
    ctx->pc = 0x125474u;
    // NOP
label_125478:
    // 0x125478: 0x4409a000  mfc1        $t1, $f20
    ctx->pc = 0x125478u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x12547c: 0x48a91800  qmtc2.ni    $t1, $vf3
    ctx->pc = 0x12547cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x125480: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x125480u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x125484: 0xdba200b0  lqc2        $vf2, 0xB0($sp)
    ctx->pc = 0x125484u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x125488: 0x4be31098  vmulx.xyzw  $vf2, $vf2, $vf3x
    ctx->pc = 0x125488u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12548c: 0x440a0800  mfc1        $t2, $f1
    ctx->pc = 0x12548cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x125490: 0x48aa2800  qmtc2.ni    $t2, $vf5
    ctx->pc = 0x125490u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
    // 0x125494: 0xdba100c0  lqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x125494u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x125498: 0x4be50858  vmulx.xyzw  $vf1, $vf1, $vf5x
    ctx->pc = 0x125498u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12549c: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x12549cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1254a0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1254a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1254a4: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x1254a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1254a8: 0xdba100d0  lqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x1254a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1254ac: 0x4be40858  vmulx.xyzw  $vf1, $vf1, $vf4x
    ctx->pc = 0x1254acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1254b0: 0x4be111a8  vadd.xyzw   $vf6, $vf2, $vf1
    ctx->pc = 0x1254b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1254b4: 0x4a26033c  vmove.w     $vf6, $vf0
    ctx->pc = 0x1254b4u;
    ctx->vu0_vf[6] = ctx->vu0_vf[0];
    // 0x1254b8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1254b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1254bc: 0xfba60160  sqc2        $vf6, 0x160($sp)
    ctx->pc = 0x1254bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1254c0: 0x8e6200a0  lw          $v0, 0xA0($s3)
    ctx->pc = 0x1254c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
    // 0x1254c4: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x1254c4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1254c8: 0xc4570024  lwc1        $f23, 0x24($v0)
    ctx->pc = 0x1254c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1254cc: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x1254ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1254d0: 0xfba60150  sqc2        $vf6, 0x150($sp)
    ctx->pc = 0x1254d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1254d4: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x1254d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1254d8: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x1254d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1254dc: 0x70a41389  pcpyld      $v0, $a1, $a0
    ctx->pc = 0x1254dcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x1254e0: 0x8e520014  lw          $s2, 0x14($s2)
    ctx->pc = 0x1254e0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1254e4: 0x44071000  mfc1        $a3, $f2
    ctx->pc = 0x1254e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1254e8: 0x70f22b89  pcpyld      $a1, $a3, $s2
    ctx->pc = 0x1254e8u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 18)));
    // 0x1254ec: 0x70a22cc8  ppacw       $a1, $a1, $v0
    ctx->pc = 0x1254ecu;
    SET_GPR_VEC(ctx, 5, PS2_PPACW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
    // 0x1254f0: 0x7fa50030  sq          $a1, 0x30($sp)
    ctx->pc = 0x1254f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 5));
    // 0x1254f4: 0x7fa500e0  sq          $a1, 0xE0($sp)
    ctx->pc = 0x1254f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 5));
    // 0x1254f8: 0x8e080010  lw          $t0, 0x10($s0)
    ctx->pc = 0x1254f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1254fc: 0x8e09000c  lw          $t1, 0xC($s0)
    ctx->pc = 0x1254fcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x125500: 0x71091389  pcpyld      $v0, $t0, $t1
    ctx->pc = 0x125500u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9)));
    // 0x125504: 0x8e100014  lw          $s0, 0x14($s0)
    ctx->pc = 0x125504u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x125508: 0x440a1000  mfc1        $t2, $f2
    ctx->pc = 0x125508u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x12550c: 0x71501b89  pcpyld      $v1, $t2, $s0
    ctx->pc = 0x12550cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 16)));
    // 0x125510: 0x70621cc8  ppacw       $v1, $v1, $v0
    ctx->pc = 0x125510u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x125514: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x125514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x125518: 0x7fa300f0  sq          $v1, 0xF0($sp)
    ctx->pc = 0x125518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 3));
    // 0x12551c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x12551cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x125520: 0x70442389  pcpyld      $a0, $v0, $a0
    ctx->pc = 0x125520u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x125524: 0x8e310014  lw          $s1, 0x14($s1)
    ctx->pc = 0x125524u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x125528: 0x71511389  pcpyld      $v0, $t2, $s1
    ctx->pc = 0x125528u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 17)));
    // 0x12552c: 0x704414c8  ppacw       $v0, $v0, $a0
    ctx->pc = 0x12552cu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x125530: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x125530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x125534: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x125534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x125538: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x125538u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x12553c: 0x4be308d8  vmulx.xyzw  $vf3, $vf1, $vf3x
    ctx->pc = 0x12553cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x125540: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x125540u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x125544: 0x4be51158  vmulx.xyzw  $vf5, $vf2, $vf5x
    ctx->pc = 0x125544u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x125548: 0x4be518e8  vadd.xyzw   $vf3, $vf3, $vf5
    ctx->pc = 0x125548u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x12554c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x12554cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x125550: 0x4be40918  vmulx.xyzw  $vf4, $vf1, $vf4x
    ctx->pc = 0x125550u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x125554: 0x4be418e8  vadd.xyzw   $vf3, $vf3, $vf4
    ctx->pc = 0x125554u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x125558: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x125558u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12555c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x12555cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x125560: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x125560u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x125564: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x125564u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
    // 0x125568: 0x4be21b3c  vmove.xyzw  $vf2, $vf3
    ctx->pc = 0x125568u;
    ctx->vu0_vf[2] = ctx->vu0_vf[3];
    // 0x12556c: 0x4600b832  c.eq.s      $f23, $f0
    ctx->pc = 0x12556cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x125570: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x125570u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x125574: 0x4a0003bf  vwaitq
    ctx->pc = 0x125574u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x125578: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x125578u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12557c: 0x4a0002ff  vnop
    ctx->pc = 0x12557cu;
    // NOP operation, no action needed for VU0
    // 0x125580: 0x4a0002ff  vnop
    ctx->pc = 0x125580u;
    // NOP operation, no action needed for VU0
    // 0x125584: 0xfba20060  sqc2        $vf2, 0x60($sp)
    ctx->pc = 0x125584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x125588: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x125588u;
    {
        const bool branch_taken_0x125588 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12558Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125588u;
            // 0x12558c: 0xfba20110  sqc2        $vf2, 0x110($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125588) {
            ctx->pc = 0x1255A0u;
            goto label_1255a0;
        }
    }
    ctx->pc = 0x125590u;
    // 0x125590: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x125590u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x125594: 0x0  nop
    ctx->pc = 0x125594u;
    // NOP
    // 0x125598: 0x45010073  bc1t        . + 4 + (0x73 << 2)
    ctx->pc = 0x125598u;
    {
        const bool branch_taken_0x125598 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12559Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125598u;
            // 0x12559c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125598) {
            ctx->pc = 0x125768u;
            goto label_125768;
        }
    }
    ctx->pc = 0x1255A0u;
label_1255a0:
    // 0x1255a0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1255a0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1255a4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1255A4u;
    {
        const bool branch_taken_0x1255a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1255a4) {
            ctx->pc = 0x1255C0u;
            goto label_1255c0;
        }
    }
    ctx->pc = 0x1255ACu;
    // 0x1255ac: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1255acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1255b0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1255b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1255b4: 0x4be11058  vmulx.xyzw  $vf1, $vf2, $vf1x
    ctx->pc = 0x1255b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1255b8: 0x4be13068  vadd.xyzw   $vf1, $vf6, $vf1
    ctx->pc = 0x1255b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1255bc: 0xfba10150  sqc2        $vf1, 0x150($sp)
    ctx->pc = 0x1255bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[1]));
label_1255c0:
    // 0x1255c0: 0x4602b832  c.eq.s      $f23, $f2
    ctx->pc = 0x1255c0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[23], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1255c4: 0x45010032  bc1t        . + 4 + (0x32 << 2)
    ctx->pc = 0x1255C4u;
    {
        const bool branch_taken_0x1255c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1255c4) {
            ctx->pc = 0x125690u;
            goto label_125690;
        }
    }
    ctx->pc = 0x1255CCu;
    // 0x1255cc: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x1255CCu;
    SET_GPR_U32(ctx, 31, 0x1255D4u);
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1255D4u; }
        if (ctx->pc != 0x1255D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1255D4u; }
        if (ctx->pc != 0x1255D4u) { return; }
    }
    ctx->pc = 0x1255D4u;
    // 0x1255d4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1255d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1255d8: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1255d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1255dc: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x1255dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1255e0: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x1255e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x1255e4: 0x4618ad42  mul.s       $f21, $f21, $f24
    ctx->pc = 0x1255e4u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[24]);
    // 0x1255e8: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x1255E8u;
    SET_GPR_U32(ctx, 31, 0x1255F0u);
    ctx->pc = 0x1255ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1255E8u;
            // 0x1255ec: 0x4616ad41  sub.s       $f21, $f21, $f22 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1255F0u; }
        if (ctx->pc != 0x1255F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1255F0u; }
        if (ctx->pc != 0x1255F0u) { return; }
    }
    ctx->pc = 0x1255F0u;
    // 0x1255f0: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1255f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1255f4: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x1255f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x1255f8: 0x4618a502  mul.s       $f20, $f20, $f24
    ctx->pc = 0x1255f8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[24]);
    // 0x1255fc: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x1255FCu;
    SET_GPR_U32(ctx, 31, 0x125604u);
    ctx->pc = 0x125600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1255FCu;
            // 0x125600: 0x4616a501  sub.s       $f20, $f20, $f22 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125604u; }
        if (ctx->pc != 0x125604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125604u; }
        if (ctx->pc != 0x125604u) { return; }
    }
    ctx->pc = 0x125604u;
    // 0x125604: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x125604u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x125608: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x125608u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x12560c: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x12560cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x125610: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x125610u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x125614: 0x4406a000  mfc1        $a2, $f20
    ctx->pc = 0x125614u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x125618: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x125618u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12561c: 0x4407a800  mfc1        $a3, $f21
    ctx->pc = 0x12561cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x125620: 0x70c71b89  pcpyld      $v1, $a2, $a3
    ctx->pc = 0x125620u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 7)));
    // 0x125624: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x125624u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x125628: 0x71091389  pcpyld      $v0, $t0, $t1
    ctx->pc = 0x125628u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9)));
    // 0x12562c: 0xdba20110  lqc2        $vf2, 0x110($sp)
    ctx->pc = 0x12562cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x125630: 0x704354c8  ppacw       $t2, $v0, $v1
    ctx->pc = 0x125630u;
    SET_GPR_VEC(ctx, 10, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x125634: 0x48aa0800  qmtc2.ni    $t2, $vf1
    ctx->pc = 0x125634u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
    // 0x125638: 0x4bc112fe  vopmula.xyz $ACC, $vf2, $vf1
    ctx->pc = 0x125638u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]);
    // 0x12563c: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x12563cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x125640: 0x4bc208ae  vopmsub.xyz $vf2, $vf1, $vf2
    ctx->pc = 0x125640u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x125644: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x125644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x125648: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x125648u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12564c: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x12564cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x125650: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x125650u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x125654: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x125654u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x125658: 0x4403b800  mfc1        $v1, $f23
    ctx->pc = 0x125658u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[23], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12565c: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x12565cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x125660: 0x4a0003bf  vwaitq
    ctx->pc = 0x125660u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x125664: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x125664u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x125668: 0x4a0002ff  vnop
    ctx->pc = 0x125668u;
    // NOP operation, no action needed for VU0
    // 0x12566c: 0x4a0002ff  vnop
    ctx->pc = 0x12566cu;
    // NOP operation, no action needed for VU0
    // 0x125670: 0x48a31800  qmtc2.ni    $v1, $vf3
    ctx->pc = 0x125670u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x125674: 0xfba20080  sqc2        $vf2, 0x80($sp)
    ctx->pc = 0x125674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x125678: 0xfba20130  sqc2        $vf2, 0x130($sp)
    ctx->pc = 0x125678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x12567c: 0x4be31098  vmulx.xyzw  $vf2, $vf2, $vf3x
    ctx->pc = 0x12567cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x125680: 0xdba10150  lqc2        $vf1, 0x150($sp)
    ctx->pc = 0x125680u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x125684: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x125684u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x125688: 0xfba10150  sqc2        $vf1, 0x150($sp)
    ctx->pc = 0x125688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12568c: 0x0  nop
    ctx->pc = 0x12568cu;
    // NOP
label_125690:
    // 0x125690: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x125690u;
    SET_GPR_U32(ctx, 31, 0x125698u);
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125698u; }
        if (ctx->pc != 0x125698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125698u; }
        if (ctx->pc != 0x125698u) { return; }
    }
    ctx->pc = 0x125698u;
    // 0x125698: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x125698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x12569c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x12569cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1256a0: 0x8e6300a0  lw          $v1, 0xA0($s3)
    ctx->pc = 0x1256a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
    // 0x1256a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1256a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1256a8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1256a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1256ac: 0xdba20150  lqc2        $vf2, 0x150($sp)
    ctx->pc = 0x1256acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1256b0: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x1256b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1256b4: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x1256b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1256b8: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x1256b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1256bc: 0x46180842  mul.s       $f1, $f1, $f24
    ctx->pc = 0x1256bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
    // 0x1256c0: 0x461410c2  mul.s       $f3, $f2, $f20
    ctx->pc = 0x1256c0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x1256c4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1256c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1256c8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1256c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1256cc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1256ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1256d0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1256d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x1256d4: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1256d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1256d8: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1256d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1256dc: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1256dcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1256e0: 0x4a0003bf  vwaitq
    ctx->pc = 0x1256e0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1256e4: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x1256e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1256e8: 0x4a0002ff  vnop
    ctx->pc = 0x1256e8u;
    // NOP operation, no action needed for VU0
    // 0x1256ec: 0x4a0002ff  vnop
    ctx->pc = 0x1256ecu;
    // NOP operation, no action needed for VU0
    // 0x1256f0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1256f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1256f4: 0x48a41800  qmtc2.ni    $a0, $vf3
    ctx->pc = 0x1256f4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1256f8: 0xfba20090  sqc2        $vf2, 0x90($sp)
    ctx->pc = 0x1256f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1256fc: 0xfba20140  sqc2        $vf2, 0x140($sp)
    ctx->pc = 0x1256fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x125700: 0x4be31098  vmulx.xyzw  $vf2, $vf2, $vf3x
    ctx->pc = 0x125700u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x125704: 0xdba10160  lqc2        $vf1, 0x160($sp)
    ctx->pc = 0x125704u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x125708: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x125708u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12570c: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x12570Cu;
    SET_GPR_U32(ctx, 31, 0x125714u);
    ctx->pc = 0x125710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12570Cu;
            // 0x125710: 0xfba10160  sqc2        $vf1, 0x160($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125714u; }
        if (ctx->pc != 0x125714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125714u; }
        if (ctx->pc != 0x125714u) { return; }
    }
    ctx->pc = 0x125714u;
    // 0x125714: 0x8e6300a0  lw          $v1, 0xA0($s3)
    ctx->pc = 0x125714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
    // 0x125718: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x125718u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12571c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x12571cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x125720: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x125720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x125724: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x125724u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x125728: 0xc4620014  lwc1        $f2, 0x14($v1)
    ctx->pc = 0x125728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12572c: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x12572cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x125730: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x125730u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x125734: 0x460310c2  mul.s       $f3, $f2, $f3
    ctx->pc = 0x125734u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x125738: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x125738u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x12573c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x12573cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x125740: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x125740u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x125744: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x125744u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x125748: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x125748u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12574c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x12574cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x125750: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x125750u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x125754: 0xdba10150  lqc2        $vf1, 0x150($sp)
    ctx->pc = 0x125754u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x125758: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x125758u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12575c: 0xfba10150  sqc2        $vf1, 0x150($sp)
    ctx->pc = 0x12575cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x125760: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x125760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x125764: 0x0  nop
    ctx->pc = 0x125764u;
    // NOP
label_125768:
    // 0x125768: 0xdba20160  lqc2        $vf2, 0x160($sp)
    ctx->pc = 0x125768u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x12576c: 0x8c43bde8  lw          $v1, -0x4218($v0)
    ctx->pc = 0x12576cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950376)));
    // 0x125770: 0xd86100c0  lqc2        $vf1, 0xC0($v1)
    ctx->pc = 0x125770u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x125774: 0x246200c0  addiu       $v0, $v1, 0xC0
    ctx->pc = 0x125774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x125778: 0x4be209bc  vmulax.xyzw $ACC, $vf1, $vf2x
    ctx->pc = 0x125778u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x12577c: 0xd8410010  lqc2        $vf1, 0x10($v0)
    ctx->pc = 0x12577cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x125780: 0x4be208bd  vmadday.xyzw $ACC, $vf1, $vf2y
    ctx->pc = 0x125780u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x125784: 0xd8410020  lqc2        $vf1, 0x20($v0)
    ctx->pc = 0x125784u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x125788: 0x4be208be  vmaddaz.xyzw $ACC, $vf1, $vf2z
    ctx->pc = 0x125788u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x12578c: 0xd8410030  lqc2        $vf1, 0x30($v0)
    ctx->pc = 0x12578cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x125790: 0x4be2084b  vmaddw.xyzw $vf1, $vf1, $vf2w
    ctx->pc = 0x125790u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x125794: 0xda620080  lqc2        $vf2, 0x80($s3)
    ctx->pc = 0x125794u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x125798: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x125798u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12579c: 0xfa810000  sqc2        $vf1, 0x0($s4)
    ctx->pc = 0x12579cu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1257a0: 0xdba20150  lqc2        $vf2, 0x150($sp)
    ctx->pc = 0x1257a0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1257a4: 0xd86100c0  lqc2        $vf1, 0xC0($v1)
    ctx->pc = 0x1257a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x1257a8: 0x4be209bc  vmulax.xyzw $ACC, $vf1, $vf2x
    ctx->pc = 0x1257a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1257ac: 0xd8410010  lqc2        $vf1, 0x10($v0)
    ctx->pc = 0x1257acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1257b0: 0x4be208bd  vmadday.xyzw $ACC, $vf1, $vf2y
    ctx->pc = 0x1257b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1257b4: 0xd8410020  lqc2        $vf1, 0x20($v0)
    ctx->pc = 0x1257b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1257b8: 0x4be208be  vmaddaz.xyzw $ACC, $vf1, $vf2z
    ctx->pc = 0x1257b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1257bc: 0xd8410030  lqc2        $vf1, 0x30($v0)
    ctx->pc = 0x1257bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1257c0: 0x4be2084b  vmaddw.xyzw $vf1, $vf1, $vf2w
    ctx->pc = 0x1257c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1257c4: 0xda620090  lqc2        $vf2, 0x90($s3)
    ctx->pc = 0x1257c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 144)));
    // 0x1257c8: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1257c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1257cc: 0xfaa10000  sqc2        $vf1, 0x0($s5)
    ctx->pc = 0x1257ccu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1257d0: 0xdba30110  lqc2        $vf3, 0x110($sp)
    ctx->pc = 0x1257d0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1257d4: 0xd86100c0  lqc2        $vf1, 0xC0($v1)
    ctx->pc = 0x1257d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x1257d8: 0x4be309bc  vmulax.xyzw $ACC, $vf1, $vf3x
    ctx->pc = 0x1257d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1257dc: 0xd8420030  lqc2        $vf2, 0x30($v0)
    ctx->pc = 0x1257dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1257e0: 0xd8410010  lqc2        $vf1, 0x10($v0)
    ctx->pc = 0x1257e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1257e4: 0x4be308bd  vmadday.xyzw $ACC, $vf1, $vf3y
    ctx->pc = 0x1257e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1257e8: 0xd8410020  lqc2        $vf1, 0x20($v0)
    ctx->pc = 0x1257e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1257ec: 0x4be308be  vmaddaz.xyzw $ACC, $vf1, $vf3z
    ctx->pc = 0x1257ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1257f0: 0x4be3108b  vmaddw.xyzw $vf2, $vf2, $vf3w
    ctx->pc = 0x1257f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1257f4: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x1257f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1257f8: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1257f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1257fc: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1257fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x125800: 0x7bb001e0  lq          $s0, 0x1E0($sp)
    ctx->pc = 0x125800u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x125804: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x125804u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x125808: 0x4a0003bf  vwaitq
    ctx->pc = 0x125808u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x12580c: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x12580cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x125810: 0x4a0002ff  vnop
    ctx->pc = 0x125810u;
    // NOP operation, no action needed for VU0
    // 0x125814: 0x4a0002ff  vnop
    ctx->pc = 0x125814u;
    // NOP operation, no action needed for VU0
    // 0x125818: 0x7bb101d0  lq          $s1, 0x1D0($sp)
    ctx->pc = 0x125818u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x12581c: 0xfac20000  sqc2        $vf2, 0x0($s6)
    ctx->pc = 0x12581cu;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x125820: 0x7bb201c0  lq          $s2, 0x1C0($sp)
    ctx->pc = 0x125820u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x125824: 0x7bb301b0  lq          $s3, 0x1B0($sp)
    ctx->pc = 0x125824u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x125828: 0x7bb401a0  lq          $s4, 0x1A0($sp)
    ctx->pc = 0x125828u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x12582c: 0x7bb50190  lq          $s5, 0x190($sp)
    ctx->pc = 0x12582cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x125830: 0x7bb60180  lq          $s6, 0x180($sp)
    ctx->pc = 0x125830u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x125834: 0xdfbf0170  ld          $ra, 0x170($sp)
    ctx->pc = 0x125834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x125838: 0xc7b80210  lwc1        $f24, 0x210($sp)
    ctx->pc = 0x125838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x12583c: 0xc7b70208  lwc1        $f23, 0x208($sp)
    ctx->pc = 0x12583cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x125840: 0xc7b60200  lwc1        $f22, 0x200($sp)
    ctx->pc = 0x125840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x125844: 0xc7b501f8  lwc1        $f21, 0x1F8($sp)
    ctx->pc = 0x125844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x125848: 0xc7b401f0  lwc1        $f20, 0x1F0($sp)
    ctx->pc = 0x125848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12584c: 0xfba200a0  sqc2        $vf2, 0xA0($sp)
    ctx->pc = 0x12584cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x125850: 0x3e00008  jr          $ra
    ctx->pc = 0x125850u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125850u;
            // 0x125854: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x125378u: goto label_125378;
            case 0x125398u: goto label_125398;
            case 0x125478u: goto label_125478;
            case 0x1255A0u: goto label_1255a0;
            case 0x1255C0u: goto label_1255c0;
            case 0x125690u: goto label_125690;
            case 0x125768u: goto label_125768;
            default: break;
        }
        return;
    }
    ctx->pc = 0x125858u;
}
