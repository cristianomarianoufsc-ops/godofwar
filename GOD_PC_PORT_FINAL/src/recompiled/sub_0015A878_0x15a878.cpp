#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015A878
// Address: 0x15a878 - 0x15acc0
void sub_0015A878_0x15a878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015A878_0x15a878");
#endif

    ctx->pc = 0x15a878u;

    // 0x15a878: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x15a878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x15a87c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x15a87cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x15a880: 0x7fb001a0  sq          $s0, 0x1A0($sp)
    ctx->pc = 0x15a880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 16));
    // 0x15a884: 0x7fb10190  sq          $s1, 0x190($sp)
    ctx->pc = 0x15a884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 17));
    // 0x15a888: 0x7fb20180  sq          $s2, 0x180($sp)
    ctx->pc = 0x15a888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 18));
    // 0x15a88c: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x15a88cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a890: 0x7fb30170  sq          $s3, 0x170($sp)
    ctx->pc = 0x15a890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 19));
    // 0x15a894: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x15a894u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a898: 0x7fb50150  sq          $s5, 0x150($sp)
    ctx->pc = 0x15a898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 21));
    // 0x15a89c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x15a89cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a8a0: 0x7fb40160  sq          $s4, 0x160($sp)
    ctx->pc = 0x15a8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 20));
    // 0x15a8a4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x15a8a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a8a8: 0x7fb60140  sq          $s6, 0x140($sp)
    ctx->pc = 0x15a8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 22));
    // 0x15a8ac: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x15a8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x15a8b0: 0x8c50104c  lw          $s0, 0x104C($v0)
    ctx->pc = 0x15a8b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4172)));
    // 0x15a8b4: 0x78c20030  lq          $v0, 0x30($a2)
    ctx->pc = 0x15a8b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x15a8b8: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x15a8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
    // 0x15a8bc: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x15a8bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15a8c0: 0x8e1603ac  lw          $s6, 0x3AC($s0)
    ctx->pc = 0x15a8c0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x15a8c4: 0x8e740050  lw          $s4, 0x50($s3)
    ctx->pc = 0x15a8c4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x15a8c8: 0x7fa300f0  sq          $v1, 0xF0($sp)
    ctx->pc = 0x15a8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 3));
    // 0x15a8cc: 0x78c40010  lq          $a0, 0x10($a2)
    ctx->pc = 0x15a8ccu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x15a8d0: 0x7fa40100  sq          $a0, 0x100($sp)
    ctx->pc = 0x15a8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 4));
    // 0x15a8d4: 0x78c60020  lq          $a2, 0x20($a2)
    ctx->pc = 0x15a8d4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x15a8d8: 0xafa800c0  sw          $t0, 0xC0($sp)
    ctx->pc = 0x15a8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 8));
    // 0x15a8dc: 0x7fa60110  sq          $a2, 0x110($sp)
    ctx->pc = 0x15a8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 6));
