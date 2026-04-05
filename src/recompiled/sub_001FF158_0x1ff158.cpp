#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FF158
// Address: 0x1ff158 - 0x1ff340
void sub_001FF158_0x1ff158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF158_0x1ff158");
#endif

    ctx->pc = 0x1ff158u;

    // 0x1ff158: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1ff158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1ff15c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ff15cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ff160: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ff160u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ff164: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1ff164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1ff168: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x1ff168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ff16c: 0x7fa50080  sq          $a1, 0x80($sp)
    ctx->pc = 0x1ff16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 5));
    // 0x1ff170: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x1ff170u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x1ff174: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ff174u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1ff178: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x1ff178u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1ff17c: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x1ff17cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ff180: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ff180u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ff184: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ff184u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1ff188: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x1ff188u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ff18c: 0x0  nop
    ctx->pc = 0x1ff18cu;
    // NOP
    // 0x1ff190: 0x45000068  bc1f        . + 4 + (0x68 << 2)
    ctx->pc = 0x1FF190u;
    {
        const bool branch_taken_0x1ff190 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FF194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF190u;
            // 0x1ff194: 0xe4800010  swc1        $f0, 0x10($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff190) {
            ctx->pc = 0x1FF334u;
            goto label_1ff334;
        }
    }
    ctx->pc = 0x1FF198u;
    // 0x1ff198: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1ff198u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ff19c: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1ff19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ff1a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ff1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ff1a4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1ff1a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1ff1a8: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x1ff1a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ff1ac: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x1ff1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x1ff1b0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1ff1b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1ff1b4: 0x4b011080  vaddx.x     $vf2, $vf2, $vf1x
    ctx->pc = 0x1ff1b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ff1b8: 0xfba20060  sqc2        $vf2, 0x60($sp)
    ctx->pc = 0x1ff1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ff1bc: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x1ff1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x1ff1c0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1ff1c0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1ff1c4: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x1ff1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ff1c8: 0x4a411080  vaddx.z     $vf2, $vf2, $vf1x
    ctx->pc = 0x1ff1c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ff1cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ff1ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff1d0: 0xc056df8  jal         func_15B7E0
    ctx->pc = 0x1FF1D0u;
    SET_GPR_U32(ctx, 31, 0x1FF1D8u);
    ctx->pc = 0x1FF1D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF1D0u;
            // 0x1ff1d4: 0xfba20070  sqc2        $vf2, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B7E0u;
    if (runtime->hasFunction(0x15B7E0u)) {
        auto targetFn = runtime->lookupFunction(0x15B7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF1D8u; }
        if (ctx->pc != 0x1FF1D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B7E0_0x15b7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF1D8u; }
        if (ctx->pc != 0x1FF1D8u) { return; }
    }
    ctx->pc = 0x1FF1D8u;
