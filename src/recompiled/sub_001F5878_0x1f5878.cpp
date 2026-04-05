#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F5878
// Address: 0x1f5878 - 0x1f5c08
void sub_001F5878_0x1f5878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5878_0x1f5878");
#endif

    ctx->pc = 0x1f5878u;

    // 0x1f5878: 0x27bdfdc0  addiu       $sp, $sp, -0x240
    ctx->pc = 0x1f5878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966720));
    // 0x1f587c: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1f587cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1f5880: 0x7fb301d0  sq          $s3, 0x1D0($sp)
    ctx->pc = 0x1f5880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 19));
    // 0x1f5884: 0x244233c0  addiu       $v0, $v0, 0x33C0
    ctx->pc = 0x1f5884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13248));
    // 0x1f5888: 0xe7b70228  swc1        $f23, 0x228($sp)
    ctx->pc = 0x1f5888u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 552), bits); }
    // 0x1f588c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1f588cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5890: 0x7fa501a0  sq          $a1, 0x1A0($sp)
    ctx->pc = 0x1f5890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 5));
    // 0x1f5894: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x1f5894u;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
    // 0x1f5898: 0x7fb00200  sq          $s0, 0x200($sp)
    ctx->pc = 0x1f5898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 16));
    // 0x1f589c: 0x7fb101f0  sq          $s1, 0x1F0($sp)
    ctx->pc = 0x1f589cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 17));
    // 0x1f58a0: 0x7fb201e0  sq          $s2, 0x1E0($sp)
    ctx->pc = 0x1f58a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 18));
    // 0x1f58a4: 0xffbf01c0  sd          $ra, 0x1C0($sp)
    ctx->pc = 0x1f58a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 31));
    // 0x1f58a8: 0xe7b90238  swc1        $f25, 0x238($sp)
    ctx->pc = 0x1f58a8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 568), bits); }
    // 0x1f58ac: 0xe7b80230  swc1        $f24, 0x230($sp)
    ctx->pc = 0x1f58acu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
    // 0x1f58b0: 0xe7b60220  swc1        $f22, 0x220($sp)
    ctx->pc = 0x1f58b0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
    // 0x1f58b4: 0xe7b50218  swc1        $f21, 0x218($sp)
    ctx->pc = 0x1f58b4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 536), bits); }
    // 0x1f58b8: 0xe7b40210  swc1        $f20, 0x210($sp)
    ctx->pc = 0x1f58b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
    // 0x1f58bc: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x1f58bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1f58c0: 0x7fa301b0  sq          $v1, 0x1B0($sp)
    ctx->pc = 0x1f58c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 3));
    // 0x1f58c4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1f58c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f58c8: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x1f58c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1f58cc: 0x4be208ac  vsub.xyzw   $vf2, $vf1, $vf2
    ctx->pc = 0x1f58ccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f58d0: 0xc07d41e  jal         func_1F5078
    ctx->pc = 0x1F58D0u;
    SET_GPR_U32(ctx, 31, 0x1F58D8u);
    ctx->pc = 0x1F58D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F58D0u;
            // 0x1f58d4: 0x48241000  qmfc2.ni    $a0, $vf2 (Delay Slot)
        SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F5078u;
    if (runtime->hasFunction(0x1F5078u)) {
        auto targetFn = runtime->lookupFunction(0x1F5078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F58D8u; }
        if (ctx->pc != 0x1F58D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1f5078_0x1f50a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F58D8u; }
        if (ctx->pc != 0x1F58D8u) { return; }
    }
    ctx->pc = 0x1F58D8u;
    // 0x1f58d8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1f58d8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1f58dc: 0xdba301b0  lqc2        $vf3, 0x1B0($sp)
    ctx->pc = 0x1f58dcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1f58e0: 0xdba101a0  lqc2        $vf1, 0x1A0($sp)
    ctx->pc = 0x1f58e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1f58e4: 0x4be118ec  vsub.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x1f58e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1f58e8: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1f58e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1f58ec: 0xc07d41e  jal         func_1F5078
    ctx->pc = 0x1F58ECu;
    SET_GPR_U32(ctx, 31, 0x1F58F4u);
    ctx->pc = 0x1F58F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F58ECu;
            // 0x1f58f0: 0x48241800  qmfc2.ni    $a0, $vf3 (Delay Slot)
        SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F5078u;
    if (runtime->hasFunction(0x1F5078u)) {
        auto targetFn = runtime->lookupFunction(0x1F5078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F58F4u; }
        if (ctx->pc != 0x1F58F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1f5078_0x1f50a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F58F4u; }
        if (ctx->pc != 0x1F58F4u) { return; }
    }
    ctx->pc = 0x1F58F4u;
    // 0x1f58f4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1f58f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1f58f8: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1f58f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1f58fc: 0xc441e310  lwc1        $f1, -0x1CF0($v0)
    ctx->pc = 0x1f58fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294959888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f5900: 0x461400a8  max.s       $f2, $f0, $f20
    ctx->pc = 0x1f5900u;
    ctx->f[2] = std::max(ctx->f[0], ctx->f[20]);
    // 0x1f5904: 0xc463e314  lwc1        $f3, -0x1CEC($v1)
    ctx->pc = 0x1f5904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294959892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f5908: 0x46140029  min.s       $f0, $f0, $f20
    ctx->pc = 0x1f5908u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[20]);
    // 0x1f590c: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1f590cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1f5910: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1f5910u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1f5914: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1f5914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1f5918: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x1f5918u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x1f591c: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1f591cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1f5920: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x1f5920u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1f5924: 0x24423450  addiu       $v0, $v0, 0x3450
    ctx->pc = 0x1f5924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13392));
    // 0x1f5928: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1f5928u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1f592c: 0xc464e318  lwc1        $f4, -0x1CE8($v1)
    ctx->pc = 0x1f592cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294959896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1f5930: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x1f5930u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x1f5934: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x1f5934u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1f5938: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1f5938u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1f593c: 0xc483e31c  lwc1        $f3, -0x1CE4($a0)
    ctx->pc = 0x1f593cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294959900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f5940: 0x78440020  lq          $a0, 0x20($v0)
    ctx->pc = 0x1f5940u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1f5944: 0x4602a8a8  max.s       $f2, $f21, $f2
    ctx->pc = 0x1f5944u;
    ctx->f[2] = std::max(ctx->f[21], ctx->f[2]);
    // 0x1f5948: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1f5948u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f594c: 0x4601a868  max.s       $f1, $f21, $f1
    ctx->pc = 0x1f594cu;
    ctx->f[1] = std::max(ctx->f[21], ctx->f[1]);
    // 0x1f5950: 0x46031642  mul.s       $f25, $f2, $f3
    ctx->pc = 0x1f5950u;
    ctx->f[25] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1f5954: 0x46040e02  mul.s       $f24, $f1, $f4
    ctx->pc = 0x1f5954u;
    ctx->f[24] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1f5958: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x1f5958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x1f595c: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x1f595cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
    // 0x1f5960: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1f5960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1f5964: 0xe7b70020  swc1        $f23, 0x20($sp)
    ctx->pc = 0x1f5964u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1f5968: 0xe7b5001c  swc1        $f21, 0x1C($sp)
    ctx->pc = 0x1f5968u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1f596c: 0xe7b50018  swc1        $f21, 0x18($sp)
    ctx->pc = 0x1f596cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1f5970: 0xe7b50014  swc1        $f21, 0x14($sp)
    ctx->pc = 0x1f5970u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1f5974: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x1f5974u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f5978: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f5978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f597c: 0xc07c154  jal         func_1F0550
    ctx->pc = 0x1F597Cu;
    SET_GPR_U32(ctx, 31, 0x1F5984u);
    ctx->pc = 0x1F5980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F597Cu;
            // 0x1f5980: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F0550u;
    if (runtime->hasFunction(0x1F0550u)) {
        auto targetFn = runtime->lookupFunction(0x1F0550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5984u; }
        if (ctx->pc != 0x1F5984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F0550_0x1f0550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5984u; }
        if (ctx->pc != 0x1F5984u) { return; }
    }
    ctx->pc = 0x1F5984u;
    // 0x1f5984: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1f5984u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5988: 0x7ba201a0  lq          $v0, 0x1A0($sp)
    ctx->pc = 0x1f5988u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1f598c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f598cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5990: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1f5990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1f5994: 0x4600ad86  mov.s       $f22, $f21
    ctx->pc = 0x1f5994u;
    ctx->f[22] = FPU_MOV_S(ctx->f[21]);
    // 0x1f5998: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x1f5998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x1f599c: 0xc0614c6  jal         func_185318
    ctx->pc = 0x1F599Cu;
    SET_GPR_U32(ctx, 31, 0x1F59A4u);
    ctx->pc = 0x1F59A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F599Cu;
            // 0x1f59a0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185318u;
    if (runtime->hasFunction(0x185318u)) {
        auto targetFn = runtime->lookupFunction(0x185318u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F59A4u; }
        if (ctx->pc != 0x1F59A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185318_0x185318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F59A4u; }
        if (ctx->pc != 0x1F59A4u) { return; }
    }
    ctx->pc = 0x1F59A4u;
    // 0x1f59a4: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x1f59a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1f59a8:
    // 0x1f59a8: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1f59a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1f59ac: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x1f59acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1f59b0: 0x24423010  addiu       $v0, $v0, 0x3010
    ctx->pc = 0x1f59b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12304));
    // 0x1f59b4: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x1f59b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f59b8: 0xc07cd3e  jal         func_1F34F8
    ctx->pc = 0x1F59B8u;
    SET_GPR_U32(ctx, 31, 0x1F59C0u);
    ctx->pc = 0x1F59BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F59B8u;
            // 0x1f59bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F34F8u;
    if (runtime->hasFunction(0x1F34F8u)) {
        auto targetFn = runtime->lookupFunction(0x1F34F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F59C0u; }
        if (ctx->pc != 0x1F59C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F34F8_0x1f34f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F59C0u; }
        if (ctx->pc != 0x1F59C0u) { return; }
    }
    ctx->pc = 0x1F59C0u;
    // 0x1f59c0: 0x50400025  beql        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x1F59C0u;
    {
        const bool branch_taken_0x1f59c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f59c0) {
            ctx->pc = 0x1F59C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F59C0u;
            // 0x1f59c4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F5A58u;
            goto label_1f5a58;
        }
    }
    ctx->pc = 0x1F59C8u;
    // 0x1f59c8: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x1f59c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1f59cc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1f59ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1f59d0: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x1F59D0u;
    {
        const bool branch_taken_0x1f59d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f59d0) {
            ctx->pc = 0x1F59D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F59D0u;
            // 0x1f59d4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F5A58u;
            goto label_1f5a58;
        }
    }
    ctx->pc = 0x1F59D8u;
    // 0x1f59d8: 0xc07cd5e  jal         func_1F3578
    ctx->pc = 0x1F59D8u;
    SET_GPR_U32(ctx, 31, 0x1F59E0u);
    ctx->pc = 0x1F59DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F59D8u;
            // 0x1f59dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F3578u;
    if (runtime->hasFunction(0x1F3578u)) {
        auto targetFn = runtime->lookupFunction(0x1F3578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F59E0u; }
        if (ctx->pc != 0x1F59E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1f3578_0x1f3580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F59E0u; }
        if (ctx->pc != 0x1F59E0u) { return; }
    }
    ctx->pc = 0x1F59E0u;
    // 0x1f59e0: 0xdba10060  lqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1f59e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f59e4: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x1f59e4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1f59e8: 0x4be118ac  vsub.xyzw   $vf2, $vf3, $vf1
    ctx->pc = 0x1f59e8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f59ec: 0xdba10070  lqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1f59ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f59f0: 0x4be209bc  vmulax.xyzw $ACC, $vf1, $vf2x
    ctx->pc = 0x1f59f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1f59f4: 0xdba10080  lqc2        $vf1, 0x80($sp)
    ctx->pc = 0x1f59f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f59f8: 0x4be208bd  vmadday.xyzw $ACC, $vf1, $vf2y
    ctx->pc = 0x1f59f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f59fc: 0xdba10090  lqc2        $vf1, 0x90($sp)
    ctx->pc = 0x1f59fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1f5a00: 0x4be208be  vmaddaz.xyzw $ACC, $vf1, $vf2z
    ctx->pc = 0x1f5a00u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f5a04: 0xdba100a0  lqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x1f5a04u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f5a08: 0x4be208cb  vmaddw.xyzw $vf3, $vf1, $vf2w
    ctx->pc = 0x1f5a08u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1f5a0c: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x1f5a0cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1f5a10: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x1f5a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1f5a14: 0xc07c084  jal         func_1F0210
    ctx->pc = 0x1F5A14u;
    SET_GPR_U32(ctx, 31, 0x1F5A1Cu);
    ctx->pc = 0x1F5A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5A14u;
            // 0x1f5a18: 0x27a60194  addiu       $a2, $sp, 0x194 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F0210u;
    if (runtime->hasFunction(0x1F0210u)) {
        auto targetFn = runtime->lookupFunction(0x1F0210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5A1Cu; }
        if (ctx->pc != 0x1F5A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F0210_0x1f0210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5A1Cu; }
        if (ctx->pc != 0x1F5A1Cu) { return; }
    }
    ctx->pc = 0x1F5A1Cu;
    // 0x1f5a1c: 0xc7a10190  lwc1        $f1, 0x190($sp)
    ctx->pc = 0x1f5a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f5a20: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x1f5a20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f5a24: 0xc7a00194  lwc1        $f0, 0x194($sp)
    ctx->pc = 0x1f5a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f5a28: 0x4601ad41  sub.s       $f21, $f21, $f1
    ctx->pc = 0x1f5a28u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
    // 0x1f5a2c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F5A2Cu;
    {
        const bool branch_taken_0x1f5a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5A2Cu;
            // 0x1f5a30: 0x4600b581  sub.s       $f22, $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5a2c) {
            ctx->pc = 0x1F5A50u;
            goto label_1f5a50;
        }
    }
    ctx->pc = 0x1F5A34u;
    // 0x1f5a34: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1f5a34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1f5a38: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1f5a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1f5a3c: 0xe46100b0  swc1        $f1, 0xB0($v1)
    ctx->pc = 0x1f5a3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 176), bits); }
    // 0x1f5a40: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1f5a40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5a44: 0xc7a00194  lwc1        $f0, 0x194($sp)
    ctx->pc = 0x1f5a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f5a48: 0xe44000c0  swc1        $f0, 0xC0($v0)
    ctx->pc = 0x1f5a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 192), bits); }
    // 0x1f5a4c: 0x0  nop
    ctx->pc = 0x1f5a4cu;
    // NOP