label_15a8e0:
    // 0x15a8e0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x15a8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x15a8e4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x15a8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15a8e8: 0xe22018  mult        $a0, $a3, $v0
    ctx->pc = 0x15a8e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x15a8ec: 0x951021  addu        $v0, $a0, $s5
    ctx->pc = 0x15a8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x15a8f0: 0x8445ffec  lh          $a1, -0x14($v0)
    ctx->pc = 0x15a8f0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294967276)));
    // 0x15a8f4: 0x14a3006c  bne         $a1, $v1, . + 4 + (0x6C << 2)
    ctx->pc = 0x15A8F4u;
    {
        const bool branch_taken_0x15a8f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x15A8F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A8F4u;
            // 0x15a8f8: 0x2444ffec  addiu       $a0, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a8f4) {
            ctx->pc = 0x15AAA8u;
            goto label_15aaa8;
        }
    }
    ctx->pc = 0x15A8FCu;
    // 0x15a8fc: 0x8c88000c  lw          $t0, 0xC($a0)
    ctx->pc = 0x15a8fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x15a900: 0x8c890008  lw          $t1, 0x8($a0)
    ctx->pc = 0x15a900u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x15a904: 0x71091b89  pcpyld      $v1, $t0, $t1
    ctx->pc = 0x15a904u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9)));
    // 0x15a908: 0xdba200f0  lqc2        $vf2, 0xF0($sp)
    ctx->pc = 0x15a908u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x15a90c: 0x8c890010  lw          $t1, 0x10($a0)
    ctx->pc = 0x15a90cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x15a910: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x15a910u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x15a914: 0x71091389  pcpyld      $v0, $t0, $t1
    ctx->pc = 0x15a914u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9)));
    // 0x15a918: 0x70432cc8  ppacw       $a1, $v0, $v1
    ctx->pc = 0x15a918u;
    SET_GPR_VEC(ctx, 5, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x15a91c: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x15a91cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x15a920: 0x4be111bc  vmulax.xyzw $ACC, $vf2, $vf1x
    ctx->pc = 0x15a920u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x15a924: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x15a924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15a928: 0xdba20100  lqc2        $vf2, 0x100($sp)
    ctx->pc = 0x15a928u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x15a92c: 0x4be110bd  vmadday.xyzw $ACC, $vf2, $vf1y
    ctx->pc = 0x15a92cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x15a930: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x15a930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15a934: 0xdba20110  lqc2        $vf2, 0x110($sp)
    ctx->pc = 0x15a934u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x15a938: 0x4be110be  vmaddaz.xyzw $ACC, $vf2, $vf1z
    ctx->pc = 0x15a938u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x15a93c: 0xdba20120  lqc2        $vf2, 0x120($sp)
    ctx->pc = 0x15a93cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x15a940: 0x4be1104b  vmaddw.xyzw $vf1, $vf2, $vf1w
    ctx->pc = 0x15a940u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x15a944: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x15a944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15a948: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x15a948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x15a94c: 0x48a41800  qmtc2.ni    $a0, $vf3
    ctx->pc = 0x15a94cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x15a950: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x15a950u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x15a954: 0x4a231040  vaddx.w     $vf1, $vf2, $vf3x
    ctx->pc = 0x15a954u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15a958: 0xc6050384  lwc1        $f5, 0x384($s0)
    ctx->pc = 0x15a958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x15a95c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x15a95cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15a960: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x15a960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x15a964: 0x70031789  pexew       $v0, $v1
    ctx->pc = 0x15a964u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x15a968: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x15a968u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x15a96c: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x15a96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15a970: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x15a970u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x15a974: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x15a974u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x15a978: 0x44823800  mtc1        $v0, $f7
    ctx->pc = 0x15a978u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x15a97c: 0x4b010083  vaddw.x     $vf2, $vf0, $vf1w
    ctx->pc = 0x15a97cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x15a980: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x15a980u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a984: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x15a984u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x15a988: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x15a988u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x15a98c: 0x46032081  sub.s       $f2, $f4, $f3
    ctx->pc = 0x15a98cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x15a990: 0x46022836  c.le.s      $f5, $f2
    ctx->pc = 0x15a990u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15a994: 0x0  nop
    ctx->pc = 0x15a994u;
    // NOP
    // 0x15a998: 0x4503003b  bc1tl       . + 4 + (0x3B << 2)
    ctx->pc = 0x15A998u;
    {
        const bool branch_taken_0x15a998 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15a998) {
            ctx->pc = 0x15A99Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15A998u;
            // 0x15a99c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15AA88u;
            goto label_15aa88;
        }
    }
    ctx->pc = 0x15A9A0u;
    // 0x15a9a0: 0x46032000  add.s       $f0, $f4, $f3
    ctx->pc = 0x15a9a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x15a9a4: 0xc6010388  lwc1        $f1, 0x388($s0)
    ctx->pc = 0x15a9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a9a8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x15a9a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15a9ac: 0x0  nop
    ctx->pc = 0x15a9acu;
    // NOP
    // 0x15a9b0: 0x45030035  bc1tl       . + 4 + (0x35 << 2)
    ctx->pc = 0x15A9B0u;
    {
        const bool branch_taken_0x15a9b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15a9b0) {
            ctx->pc = 0x15A9B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15A9B0u;
            // 0x15a9b4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15AA88u;
            goto label_15aa88;
        }
    }
    ctx->pc = 0x15A9B8u;
    // 0x15a9b8: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x15a9b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15a9bc: 0x0  nop
    ctx->pc = 0x15a9bcu;
    // NOP
    // 0x15a9c0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x15A9C0u;
    {
        const bool branch_taken_0x15a9c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15a9c0) {
            ctx->pc = 0x15A9C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15A9C0u;
            // 0x15a9c4: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15A9C8u;
            goto label_15a9c8;
        }
    }
    ctx->pc = 0x15A9C8u;