label_1ff1d8:
    // 0x1ff1d8: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x1ff1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_1ff1dc:
    // 0x1ff1dc: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x1FF1DCu;
    {
        const bool branch_taken_0x1ff1dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF1E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF1DCu;
            // 0x1ff1e0: 0x8fa5002c  lw          $a1, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff1dc) {
            ctx->pc = 0x1FF334u;
            goto label_1ff334;
        }
    }
    ctx->pc = 0x1FF1E4u;
    // 0x1ff1e4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1ff1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ff1e8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1ff1e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ff1ec: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x1ff1ecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ff1f0: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1ff1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ff1f4: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x1ff1f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1ff1f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ff1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ff1fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ff1fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ff200: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1ff200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1ff204: 0x306300fc  andi        $v1, $v1, 0xFC
    ctx->pc = 0x1ff204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)252);
    // 0x1ff208: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ff208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ff20c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ff20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ff210: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1ff210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1ff214: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x1ff214u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x1ff218: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x1ff218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1ff21c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ff21cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ff220: 0x306300f0  andi        $v1, $v1, 0xF0
    ctx->pc = 0x1ff220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
    // 0x1ff224: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1ff224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1ff228: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ff228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ff22c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ff22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ff230: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1ff230u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ff234: 0xdba20080  lqc2        $vf2, 0x80($sp)
    ctx->pc = 0x1ff234u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ff238: 0x4bc1133c  vmove.xyz   $vf1, $vf2
    ctx->pc = 0x1ff238u;
    ctx->vu0_vf[1] = ctx->vu0_vf[2];
    // 0x1ff23c: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1ff23cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ff240: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x1ff240u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1ff244: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x1ff244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1ff248: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ff248u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ff24c: 0x306300f0  andi        $v1, $v1, 0xF0
    ctx->pc = 0x1ff24cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
    // 0x1ff250: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1ff250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1ff254: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ff254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ff258: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ff258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ff25c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1ff25cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ff260: 0xdba20050  lqc2        $vf2, 0x50($sp)
    ctx->pc = 0x1ff260u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ff264: 0x4bc1133c  vmove.xyz   $vf1, $vf2
    ctx->pc = 0x1ff264u;
    ctx->vu0_vf[1] = ctx->vu0_vf[2];
    // 0x1ff268: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1ff268u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ff26c: 0x90a30004  lbu         $v1, 0x4($a1)
    ctx->pc = 0x1ff26cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1ff270: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x1ff270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1ff274: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ff274u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ff278: 0x306300f0  andi        $v1, $v1, 0xF0
    ctx->pc = 0x1ff278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
    // 0x1ff27c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1ff27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1ff280: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ff280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ff284: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ff284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ff288: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1ff288u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ff28c: 0xdba20060  lqc2        $vf2, 0x60($sp)
    ctx->pc = 0x1ff28cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ff290: 0x4bc1133c  vmove.xyz   $vf1, $vf2
    ctx->pc = 0x1ff290u;
    ctx->vu0_vf[1] = ctx->vu0_vf[2];
    // 0x1ff294: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1ff294u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ff298: 0x90a30005  lbu         $v1, 0x5($a1)
    ctx->pc = 0x1ff298u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x1ff29c: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x1ff29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1ff2a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ff2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ff2a4: 0x306300f0  andi        $v1, $v1, 0xF0
    ctx->pc = 0x1ff2a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
    // 0x1ff2a8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1ff2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1ff2ac: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x1ff2acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ff2b0: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x1ff2b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1ff2b4: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x1ff2b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1ff2b8: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x1ff2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1ff2bc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1ff2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ff2c0: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x1ff2c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff2c4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ff2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ff2c8: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x1ff2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1ff2cc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1ff2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1ff2d0: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x1ff2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1ff2d4: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1ff2d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1ff2d8: 0xdba20070  lqc2        $vf2, 0x70($sp)
    ctx->pc = 0x1ff2d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ff2dc: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1ff2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1ff2e0: 0x4bc1133c  vmove.xyz   $vf1, $vf2
    ctx->pc = 0x1ff2e0u;
    ctx->vu0_vf[1] = ctx->vu0_vf[2];
    // 0x1ff2e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ff2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ff2e8: 0xf8e10000  sqc2        $vf1, 0x0($a3)
    ctx->pc = 0x1ff2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ff2ec: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x1ff2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    // 0x1ff2f0: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x1ff2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x1ff2f4: 0x1440ffb8  bnez        $v0, . + 4 + (-0x48 << 2)
    ctx->pc = 0x1FF2F4u;
    {
        const bool branch_taken_0x1ff2f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF2F4u;
            // 0x1ff2f8: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff2f4) {
            ctx->pc = 0x1FF1D8u;
            runtime->cooperativeGuestYield();
            goto label_1ff1d8;
        }
    }
    ctx->pc = 0x1FF2FCu;
    // 0x1ff2fc: 0x8fa60044  lw          $a2, 0x44($sp)
    ctx->pc = 0x1ff2fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1ff300: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FF300u;
    {
        const bool branch_taken_0x1ff300 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF300u;
            // 0x1ff304: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff300) {
            ctx->pc = 0x1FF318u;
            goto label_1ff318;
        }
    }
    ctx->pc = 0x1FF308u;
    // 0x1ff308: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x1ff308u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1ff30c: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x1FF30Cu;
    SET_GPR_U32(ctx, 31, 0x1FF314u);
    ctx->pc = 0x1FF310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF30Cu;
            // 0x1ff310: 0x8fa5003c  lw          $a1, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF314u; }
        if (ctx->pc != 0x1FF314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF314u; }
        if (ctx->pc != 0x1FF314u) { return; }
    }
    ctx->pc = 0x1FF314u;
    // 0x1ff314: 0x0  nop
    ctx->pc = 0x1ff314u;
    // NOP
label_1ff318:
    // 0x1ff318: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1ff318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ff31c: 0x1040ffaf  beqz        $v0, . + 4 + (-0x51 << 2)
    ctx->pc = 0x1FF31Cu;
    {
        const bool branch_taken_0x1ff31c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF31Cu;
            // 0x1ff320: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff31c) {
            ctx->pc = 0x1FF1DCu;
            runtime->cooperativeGuestYield();
            goto label_1ff1dc;
        }
    }
    ctx->pc = 0x1FF324u;
    // 0x1ff324: 0xc056dd2  jal         func_15B748
    ctx->pc = 0x1FF324u;
    SET_GPR_U32(ctx, 31, 0x1FF32Cu);
    ctx->pc = 0x1FF328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF324u;
            // 0x1ff328: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B748u;
    if (runtime->hasFunction(0x15B748u)) {
        auto targetFn = runtime->lookupFunction(0x15B748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF32Cu; }
        if (ctx->pc != 0x1FF32Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B748_0x15b748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF32Cu; }
        if (ctx->pc != 0x1FF32Cu) { return; }
    }
    ctx->pc = 0x1FF32Cu;
    // 0x1ff32c: 0x1000ffab  b           . + 4 + (-0x55 << 2)
    ctx->pc = 0x1FF32Cu;
    {
        const bool branch_taken_0x1ff32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF32Cu;
            // 0x1ff330: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff32c) {
            ctx->pc = 0x1FF1DCu;
            runtime->cooperativeGuestYield();
            goto label_1ff1dc;
        }
    }
    ctx->pc = 0x1FF334u;
label_1ff334:
    // 0x1ff334: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1ff334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ff338: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF33Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF338u;
            // 0x1ff33c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FF1D8u: goto label_1ff1d8;
            case 0x1FF1DCu: goto label_1ff1dc;
            case 0x1FF318u: goto label_1ff318;
            case 0x1FF334u: goto label_1ff334;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FF340u;
}