label_1f5a50:
    // 0x1f5a50: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1f5a50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1f5a54: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f5a54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1f5a58:
    // 0x1f5a58: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x1f5a58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1f5a5c: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x1F5A5Cu;
    {
        const bool branch_taken_0x1f5a5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5A5Cu;
            // 0x1f5a60: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5a5c) {
            ctx->pc = 0x1F59A8u;
            runtime->cooperativeGuestYield();
            goto label_1f59a8;
        }
    }
    ctx->pc = 0x1F5A64u;
    // 0x1f5a64: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x1f5a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f5a68: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1f5a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1f5a6c: 0xc7ac00b0  lwc1        $f12, 0xB0($sp)
    ctx->pc = 0x1f5a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f5a70: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1f5a70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1f5a74: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x1f5a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f5a78: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x1f5a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f5a7c: 0xc44de344  lwc1        $f13, -0x1CBC($v0)
    ctx->pc = 0x1f5a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294959940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f5a80: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x1f5a80u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x1f5a84: 0x4601a501  sub.s       $f20, $f20, $f1
    ctx->pc = 0x1f5a84u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x1f5a88: 0xc46ee348  lwc1        $f14, -0x1CB8($v1)
    ctx->pc = 0x1f5a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294959944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1f5a8c: 0x4600a505  abs.s       $f20, $f20
    ctx->pc = 0x1f5a8cu;
    ctx->f[20] = FPU_ABS_S(ctx->f[20]);
    // 0x1f5a90: 0x46006305  abs.s       $f12, $f12
    ctx->pc = 0x1f5a90u;
    ctx->f[12] = FPU_ABS_S(ctx->f[12]);
    // 0x1f5a94: 0xc07c052  jal         func_1F0148
    ctx->pc = 0x1F5A94u;
    SET_GPR_U32(ctx, 31, 0x1F5A9Cu);
    ctx->pc = 0x1F0148u;
    if (runtime->hasFunction(0x1F0148u)) {
        auto targetFn = runtime->lookupFunction(0x1F0148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5A9Cu; }
        if (ctx->pc != 0x1F5A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1f0148_0x1f0210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5A9Cu; }
        if (ctx->pc != 0x1F5A9Cu) { return; }
    }
    ctx->pc = 0x1F5A9Cu;
    // 0x1f5a9c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1f5a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1f5aa0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1f5aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1f5aa4: 0xc441e34c  lwc1        $f1, -0x1CB4($v0)
    ctx->pc = 0x1f5aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294959948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f5aa8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1f5aa8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1f5aac: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1f5aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1f5ab0: 0xc46de338  lwc1        $f13, -0x1CC8($v1)
    ctx->pc = 0x1f5ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294959928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f5ab4: 0xc44ee33c  lwc1        $f14, -0x1CC4($v0)
    ctx->pc = 0x1f5ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294959932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1f5ab8: 0xc07c052  jal         func_1F0148
    ctx->pc = 0x1F5AB8u;
    SET_GPR_U32(ctx, 31, 0x1F5AC0u);
    ctx->pc = 0x1F5ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5AB8u;
            // 0x1f5abc: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F0148u;
    if (runtime->hasFunction(0x1F0148u)) {
        auto targetFn = runtime->lookupFunction(0x1F0148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5AC0u; }
        if (ctx->pc != 0x1F5AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1f0148_0x1f0210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5AC0u; }
        if (ctx->pc != 0x1F5AC0u) { return; }
    }
    ctx->pc = 0x1F5AC0u;
    // 0x1f5ac0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1f5ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1f5ac4: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1f5ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1f5ac8: 0xc442e340  lwc1        $f2, -0x1CC0($v0)
    ctx->pc = 0x1f5ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294959936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f5acc: 0xc461e350  lwc1        $f1, -0x1CB0($v1)
    ctx->pc = 0x1f5accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294959952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f5ad0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1f5ad0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1f5ad4: 0x4601b842  mul.s       $f1, $f23, $f1
    ctx->pc = 0x1f5ad4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[23], ctx->f[1]);
    // 0x1f5ad8: 0x3c013d80  lui         $at, 0x3D80
    ctx->pc = 0x1f5ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15744 << 16));
    // 0x1f5adc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1f5adcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f5ae0: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1f5ae0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x1f5ae4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1f5ae4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1f5ae8: 0x4618a500  add.s       $f20, $f20, $f24
    ctx->pc = 0x1f5ae8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[24]);
    // 0x1f5aec: 0x4619a500  add.s       $f20, $f20, $f25
    ctx->pc = 0x1f5aecu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[25]);
    // 0x1f5af0: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F5AF0u;
    {
        const bool branch_taken_0x1f5af0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5AF0u;
            // 0x1f5af4: 0x4601a500  add.s       $f20, $f20, $f1 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5af0) {
            ctx->pc = 0x1F5B08u;
            goto label_1f5b08;
        }
    }
    ctx->pc = 0x1F5AF8u;
    // 0x1f5af8: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x1f5af8u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f5afc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f5afcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f5b00: 0x4600b583  div.s       $f22, $f22, $f0
    ctx->pc = 0x1f5b00u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[22] = ctx->f[22] / ctx->f[0];
    // 0x1f5b04: 0x4600ad43  div.s       $f21, $f21, $f0
    ctx->pc = 0x1f5b04u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[21] = ctx->f[21] / ctx->f[0];