label_15a9c8:
    // 0x15a9c8: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x15a9c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15a9cc: 0x0  nop
    ctx->pc = 0x15a9ccu;
    // NOP
    // 0x15a9d0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x15A9D0u;
    {
        const bool branch_taken_0x15a9d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15a9d0) {
            ctx->pc = 0x15A9D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15A9D0u;
            // 0x15a9d4: 0x34630010  ori         $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
            ctx->pc = 0x15A9D8u;
            goto label_15a9d8;
        }
    }
    ctx->pc = 0x15A9D8u;
label_15a9d8:
    // 0x15a9d8: 0xc60002c0  lwc1        $f0, 0x2C0($s0)
    ctx->pc = 0x15a9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a9dc: 0xc60102c8  lwc1        $f1, 0x2C8($s0)
    ctx->pc = 0x15a9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a9e0: 0x46003082  mul.s       $f2, $f6, $f0
    ctx->pc = 0x15a9e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x15a9e4: 0x46001005  abs.s       $f0, $f2
    ctx->pc = 0x15a9e4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[2]);
    // 0x15a9e8: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x15a9e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x15a9ec: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x15a9ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x15a9f0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15a9f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15a9f4: 0x0  nop
    ctx->pc = 0x15a9f4u;
    // NOP
    // 0x15a9f8: 0x45010023  bc1t        . + 4 + (0x23 << 2)
    ctx->pc = 0x15A9F8u;
    {
        const bool branch_taken_0x15a9f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x15A9FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A9F8u;
            // 0x15a9fc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a9f8) {
            ctx->pc = 0x15AA88u;
            goto label_15aa88;
        }
    }
    ctx->pc = 0x15AA00u;
    // 0x15aa00: 0x46020800  add.s       $f0, $f1, $f2
    ctx->pc = 0x15aa00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x15aa04: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x15aa04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15aa08: 0x0  nop
    ctx->pc = 0x15aa08u;
    // NOP
    // 0x15aa0c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x15AA0Cu;
    {
        const bool branch_taken_0x15aa0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15aa0c) {
            ctx->pc = 0x15AA10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15AA0Cu;
            // 0x15aa10: 0x34630001  ori         $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x15AA14u;
            goto label_15aa14;
        }
    }
    ctx->pc = 0x15AA14u;
label_15aa14:
    // 0x15aa14: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x15aa14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x15aa18: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x15aa18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15aa1c: 0x0  nop
    ctx->pc = 0x15aa1cu;
    // NOP
    // 0x15aa20: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x15AA20u;
    {
        const bool branch_taken_0x15aa20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15aa20) {
            ctx->pc = 0x15AA24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15AA20u;
            // 0x15aa24: 0x34630002  ori         $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
            ctx->pc = 0x15AA28u;
            goto label_15aa28;
        }
    }
    ctx->pc = 0x15AA28u;
label_15aa28:
    // 0x15aa28: 0xc60002d4  lwc1        $f0, 0x2D4($s0)
    ctx->pc = 0x15aa28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15aa2c: 0xc60102d8  lwc1        $f1, 0x2D8($s0)
    ctx->pc = 0x15aa2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15aa30: 0x46003882  mul.s       $f2, $f7, $f0
    ctx->pc = 0x15aa30u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x15aa34: 0x46001005  abs.s       $f0, $f2
    ctx->pc = 0x15aa34u;
    ctx->f[0] = FPU_ABS_S(ctx->f[2]);
    // 0x15aa38: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x15aa38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x15aa3c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x15aa3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x15aa40: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15aa40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15aa44: 0x0  nop
    ctx->pc = 0x15aa44u;
    // NOP
    // 0x15aa48: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x15AA48u;
    {
        const bool branch_taken_0x15aa48 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x15AA4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AA48u;
            // 0x15aa4c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aa48) {
            ctx->pc = 0x15AA88u;
            goto label_15aa88;
        }
    }
    ctx->pc = 0x15AA50u;
    // 0x15aa50: 0x46020800  add.s       $f0, $f1, $f2
    ctx->pc = 0x15aa50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x15aa54: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x15aa54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15aa58: 0x0  nop
    ctx->pc = 0x15aa58u;
    // NOP
    // 0x15aa5c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x15AA5Cu;
    {
        const bool branch_taken_0x15aa5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15aa5c) {
            ctx->pc = 0x15AA60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15AA5Cu;
            // 0x15aa60: 0x34630008  ori         $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
            ctx->pc = 0x15AA64u;
            goto label_15aa64;
        }
    }
    ctx->pc = 0x15AA64u;
label_15aa64:
    // 0x15aa64: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x15aa64u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x15aa68: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x15aa68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15aa6c: 0x0  nop
    ctx->pc = 0x15aa6cu;
    // NOP
    // 0x15aa70: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x15AA70u;
    {
        const bool branch_taken_0x15aa70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15aa70) {
            ctx->pc = 0x15AA74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15AA70u;
            // 0x15aa74: 0x34630004  ori         $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
            ctx->pc = 0x15AA78u;
            goto label_15aa78;
        }
    }
    ctx->pc = 0x15AA78u;
label_15aa78:
    // 0x15aa78: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x15aa78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15aa7c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15aa7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15aa80: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x15aa80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x15aa84: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x15aa84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_15aa88:
    // 0x15aa88: 0x1480007d  bnez        $a0, . + 4 + (0x7D << 2)
    ctx->pc = 0x15AA88u;
    {
        const bool branch_taken_0x15aa88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x15AA8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AA88u;
            // 0x15aa8c: 0x71040  sll         $v0, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aa88) {
            ctx->pc = 0x15AC80u;
            goto label_15ac80;
        }
    }
    ctx->pc = 0x15AA90u;
    // 0x15aa90: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x15aa90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x15aa94: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x15aa94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15aa98: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x15aa98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15aa9c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x15aa9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x15aaa0: 0x1000ff8f  b           . + 4 + (-0x71 << 2)
    ctx->pc = 0x15AAA0u;
    {
        const bool branch_taken_0x15aaa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AAA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AAA0u;
            // 0x15aaa4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aaa0) {
            ctx->pc = 0x15A8E0u;
            runtime->cooperativeGuestYield();
            goto label_15a8e0;
        }
    }
    ctx->pc = 0x15AAA8u;