label_1f5b08:
    // 0x1f5b08: 0x4600b307  neg.s       $f12, $f22
    ctx->pc = 0x1f5b08u;
    ctx->f[12] = FPU_NEG_S(ctx->f[22]);
    // 0x1f5b0c: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x1f5b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x1f5b10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f5b10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f5b14: 0x4600ab47  neg.s       $f13, $f21
    ctx->pc = 0x1f5b14u;
    ctx->f[13] = FPU_NEG_S(ctx->f[21]);
    // 0x1f5b18: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1f5b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1f5b1c: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x1f5b1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x1f5b20: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f5b20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f5b24: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1f5b24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1f5b28: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1f5b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1f5b2c: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x1f5b2cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[0];
    // 0x1f5b30: 0x46006b43  div.s       $f13, $f13, $f0
    ctx->pc = 0x1f5b30u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[13] = ctx->f[13] / ctx->f[0];
    // 0x1f5b34: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x1f5b34u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x1f5b38: 0xc061248  jal         func_184920
    ctx->pc = 0x1F5B38u;
    SET_GPR_U32(ctx, 31, 0x1F5B40u);
    ctx->pc = 0x1F5B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5B38u;
            // 0x1f5b3c: 0x46016b42  mul.s       $f13, $f13, $f1 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x184920u;
    if (runtime->hasFunction(0x184920u)) {
        auto targetFn = runtime->lookupFunction(0x184920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5B40u; }
        if (ctx->pc != 0x1F5B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184920_0x184920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5B40u; }
        if (ctx->pc != 0x1F5B40u) { return; }
    }
    ctx->pc = 0x1F5B40u;
    // 0x1f5b40: 0xdba60030  lqc2        $vf6, 0x30($sp)
    ctx->pc = 0x1f5b40u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f5b44: 0xdba70040  lqc2        $vf7, 0x40($sp)
    ctx->pc = 0x1f5b44u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f5b48: 0xdba80050  lqc2        $vf8, 0x50($sp)
    ctx->pc = 0x1f5b48u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f5b4c: 0xdba40060  lqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1f5b4cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f5b50: 0xdba100d0  lqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x1f5b50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1f5b54: 0xdba200e0  lqc2        $vf2, 0xE0($sp)
    ctx->pc = 0x1f5b54u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1f5b58: 0xdba300f0  lqc2        $vf3, 0xF0($sp)
    ctx->pc = 0x1f5b58u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1f5b5c: 0xdba50100  lqc2        $vf5, 0x100($sp)
    ctx->pc = 0x1f5b5cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1f5b60: 0x4be131bc  vmulax.xyzw $ACC, $vf6, $vf1x
    ctx->pc = 0x1f5b60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1f5b64: 0x4be138bd  vmadday.xyzw $ACC, $vf7, $vf1y
    ctx->pc = 0x1f5b64u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f5b68: 0x4be140be  vmaddaz.xyzw $ACC, $vf8, $vf1z
    ctx->pc = 0x1f5b68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f5b6c: 0x4be1204b  vmaddw.xyzw $vf1, $vf4, $vf1w
    ctx->pc = 0x1f5b6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1f5b70: 0x4be231bc  vmulax.xyzw $ACC, $vf6, $vf2x
    ctx->pc = 0x1f5b70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1f5b74: 0xfba10150  sqc2        $vf1, 0x150($sp)
    ctx->pc = 0x1f5b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f5b78: 0x4be238bd  vmadday.xyzw $ACC, $vf7, $vf2y
    ctx->pc = 0x1f5b78u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f5b7c: 0x4be240be  vmaddaz.xyzw $ACC, $vf8, $vf2z
    ctx->pc = 0x1f5b7cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f5b80: 0x4be2208b  vmaddw.xyzw $vf2, $vf4, $vf2w
    ctx->pc = 0x1f5b80u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1f5b84: 0x4be331bc  vmulax.xyzw $ACC, $vf6, $vf3x
    ctx->pc = 0x1f5b84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1f5b88: 0xfba20160  sqc2        $vf2, 0x160($sp)
    ctx->pc = 0x1f5b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1f5b8c: 0x4be338bd  vmadday.xyzw $ACC, $vf7, $vf3y
    ctx->pc = 0x1f5b8cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f5b90: 0x4be340be  vmaddaz.xyzw $ACC, $vf8, $vf3z
    ctx->pc = 0x1f5b90u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f5b94: 0x4be320cb  vmaddw.xyzw $vf3, $vf4, $vf3w
    ctx->pc = 0x1f5b94u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1f5b98: 0x4be531bc  vmulax.xyzw $ACC, $vf6, $vf5x
    ctx->pc = 0x1f5b98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1f5b9c: 0xfba30170  sqc2        $vf3, 0x170($sp)
    ctx->pc = 0x1f5b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1f5ba0: 0x4be538bd  vmadday.xyzw $ACC, $vf7, $vf5y
    ctx->pc = 0x1f5ba0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f5ba4: 0x4be540be  vmaddaz.xyzw $ACC, $vf8, $vf5z
    ctx->pc = 0x1f5ba4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f5ba8: 0x4be5210b  vmaddw.xyzw $vf4, $vf4, $vf5w
    ctx->pc = 0x1f5ba8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1f5bac: 0xfba40180  sqc2        $vf4, 0x180($sp)
    ctx->pc = 0x1f5bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1f5bb0: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x1f5bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f5bb4: 0xfa640030  sqc2        $vf4, 0x30($s3)
    ctx->pc = 0x1f5bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1f5bb8: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x1f5bb8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x1f5bbc: 0xfa610000  sqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1f5bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f5bc0: 0xfa620010  sqc2        $vf2, 0x10($s3)
    ctx->pc = 0x1f5bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1f5bc4: 0xfa630020  sqc2        $vf3, 0x20($s3)
    ctx->pc = 0x1f5bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1f5bc8: 0x7bb00200  lq          $s0, 0x200($sp)
    ctx->pc = 0x1f5bc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1f5bcc: 0x7bb101f0  lq          $s1, 0x1F0($sp)
    ctx->pc = 0x1f5bccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1f5bd0: 0x7bb201e0  lq          $s2, 0x1E0($sp)
    ctx->pc = 0x1f5bd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1f5bd4: 0x7bb301d0  lq          $s3, 0x1D0($sp)
    ctx->pc = 0x1f5bd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1f5bd8: 0xdfbf01c0  ld          $ra, 0x1C0($sp)
    ctx->pc = 0x1f5bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1f5bdc: 0xc7b90238  lwc1        $f25, 0x238($sp)
    ctx->pc = 0x1f5bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1f5be0: 0xc7b80230  lwc1        $f24, 0x230($sp)
    ctx->pc = 0x1f5be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1f5be4: 0xc7b70228  lwc1        $f23, 0x228($sp)
    ctx->pc = 0x1f5be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1f5be8: 0xc7b60220  lwc1        $f22, 0x220($sp)
    ctx->pc = 0x1f5be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1f5bec: 0xc7b50218  lwc1        $f21, 0x218($sp)
    ctx->pc = 0x1f5becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f5bf0: 0xc7b40210  lwc1        $f20, 0x210($sp)
    ctx->pc = 0x1f5bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f5bf4: 0xfba20120  sqc2        $vf2, 0x120($sp)
    ctx->pc = 0x1f5bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1f5bf8: 0xfba30130  sqc2        $vf3, 0x130($sp)
    ctx->pc = 0x1f5bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1f5bfc: 0xfba40140  sqc2        $vf4, 0x140($sp)
    ctx->pc = 0x1f5bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1f5c00: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5C00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5C00u;
            // 0x1f5c04: 0x27bd0240  addiu       $sp, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F59A8u: goto label_1f59a8;
            case 0x1F5A50u: goto label_1f5a50;
            case 0x1F5A58u: goto label_1f5a58;
            case 0x1F5B08u: goto label_1f5b08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F5C08u;
}