label_15aaa8:
    // 0x15aaa8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x15aaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x15aaac: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x15aaacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x15aab0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15aab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15aab4: 0x10a00072  beqz        $a1, . + 4 + (0x72 << 2)
    ctx->pc = 0x15AAB4u;
    {
        const bool branch_taken_0x15aab4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15aab4) {
            ctx->pc = 0x15AC80u;
            goto label_15ac80;
        }
    }
    ctx->pc = 0x15AABCu;
    // 0x15aabc: 0x8ca200d8  lw          $v0, 0xD8($a1)
    ctx->pc = 0x15aabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 216)));
    // 0x15aac0: 0x2c21024  and         $v0, $s6, $v0
    ctx->pc = 0x15aac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
    // 0x15aac4: 0x1040006e  beqz        $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x15AAC4u;
    {
        const bool branch_taken_0x15aac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15aac4) {
            ctx->pc = 0x15AC80u;
            goto label_15ac80;
        }
    }
    ctx->pc = 0x15AACCu;
    // 0x15aacc: 0x8c88000c  lw          $t0, 0xC($a0)
    ctx->pc = 0x15aaccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x15aad0: 0x8c890008  lw          $t1, 0x8($a0)
    ctx->pc = 0x15aad0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x15aad4: 0x71091b89  pcpyld      $v1, $t0, $t1
    ctx->pc = 0x15aad4u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9)));
    // 0x15aad8: 0xdba200f0  lqc2        $vf2, 0xF0($sp)
    ctx->pc = 0x15aad8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x15aadc: 0x8c890010  lw          $t1, 0x10($a0)
    ctx->pc = 0x15aadcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x15aae0: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x15aae0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x15aae4: 0x71091389  pcpyld      $v0, $t0, $t1
    ctx->pc = 0x15aae4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9)));
    // 0x15aae8: 0x704334c8  ppacw       $a2, $v0, $v1
    ctx->pc = 0x15aae8u;
    SET_GPR_VEC(ctx, 6, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x15aaec: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x15aaecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x15aaf0: 0x4be111bc  vmulax.xyzw $ACC, $vf2, $vf1x
    ctx->pc = 0x15aaf0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x15aaf4: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x15aaf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15aaf8: 0xdba20100  lqc2        $vf2, 0x100($sp)
    ctx->pc = 0x15aaf8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x15aafc: 0x4be110bd  vmadday.xyzw $ACC, $vf2, $vf1y
    ctx->pc = 0x15aafcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x15ab00: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x15ab00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15ab04: 0xdba20110  lqc2        $vf2, 0x110($sp)
    ctx->pc = 0x15ab04u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x15ab08: 0x4be110be  vmaddaz.xyzw $ACC, $vf2, $vf1z
    ctx->pc = 0x15ab08u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x15ab0c: 0xdba20120  lqc2        $vf2, 0x120($sp)
    ctx->pc = 0x15ab0cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x15ab10: 0x4be1104b  vmaddw.xyzw $vf1, $vf2, $vf1w
    ctx->pc = 0x15ab10u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x15ab14: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x15ab14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15ab18: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x15ab18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x15ab1c: 0x48a41800  qmtc2.ni    $a0, $vf3
    ctx->pc = 0x15ab1cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x15ab20: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x15ab20u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x15ab24: 0x4a231040  vaddx.w     $vf1, $vf2, $vf3x
    ctx->pc = 0x15ab24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15ab28: 0xc6050384  lwc1        $f5, 0x384($s0)
    ctx->pc = 0x15ab28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x15ab2c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x15ab2cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15ab30: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x15ab30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x15ab34: 0x70031789  pexew       $v0, $v1
    ctx->pc = 0x15ab34u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x15ab38: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x15ab38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x15ab3c: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x15ab3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15ab40: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x15ab40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x15ab44: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x15ab44u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x15ab48: 0x44823800  mtc1        $v0, $f7
    ctx->pc = 0x15ab48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x15ab4c: 0x4b010083  vaddw.x     $vf2, $vf0, $vf1w
    ctx->pc = 0x15ab4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x15ab50: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x15ab50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x15ab54: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x15ab54u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x15ab58: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x15ab58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x15ab5c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x15ab5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x15ab60: 0x46032081  sub.s       $f2, $f4, $f3
    ctx->pc = 0x15ab60u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x15ab64: 0x46022836  c.le.s      $f5, $f2
    ctx->pc = 0x15ab64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15ab68: 0x0  nop
    ctx->pc = 0x15ab68u;
    // NOP
    // 0x15ab6c: 0x4501002e  bc1t        . + 4 + (0x2E << 2)
    ctx->pc = 0x15AB6Cu;
    {
        const bool branch_taken_0x15ab6c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x15AB70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AB6Cu;
            // 0x15ab70: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ab6c) {
            ctx->pc = 0x15AC28u;
            goto label_15ac28;
        }
    }
    ctx->pc = 0x15AB74u;
    // 0x15ab74: 0x46032000  add.s       $f0, $f4, $f3
    ctx->pc = 0x15ab74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x15ab78: 0xc6010388  lwc1        $f1, 0x388($s0)
    ctx->pc = 0x15ab78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15ab7c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x15ab7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15ab80: 0x0  nop
    ctx->pc = 0x15ab80u;
    // NOP
    // 0x15ab84: 0x45030037  bc1tl       . + 4 + (0x37 << 2)
    ctx->pc = 0x15AB84u;
    {
        const bool branch_taken_0x15ab84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15ab84) {
            ctx->pc = 0x15AB88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15AB84u;
            // 0x15ab88: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15AC64u;
            goto label_15ac64;
        }
    }
    ctx->pc = 0x15AB8Cu;
    // 0x15ab8c: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x15ab8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15ab90: 0x0  nop
    ctx->pc = 0x15ab90u;
    // NOP
    // 0x15ab94: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
    ctx->pc = 0x15AB94u;
    {
        const bool branch_taken_0x15ab94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15ab94) {
            ctx->pc = 0x15AB98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15AB94u;
            // 0x15ab98: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15ABA0u;
            goto label_15aba0;
        }
    }
    ctx->pc = 0x15AB9Cu;
    // 0x15ab9c: 0x0  nop
    ctx->pc = 0x15ab9cu;
    // NOP
label_15aba0:
    // 0x15aba0: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x15aba0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15aba4: 0x0  nop
    ctx->pc = 0x15aba4u;
    // NOP
    // 0x15aba8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x15ABA8u;
    {
        const bool branch_taken_0x15aba8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15aba8) {
            ctx->pc = 0x15ABACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15ABA8u;
            // 0x15abac: 0x34630010  ori         $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
            ctx->pc = 0x15ABB0u;
            goto label_15abb0;
        }
    }
    ctx->pc = 0x15ABB0u;
label_15abb0:
    // 0x15abb0: 0xc60002c0  lwc1        $f0, 0x2C0($s0)
    ctx->pc = 0x15abb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15abb4: 0xc60102c8  lwc1        $f1, 0x2C8($s0)
    ctx->pc = 0x15abb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15abb8: 0x46003082  mul.s       $f2, $f6, $f0
    ctx->pc = 0x15abb8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x15abbc: 0x46001005  abs.s       $f0, $f2
    ctx->pc = 0x15abbcu;
    ctx->f[0] = FPU_ABS_S(ctx->f[2]);
    // 0x15abc0: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x15abc0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x15abc4: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x15abc4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x15abc8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15abc8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15abcc: 0x0  nop
    ctx->pc = 0x15abccu;
    // NOP
    // 0x15abd0: 0x45010024  bc1t        . + 4 + (0x24 << 2)
    ctx->pc = 0x15ABD0u;
    {
        const bool branch_taken_0x15abd0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x15ABD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15ABD0u;
            // 0x15abd4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15abd0) {
            ctx->pc = 0x15AC64u;
            goto label_15ac64;
        }
    }
    ctx->pc = 0x15ABD8u;
    // 0x15abd8: 0x46020800  add.s       $f0, $f1, $f2
    ctx->pc = 0x15abd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x15abdc: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x15abdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15abe0: 0x0  nop
    ctx->pc = 0x15abe0u;
    // NOP
    // 0x15abe4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x15ABE4u;
    {
        const bool branch_taken_0x15abe4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15abe4) {
            ctx->pc = 0x15ABE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15ABE4u;
            // 0x15abe8: 0x34630001  ori         $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x15ABECu;
            goto label_15abec;
        }
    }
    ctx->pc = 0x15ABECu;
label_15abec:
    // 0x15abec: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x15abecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x15abf0: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x15abf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15abf4: 0x0  nop
    ctx->pc = 0x15abf4u;
    // NOP
    // 0x15abf8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x15ABF8u;
    {
        const bool branch_taken_0x15abf8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15abf8) {
            ctx->pc = 0x15ABFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15ABF8u;
            // 0x15abfc: 0x34630002  ori         $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
            ctx->pc = 0x15AC00u;
            goto label_15ac00;
        }
    }
    ctx->pc = 0x15AC00u;
label_15ac00:
    // 0x15ac00: 0xc60002d4  lwc1        $f0, 0x2D4($s0)
    ctx->pc = 0x15ac00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ac04: 0xc60102d8  lwc1        $f1, 0x2D8($s0)
    ctx->pc = 0x15ac04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15ac08: 0x46003882  mul.s       $f2, $f7, $f0
    ctx->pc = 0x15ac08u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x15ac0c: 0x46001005  abs.s       $f0, $f2
    ctx->pc = 0x15ac0cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[2]);
    // 0x15ac10: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x15ac10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x15ac14: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x15ac14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x15ac18: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15ac18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15ac1c: 0x0  nop
    ctx->pc = 0x15ac1cu;
    // NOP
    // 0x15ac20: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x15AC20u;
    {
        const bool branch_taken_0x15ac20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15ac20) {
            ctx->pc = 0x15AC24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15AC20u;
            // 0x15ac24: 0x46020800  add.s       $f0, $f1, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x15AC30u;
            goto label_15ac30;
        }
    }
    ctx->pc = 0x15AC28u;
label_15ac28:
    // 0x15ac28: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x15AC28u;
    {
        const bool branch_taken_0x15ac28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AC2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AC28u;
            // 0x15ac2c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ac28) {
            ctx->pc = 0x15AC64u;
            goto label_15ac64;
        }
    }
    ctx->pc = 0x15AC30u;
label_15ac30:
    // 0x15ac30: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x15ac30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15ac34: 0x0  nop
    ctx->pc = 0x15ac34u;
    // NOP
    // 0x15ac38: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x15AC38u;
    {
        const bool branch_taken_0x15ac38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15ac38) {
            ctx->pc = 0x15AC3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15AC38u;
            // 0x15ac3c: 0x34630008  ori         $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
            ctx->pc = 0x15AC40u;
            goto label_15ac40;
        }
    }
    ctx->pc = 0x15AC40u;
label_15ac40:
    // 0x15ac40: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x15ac40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x15ac44: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x15ac44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15ac48: 0x0  nop
    ctx->pc = 0x15ac48u;
    // NOP
    // 0x15ac4c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x15AC4Cu;
    {
        const bool branch_taken_0x15ac4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15ac4c) {
            ctx->pc = 0x15AC50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15AC4Cu;
            // 0x15ac50: 0x34630004  ori         $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
            ctx->pc = 0x15AC54u;
            goto label_15ac54;
        }
    }
    ctx->pc = 0x15AC54u;
label_15ac54:
    // 0x15ac54: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x15ac54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15ac58: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15ac58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ac5c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x15ac5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x15ac60: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x15ac60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_15ac64:
    // 0x15ac64: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15AC64u;
    {
        const bool branch_taken_0x15ac64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x15AC68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AC64u;
            // 0x15ac68: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ac64) {
            ctx->pc = 0x15AC80u;
            goto label_15ac80;
        }
    }
    ctx->pc = 0x15AC6Cu;
    // 0x15ac6c: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x15ac6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x15ac70: 0x38c6003f  xori        $a2, $a2, 0x3F
    ctx->pc = 0x15ac70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)63);
    // 0x15ac74: 0xc055e98  jal         func_157A60
    ctx->pc = 0x15AC74u;
    SET_GPR_U32(ctx, 31, 0x15AC7Cu);
    ctx->pc = 0x15AC78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AC74u;
            // 0x15ac78: 0x2cc60001  sltiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x157A60u;
    if (runtime->hasFunction(0x157A60u)) {
        auto targetFn = runtime->lookupFunction(0x157A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AC7Cu; }
        if (ctx->pc != 0x15AC7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157A60_0x157a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AC7Cu; }
        if (ctx->pc != 0x15AC7Cu) { return; }
    }
    ctx->pc = 0x15AC7Cu;
    // 0x15ac7c: 0x0  nop
    ctx->pc = 0x15ac7cu;
    // NOP
label_15ac80:
    // 0x15ac80: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x15AC80u;
    {
        const bool branch_taken_0x15ac80 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AC84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AC80u;
            // 0x15ac84: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ac80) {
            ctx->pc = 0x15AC94u;
            goto label_15ac94;
        }
    }
    ctx->pc = 0x15AC88u;
    // 0x15ac88: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x15ac88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x15ac8c: 0x1000ff14  b           . + 4 + (-0xEC << 2)
    ctx->pc = 0x15AC8Cu;
    {
        const bool branch_taken_0x15ac8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AC90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AC8Cu;
            // 0x15ac90: 0x8e270000  lw          $a3, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ac8c) {
            ctx->pc = 0x15A8E0u;
            runtime->cooperativeGuestYield();
            goto label_15a8e0;
        }
    }
    ctx->pc = 0x15AC94u;
label_15ac94:
    // 0x15ac94: 0x7bb001a0  lq          $s0, 0x1A0($sp)
    ctx->pc = 0x15ac94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x15ac98: 0x7bb10190  lq          $s1, 0x190($sp)
    ctx->pc = 0x15ac98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x15ac9c: 0x7bb20180  lq          $s2, 0x180($sp)
    ctx->pc = 0x15ac9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x15aca0: 0x7bb30170  lq          $s3, 0x170($sp)
    ctx->pc = 0x15aca0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x15aca4: 0x7bb40160  lq          $s4, 0x160($sp)
    ctx->pc = 0x15aca4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x15aca8: 0x7bb50150  lq          $s5, 0x150($sp)
    ctx->pc = 0x15aca8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x15acac: 0x7bb60140  lq          $s6, 0x140($sp)
    ctx->pc = 0x15acacu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x15acb0: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x15acb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x15acb4: 0x3e00008  jr          $ra
    ctx->pc = 0x15ACB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15ACB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15ACB4u;
            // 0x15acb8: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15A8E0u: goto label_15a8e0;
            case 0x15A9C8u: goto label_15a9c8;
            case 0x15A9D8u: goto label_15a9d8;
            case 0x15AA14u: goto label_15aa14;
            case 0x15AA28u: goto label_15aa28;
            case 0x15AA64u: goto label_15aa64;
            case 0x15AA78u: goto label_15aa78;
            case 0x15AA88u: goto label_15aa88;
            case 0x15AAA8u: goto label_15aaa8;
            case 0x15ABA0u: goto label_15aba0;
            case 0x15ABB0u: goto label_15abb0;
            case 0x15ABECu: goto label_15abec;
            case 0x15AC00u: goto label_15ac00;
            case 0x15AC28u: goto label_15ac28;
            case 0x15AC30u: goto label_15ac30;
            case 0x15AC40u: goto label_15ac40;
            case 0x15AC54u: goto label_15ac54;
            case 0x15AC64u: goto label_15ac64;
            case 0x15AC80u: goto label_15ac80;
            case 0x15AC94u: goto label_15ac94;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15ACBCu;
    // 0x15acbc: 0x0  nop
    ctx->pc = 0x15acbcu;
    // NOP
}
