#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E6238
// Address: 0x1e6238 - 0x1e6760
void sub_001E6238_0x1e6238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6238_0x1e6238");
#endif

    ctx->pc = 0x1e6238u;

    // 0x1e6238: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x1e6238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x1e623c: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1e623cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1e6240: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1e6240u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e6244: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x1e6244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
    // 0x1e6248: 0x7fb30100  sq          $s3, 0x100($sp)
    ctx->pc = 0x1e6248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 19));
    // 0x1e624c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e624cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6250: 0xe7b50148  swc1        $f21, 0x148($sp)
    ctx->pc = 0x1e6250u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x1e6254: 0xe7b40140  swc1        $f20, 0x140($sp)
    ctx->pc = 0x1e6254u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x1e6258: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x1e6258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
    // 0x1e625c: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x1e625cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
    // 0x1e6260: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x1e6260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x1e6264: 0x8e250320  lw          $a1, 0x320($s1)
    ctx->pc = 0x1e6264u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x1e6268: 0xc6240168  lwc1        $f4, 0x168($s1)
    ctx->pc = 0x1e6268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e626c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1e626cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1e6270: 0xc440023c  lwc1        $f0, 0x23C($v0)
    ctx->pc = 0x1e6270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6274: 0xc4410234  lwc1        $f1, 0x234($v0)
    ctx->pc = 0x1e6274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e6278: 0xc4420238  lwc1        $f2, 0x238($v0)
    ctx->pc = 0x1e6278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e627c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1e627cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1e6280: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1e6280u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1e6284: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1e6284u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1e6288: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1e6288u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1e628c: 0x46040d42  mul.s       $f21, $f1, $f4
    ctx->pc = 0x1e628cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1e6290: 0x46041502  mul.s       $f20, $f2, $f4
    ctx->pc = 0x1e6290u;
    ctx->f[20] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x1e6294: 0x44130000  mfc1        $s3, $f0
    ctx->pc = 0x1e6294u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x1e6298: 0x8e230324  lw          $v1, 0x324($s1)
    ctx->pc = 0x1e6298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 804)));
    // 0x1e629c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1e629cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x1e62a0: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x1e62a0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e62a4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E62A4u;
    {
        const bool branch_taken_0x1e62a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E62A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E62A4u;
            // 0x1e62a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e62a4) {
            ctx->pc = 0x1E62C0u;
            goto label_1e62c0;
        }
    }
    ctx->pc = 0x1E62ACu;
    // 0x1e62ac: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1e62acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x1e62b0: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x1e62b0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x1e62b4: 0x30420060  andi        $v0, $v0, 0x60
    ctx->pc = 0x1e62b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
    // 0x1e62b8: 0x2382b  sltu        $a3, $zero, $v0
    ctx->pc = 0x1e62b8u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e62bc: 0x0  nop
    ctx->pc = 0x1e62bcu;
    // NOP
label_1e62c0:
    // 0x1e62c0: 0x8e230174  lw          $v1, 0x174($s1)
    ctx->pc = 0x1e62c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x1e62c4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1e62c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1e62c8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E62C8u;
    {
        const bool branch_taken_0x1e62c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E62CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E62C8u;
            // 0x1e62cc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e62c8) {
            ctx->pc = 0x1E62DCu;
            goto label_1e62dc;
        }
    }
    ctx->pc = 0x1E62D0u;
    // 0x1e62d0: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1e62d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1e62d4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E62D4u;
    {
        const bool branch_taken_0x1e62d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e62d4) {
            ctx->pc = 0x1E62E0u;
            goto label_1e62e0;
        }
    }
    ctx->pc = 0x1E62DCu;
label_1e62dc:
    // 0x1e62dc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1e62dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e62e0:
    // 0x1e62e0: 0x10e0004d  beqz        $a3, . + 4 + (0x4D << 2)
    ctx->pc = 0x1E62E0u;
    {
        const bool branch_taken_0x1e62e0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e62e0) {
            ctx->pc = 0x1E6418u;
            goto label_1e6418;
        }
    }
    ctx->pc = 0x1E62E8u;
    // 0x1e62e8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e62e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e62ec: 0x8c500104  lw          $s0, 0x104($v0)
    ctx->pc = 0x1e62ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x1e62f0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1e62f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1e62f4: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1e62f4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1e62f8: 0xde020040  ld          $v0, 0x40($s0)
    ctx->pc = 0x1e62f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1e62fc: 0x10450004  beq         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E62FCu;
    {
        const bool branch_taken_0x1e62fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1E6300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E62FCu;
            // 0x1e6300: 0x86320352  lh          $s2, 0x352($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e62fc) {
            ctx->pc = 0x1E6310u;
            goto label_1e6310;
        }
    }
    ctx->pc = 0x1E6304u;
    // 0x1e6304: 0xc04da64  jal         func_136990
    ctx->pc = 0x1E6304u;
    SET_GPR_U32(ctx, 31, 0x1E630Cu);
    ctx->pc = 0x1E6308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6304u;
            // 0x1e6308: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E630Cu; }
        if (ctx->pc != 0x1E630Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E630Cu; }
        if (ctx->pc != 0x1E630Cu) { return; }
    }
    ctx->pc = 0x1E630Cu;
    // 0x1e630c: 0x0  nop
    ctx->pc = 0x1e630cu;
    // NOP
label_1e6310:
    // 0x1e6310: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x1e6310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x1e6314: 0x121980  sll         $v1, $s2, 6
    ctx->pc = 0x1e6314u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x1e6318: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x1e6318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x1e631c: 0xd8810030  lqc2        $vf1, 0x30($a0)
    ctx->pc = 0x1e631cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1e6320: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e6320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e6324: 0xd8440030  lqc2        $vf4, 0x30($v0)
    ctx->pc = 0x1e6324u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1e6328: 0x4be1212c  vsub.xyzw   $vf4, $vf4, $vf1
    ctx->pc = 0x1e6328u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1e632c: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x1e632cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e6330: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1e6330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1e6334: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x1e6334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1e6338: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1e6338u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e633c: 0x4a810100  vaddx.y     $vf4, $vf0, $vf1x
    ctx->pc = 0x1e633cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1e6340: 0xda210050  lqc2        $vf1, 0x50($s1)
    ctx->pc = 0x1e6340u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x1e6344: 0x4be4086a  vmul.xyzw   $vf1, $vf1, $vf4
    ctx->pc = 0x1e6344u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e6348: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1e6348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1e634c: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1e634cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e6350: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1e6350u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e6354: 0xd8830020  lqc2        $vf3, 0x20($a0)
    ctx->pc = 0x1e6354u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1e6358: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x1e6358u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e635c: 0x4be418ea  vmul.xyzw   $vf3, $vf3, $vf4
    ctx->pc = 0x1e635cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e6360: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e6360u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e6364: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1e6364u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e6368: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1e6368u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e636c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1e636cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1e6370: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1e6370u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e6374: 0x3c0140cc  lui         $at, 0x40CC
    ctx->pc = 0x1e6374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16588 << 16));
    // 0x1e6378: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1e6378u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1e637c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1e637cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e6380: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1e6380u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e6384: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1e6384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1e6388: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1e6388u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e638c: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x1e638cu;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x1e6390: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x1e6390u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x1e6394: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x1e6394u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x1e6398: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1e6398u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1e639c: 0x46020029  min.s       $f0, $f0, $f2
    ctx->pc = 0x1e639cu;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[2]);
    // 0x1e63a0: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1e63a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e63a4: 0x0  nop
    ctx->pc = 0x1e63a4u;
    // NOP
    // 0x1e63a8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1E63A8u;
    {
        const bool branch_taken_0x1e63a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e63a8) {
            ctx->pc = 0x1E63ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E63A8u;
            // 0x1e63ac: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E63B0u;
            goto label_1e63b0;
        }
    }
    ctx->pc = 0x1E63B0u;
label_1e63b0:
    // 0x1e63b0: 0x4615ad40  add.s       $f21, $f21, $f21
    ctx->pc = 0x1e63b0u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
    // 0x1e63b4: 0x26250120  addiu       $a1, $s1, 0x120
    ctx->pc = 0x1e63b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x1e63b8: 0x4402a800  mfc1        $v0, $f21
    ctx->pc = 0x1e63b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1e63bc: 0x4407a000  mfc1        $a3, $f20
    ctx->pc = 0x1e63bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1e63c0: 0x70e21b89  pcpyld      $v1, $a3, $v0
    ctx->pc = 0x1e63c0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 2)));
    // 0x1e63c4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e63c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e63c8: 0x71221389  pcpyld      $v0, $t1, $v0
    ctx->pc = 0x1e63c8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 2)));
    // 0x1e63cc: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1e63ccu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1e63d0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1e63d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1e63d4: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x1e63d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x1e63d8: 0x48b31000  qmtc2.ni    $s3, $vf2
    ctx->pc = 0x1e63d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 19));
    // 0x1e63dc: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1e63dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e63e0: 0x4a820840  vaddx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x1e63e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e63e4: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x1e63e4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e63e8: 0x7e220120  sq          $v0, 0x120($s1)
    ctx->pc = 0x1e63e8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 288), GPR_VEC(ctx, 2));
    // 0x1e63ec: 0x4a811885  vsuby.y     $vf2, $vf3, $vf1y
    ctx->pc = 0x1e63ecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e63f0: 0xf8a10010  sqc2        $vf1, 0x10($a1)
    ctx->pc = 0x1e63f0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e63f4: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x1e63f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x1e63f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e63f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e63fc: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1e63fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1e6400: 0x48271000  qmfc2.ni    $a3, $vf2
    ctx->pc = 0x1e6400u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e6404: 0x700737c9  prot3w      $a2, $a3
    ctx->pc = 0x1e6404u;
    SET_GPR_VEC(ctx, 6, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1e6408: 0xaca60020  sw          $a2, 0x20($a1)
    ctx->pc = 0x1e6408u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 6));
    // 0x1e640c: 0xac82e200  sw          $v0, -0x1E00($a0)
    ctx->pc = 0x1e640cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294959616), GPR_U32(ctx, 2));
    // 0x1e6410: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x1E6410u;
    {
        const bool branch_taken_0x1e6410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6410u;
            // 0x1e6414: 0xac60e204  sw          $zero, -0x1DFC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294959620), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6410) {
            ctx->pc = 0x1E6738u;
            goto label_1e6738;
        }
    }
    ctx->pc = 0x1E6418u;
label_1e6418:
    // 0x1e6418: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E6418u;
    {
        const bool branch_taken_0x1e6418 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E641Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6418u;
            // 0x1e641c: 0x30624000  andi        $v0, $v1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6418) {
            ctx->pc = 0x1E6428u;
            goto label_1e6428;
        }
    }
    ctx->pc = 0x1E6420u;
    // 0x1e6420: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1E6420u;
    {
        const bool branch_taken_0x1e6420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6420) {
            ctx->pc = 0x1E6424u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6420u;
            // 0x1e6424: 0x8e2202d8  lw          $v0, 0x2D8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 728)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E6460u;
            goto label_1e6460;
        }
    }
    ctx->pc = 0x1E6428u;
label_1e6428:
    // 0x1e6428: 0x8e220174  lw          $v0, 0x174($s1)
    ctx->pc = 0x1e6428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x1e642c: 0x3042004c  andi        $v0, $v0, 0x4C
    ctx->pc = 0x1e642cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)76);
    // 0x1e6430: 0x5040007f  beql        $v0, $zero, . + 4 + (0x7F << 2)
    ctx->pc = 0x1E6430u;
    {
        const bool branch_taken_0x1e6430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6430) {
            ctx->pc = 0x1E6434u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6430u;
            // 0x1e6434: 0x8e230174  lw          $v1, 0x174($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E6630u;
            goto label_1e6630;
        }
    }
    ctx->pc = 0x1E6438u;
    // 0x1e6438: 0x1080007c  beqz        $a0, . + 4 + (0x7C << 2)
    ctx->pc = 0x1E6438u;
    {
        const bool branch_taken_0x1e6438 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E643Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6438u;
            // 0x1e643c: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6438) {
            ctx->pc = 0x1E662Cu;
            goto label_1e662c;
        }
    }
    ctx->pc = 0x1E6440u;
    // 0x1e6440: 0x8e2302d8  lw          $v1, 0x2D8($s1)
    ctx->pc = 0x1e6440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 728)));
    // 0x1e6444: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e6444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e6448: 0x54400079  bnel        $v0, $zero, . + 4 + (0x79 << 2)
    ctx->pc = 0x1E6448u;
    {
        const bool branch_taken_0x1e6448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e6448) {
            ctx->pc = 0x1E644Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6448u;
            // 0x1e644c: 0x8e230174  lw          $v1, 0x174($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E6630u;
            goto label_1e6630;
        }
    }
    ctx->pc = 0x1E6450u;
    // 0x1e6450: 0x30620300  andi        $v0, $v1, 0x300
    ctx->pc = 0x1e6450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)768);
    // 0x1e6454: 0x54400076  bnel        $v0, $zero, . + 4 + (0x76 << 2)
    ctx->pc = 0x1E6454u;
    {
        const bool branch_taken_0x1e6454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e6454) {
            ctx->pc = 0x1E6458u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6454u;
            // 0x1e6458: 0x8e230174  lw          $v1, 0x174($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E6630u;
            goto label_1e6630;
        }
    }
    ctx->pc = 0x1E645Cu;
    // 0x1e645c: 0x8e2202d8  lw          $v0, 0x2D8($s1)
    ctx->pc = 0x1e645cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 728)));
label_1e6460:
    // 0x1e6460: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x1e6460u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x1e6464: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1e6464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1e6468: 0x54400071  bnel        $v0, $zero, . + 4 + (0x71 << 2)
    ctx->pc = 0x1E6468u;
    {
        const bool branch_taken_0x1e6468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e6468) {
            ctx->pc = 0x1E646Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6468u;
            // 0x1e646c: 0x8e230174  lw          $v1, 0x174($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E6630u;
            goto label_1e6630;
        }
    }
    ctx->pc = 0x1E6470u;
    // 0x1e6470: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e6470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e6474: 0x8c450104  lw          $a1, 0x104($v0)
    ctx->pc = 0x1e6474u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x1e6478: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1e6478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1e647c: 0xdc43bdf8  ld          $v1, -0x4208($v0)
    ctx->pc = 0x1e647cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1e6480: 0xdca20040  ld          $v0, 0x40($a1)
    ctx->pc = 0x1e6480u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x1e6484: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E6484u;
    {
        const bool branch_taken_0x1e6484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E6488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6484u;
            // 0x1e6488: 0x86260352  lh          $a2, 0x352($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 850)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6484) {
            ctx->pc = 0x1E64A0u;
            goto label_1e64a0;
        }
    }
    ctx->pc = 0x1E648Cu;
    // 0x1e648c: 0xc04daf6  jal         func_136BD8
    ctx->pc = 0x1E648Cu;
    SET_GPR_U32(ctx, 31, 0x1E6494u);
    ctx->pc = 0x1E6490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E648Cu;
            // 0x1e6490: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136BD8u;
    if (runtime->hasFunction(0x136BD8u)) {
        auto targetFn = runtime->lookupFunction(0x136BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6494u; }
        if (ctx->pc != 0x1E6494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136BD8_0x136bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6494u; }
        if (ctx->pc != 0x1E6494u) { return; }
    }
    ctx->pc = 0x1E6494u;
    // 0x1e6494: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1E6494u;
    {
        const bool branch_taken_0x1e6494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6494u;
            // 0x1e6498: 0x26220050  addiu       $v0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6494) {
            ctx->pc = 0x1E64D0u;
            goto label_1e64d0;
        }
    }
    ctx->pc = 0x1E649Cu;
    // 0x1e649c: 0x0  nop
    ctx->pc = 0x1e649cu;
    // NOP
label_1e64a0:
    // 0x1e64a0: 0x8ca2008c  lw          $v0, 0x8C($a1)
    ctx->pc = 0x1e64a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 140)));
    // 0x1e64a4: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x1e64a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x1e64a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e64a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e64ac: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1e64acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e64b0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1e64b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1e64b4: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x1e64b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1e64b8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1e64b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1e64bc: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x1e64bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1e64c0: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1e64c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x1e64c4: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x1e64c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1e64c8: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x1e64c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x1e64cc: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x1e64ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_1e64d0:
    // 0x1e64d0: 0xdba30040  lqc2        $vf3, 0x40($sp)
    ctx->pc = 0x1e64d0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e64d4: 0xd8410030  lqc2        $vf1, 0x30($v0)
    ctx->pc = 0x1e64d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1e64d8: 0x4be118ec  vsub.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x1e64d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e64dc: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x1e64dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e64e0: 0xfba300a0  sqc2        $vf3, 0xA0($sp)
    ctx->pc = 0x1e64e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e64e4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1e64e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1e64e8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1e64e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1e64ec: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x1e64ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e64f0: 0xfba300b0  sqc2        $vf3, 0xB0($sp)
    ctx->pc = 0x1e64f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e64f4: 0x24030000  addiu       $v1, $zero, 0x0
    ctx->pc = 0x1e64f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1e64f8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1e64f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1e64fc: 0x4a8100c0  vaddx.y     $vf3, $vf0, $vf1x
    ctx->pc = 0x1e64fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e6500: 0xda220050  lqc2        $vf2, 0x50($s1)
    ctx->pc = 0x1e6500u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x1e6504: 0x4be310aa  vmul.xyzw   $vf2, $vf2, $vf3
    ctx->pc = 0x1e6504u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e6508: 0xfba300b0  sqc2        $vf3, 0xB0($sp)
    ctx->pc = 0x1e6508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e650c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1e650cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e6510: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1e6510u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e6514: 0xd8420020  lqc2        $vf2, 0x20($v0)
    ctx->pc = 0x1e6514u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1e6518: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1e6518u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e651c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1e651cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6520: 0x4be310aa  vmul.xyzw   $vf2, $vf2, $vf3
    ctx->pc = 0x1e6520u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e6524: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1e6524u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e6528: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x1e6528u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e652c: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1e652cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e6530: 0x46000805  abs.s       $f0, $f1
    ctx->pc = 0x1e6530u;
    ctx->f[0] = FPU_ABS_S(ctx->f[1]);
    // 0x1e6534: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1e6534u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e6538: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1e6538u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e653c: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x1e653cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e6540: 0x46000885  abs.s       $f2, $f1
    ctx->pc = 0x1e6540u;
    ctx->f[2] = FPU_ABS_S(ctx->f[1]);
    // 0x1e6544: 0x3c0140cc  lui         $at, 0x40CC
    ctx->pc = 0x1e6544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16588 << 16));
    // 0x1e6548: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1e6548u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1e654c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1e654cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e6550: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1e6550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1e6554: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e6554u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e6558: 0x46020028  max.s       $f0, $f0, $f2
    ctx->pc = 0x1e6558u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[2]);
    // 0x1e655c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1e655cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1e6560: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x1e6560u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x1e6564: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x1e6564u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
    // 0x1e6568: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1e6568u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e656c: 0x0  nop
    ctx->pc = 0x1e656cu;
    // NOP
    // 0x1e6570: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1E6570u;
    {
        const bool branch_taken_0x1e6570 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e6570) {
            ctx->pc = 0x1E6574u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6570u;
            // 0x1e6574: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E6578u;
            goto label_1e6578;
        }
    }
    ctx->pc = 0x1E6578u;
label_1e6578:
    // 0x1e6578: 0x4615ad40  add.s       $f21, $f21, $f21
    ctx->pc = 0x1e6578u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
    // 0x1e657c: 0x26250120  addiu       $a1, $s1, 0x120
    ctx->pc = 0x1e657cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x1e6580: 0x4402a800  mfc1        $v0, $f21
    ctx->pc = 0x1e6580u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1e6584: 0x4409a000  mfc1        $t1, $f20
    ctx->pc = 0x1e6584u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x1e6588: 0x71221b89  pcpyld      $v1, $t1, $v0
    ctx->pc = 0x1e6588u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 2)));
    // 0x1e658c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e658cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6590: 0x71221389  pcpyld      $v0, $t1, $v0
    ctx->pc = 0x1e6590u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 2)));
    // 0x1e6594: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1e6594u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1e6598: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x1e6598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x1e659c: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x1e659cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x1e65a0: 0x72672389  pcpyld      $a0, $s3, $a3
    ctx->pc = 0x1e65a0u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 7)));
    // 0x1e65a4: 0x71281b89  pcpyld      $v1, $t1, $t0
    ctx->pc = 0x1e65a4u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1e65a8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1e65a8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e65ac: 0x70641cc8  ppacw       $v1, $v1, $a0
    ctx->pc = 0x1e65acu;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x1e65b0: 0x7e220120  sq          $v0, 0x120($s1)
    ctx->pc = 0x1e65b0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 288), GPR_VEC(ctx, 2));
    // 0x1e65b4: 0x48a31800  qmtc2.ni    $v1, $vf3
    ctx->pc = 0x1e65b4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1e65b8: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x1e65b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    // 0x1e65bc: 0x4a831045  vsuby.y     $vf1, $vf2, $vf3y
    ctx->pc = 0x1e65bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e65c0: 0x7fa300d0  sq          $v1, 0xD0($sp)
    ctx->pc = 0x1e65c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
    // 0x1e65c4: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1e65c4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e65c8: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1e65c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1e65cc: 0x700417c9  prot3w      $v0, $a0
    ctx->pc = 0x1e65ccu;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1e65d0: 0xaca20020  sw          $v0, 0x20($a1)
    ctx->pc = 0x1e65d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 2));
    // 0x1e65d4: 0x8cc2e200  lw          $v0, -0x1E00($a2)
    ctx->pc = 0x1e65d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294959616)));
    // 0x1e65d8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1E65D8u;
    {
        const bool branch_taken_0x1e65d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E65DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E65D8u;
            // 0x1e65dc: 0x7ca30010  sq          $v1, 0x10($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e65d8) {
            ctx->pc = 0x1E6618u;
            goto label_1e6618;
        }
    }
    ctx->pc = 0x1E65E0u;
    // 0x1e65e0: 0x26230150  addiu       $v1, $s1, 0x150
    ctx->pc = 0x1e65e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1e65e4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1e65e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1e65e8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1e65e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1e65ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e65ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e65f0: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x1e65f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x1e65f4: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x1e65f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x1e65f8: 0x3c013f8e  lui         $at, 0x3F8E
    ctx->pc = 0x1e65f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16270 << 16));
    // 0x1e65fc: 0x3421353f  ori         $at, $at, 0x353F
    ctx->pc = 0x1e65fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13631);
    // 0x1e6600: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e6600u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e6604: 0x8e220174  lw          $v0, 0x174($s1)
    ctx->pc = 0x1e6604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x1e6608: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x1e6608u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1e660c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1e660cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1e6610: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1e6610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1e6614: 0xae220174  sw          $v0, 0x174($s1)
    ctx->pc = 0x1e6614u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 372), GPR_U32(ctx, 2));
label_1e6618:
    // 0x1e6618: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e6618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e661c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1e661cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1e6620: 0xacc2e200  sw          $v0, -0x1E00($a2)
    ctx->pc = 0x1e6620u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294959616), GPR_U32(ctx, 2));
    // 0x1e6624: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x1E6624u;
    {
        const bool branch_taken_0x1e6624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6624u;
            // 0x1e6628: 0xac60e204  sw          $zero, -0x1DFC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294959620), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6624) {
            ctx->pc = 0x1E6738u;
            goto label_1e6738;
        }
    }
    ctx->pc = 0x1E662Cu;
label_1e662c:
    // 0x1e662c: 0x8e230174  lw          $v1, 0x174($s1)
    ctx->pc = 0x1e662cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
label_1e6630:
    // 0x1e6630: 0x30620380  andi        $v0, $v1, 0x380
    ctx->pc = 0x1e6630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)896);
    // 0x1e6634: 0x54400026  bnel        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x1E6634u;
    {
        const bool branch_taken_0x1e6634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e6634) {
            ctx->pc = 0x1E6638u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6634u;
            // 0x1e6638: 0x3c05002a  lui         $a1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E66D0u;
            goto label_1e66d0;
        }
    }
    ctx->pc = 0x1E663Cu;
    // 0x1e663c: 0x3062004c  andi        $v0, $v1, 0x4C
    ctx->pc = 0x1e663cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)76);
    // 0x1e6640: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E6640u;
    {
        const bool branch_taken_0x1e6640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6640u;
            // 0x1e6644: 0x3c04002a  lui         $a0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6640) {
            ctx->pc = 0x1E6658u;
            goto label_1e6658;
        }
    }
    ctx->pc = 0x1E6648u;
    // 0x1e6648: 0x8c83e204  lw          $v1, -0x1DFC($a0)
    ctx->pc = 0x1e6648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294959620)));
    // 0x1e664c: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x1e664cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1e6650: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1E6650u;
    {
        const bool branch_taken_0x1e6650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E6654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6650u;
            // 0x1e6654: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6650) {
            ctx->pc = 0x1E66C8u;
            goto label_1e66c8;
        }
    }
    ctx->pc = 0x1E6658u;
label_1e6658:
    // 0x1e6658: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1e6658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1e665c: 0x26240120  addiu       $a0, $s1, 0x120
    ctx->pc = 0x1e665cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x1e6660: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1e6660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1e6664: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e6664u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e6668: 0xc4400234  lwc1        $f0, 0x234($v0)
    ctx->pc = 0x1e6668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e666c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e666cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e6670: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1e6670u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x1e6674: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1e6674u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1e6678: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1e6678u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1e667c: 0x4409a000  mfc1        $t1, $f20
    ctx->pc = 0x1e667cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x1e6680: 0x71221b89  pcpyld      $v1, $t1, $v0
    ctx->pc = 0x1e6680u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 2)));
    // 0x1e6684: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e6684u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6688: 0x71221389  pcpyld      $v0, $t1, $v0
    ctx->pc = 0x1e6688u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 2)));
    // 0x1e668c: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1e668cu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1e6690: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x1e6690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x1e6694: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x1e6694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x1e6698: 0x48b30800  qmtc2.ni    $s3, $vf1
    ctx->pc = 0x1e6698u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 19));
    // 0x1e669c: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x1e669cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e66a0: 0x4a811080  vaddx.y     $vf2, $vf2, $vf1x
    ctx->pc = 0x1e66a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e66a4: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x1e66a4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e66a8: 0x7e220120  sq          $v0, 0x120($s1)
    ctx->pc = 0x1e66a8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 288), GPR_VEC(ctx, 2));
    // 0x1e66ac: 0x4a821845  vsuby.y     $vf1, $vf3, $vf2y
    ctx->pc = 0x1e66acu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e66b0: 0xf8820010  sqc2        $vf2, 0x10($a0)
    ctx->pc = 0x1e66b0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e66b4: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1e66b4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e66b8: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x1e66b8u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1e66bc: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x1e66bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
    // 0x1e66c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E66C0u;
    {
        const bool branch_taken_0x1e66c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E66C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E66C0u;
            // 0x1e66c4: 0x3c05002a  lui         $a1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e66c0) {
            ctx->pc = 0x1E66D0u;
            goto label_1e66d0;
        }
    }
    ctx->pc = 0x1E66C8u;
label_1e66c8:
    // 0x1e66c8: 0xac82e204  sw          $v0, -0x1DFC($a0)
    ctx->pc = 0x1e66c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294959620), GPR_U32(ctx, 2));
    // 0x1e66cc: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1e66ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_1e66d0:
    // 0x1e66d0: 0x8ca2e200  lw          $v0, -0x1E00($a1)
    ctx->pc = 0x1e66d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294959616)));
    // 0x1e66d4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1E66D4u;
    {
        const bool branch_taken_0x1e66d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e66d4) {
            ctx->pc = 0x1E6718u;
            goto label_1e6718;
        }
    }
    ctx->pc = 0x1E66DCu;
    // 0x1e66dc: 0x14e0000e  bnez        $a3, . + 4 + (0xE << 2)
    ctx->pc = 0x1E66DCu;
    {
        const bool branch_taken_0x1e66dc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E66E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E66DCu;
            // 0x1e66e0: 0x26230150  addiu       $v1, $s1, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e66dc) {
            ctx->pc = 0x1E6718u;
            goto label_1e6718;
        }
    }
    ctx->pc = 0x1E66E4u;
    // 0x1e66e4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1e66e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1e66e8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1e66e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1e66ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e66ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e66f0: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x1e66f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x1e66f4: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x1e66f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x1e66f8: 0x3c013f8e  lui         $at, 0x3F8E
    ctx->pc = 0x1e66f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16270 << 16));
    // 0x1e66fc: 0x3421353f  ori         $at, $at, 0x353F
    ctx->pc = 0x1e66fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13631);
    // 0x1e6700: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e6700u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e6704: 0x8e220174  lw          $v0, 0x174($s1)
    ctx->pc = 0x1e6704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x1e6708: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x1e6708u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1e670c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1e670cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1e6710: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1e6710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1e6714: 0xae220174  sw          $v0, 0x174($s1)
    ctx->pc = 0x1e6714u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 372), GPR_U32(ctx, 2));
label_1e6718:
    // 0x1e6718: 0x15000005  bnez        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E6718u;
    {
        const bool branch_taken_0x1e6718 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E671Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6718u;
            // 0x1e671c: 0xaca0e200  sw          $zero, -0x1E00($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294959616), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6718) {
            ctx->pc = 0x1E6730u;
            goto label_1e6730;
        }
    }
    ctx->pc = 0x1E6720u;
    // 0x1e6720: 0x8e220174  lw          $v0, 0x174($s1)
    ctx->pc = 0x1e6720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x1e6724: 0x3042004c  andi        $v0, $v0, 0x4C
    ctx->pc = 0x1e6724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)76);
    // 0x1e6728: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E6728u;
    {
        const bool branch_taken_0x1e6728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E672Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6728u;
            // 0x1e672c: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6728) {
            ctx->pc = 0x1E673Cu;
            goto label_1e673c;
        }
    }
    ctx->pc = 0x1E6730u;
label_1e6730:
    // 0x1e6730: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1e6730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1e6734: 0xac40e204  sw          $zero, -0x1DFC($v0)
    ctx->pc = 0x1e6734u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294959620), GPR_U32(ctx, 0));
label_1e6738:
    // 0x1e6738: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x1e6738u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_1e673c:
    // 0x1e673c: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x1e673cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1e6740: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x1e6740u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1e6744: 0x7bb30100  lq          $s3, 0x100($sp)
    ctx->pc = 0x1e6744u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1e6748: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x1e6748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1e674c: 0xc7b50148  lwc1        $f21, 0x148($sp)
    ctx->pc = 0x1e674cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1e6750: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x1e6750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e6754: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6754u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6754u;
            // 0x1e6758: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E62C0u: goto label_1e62c0;
            case 0x1E62DCu: goto label_1e62dc;
            case 0x1E62E0u: goto label_1e62e0;
            case 0x1E6310u: goto label_1e6310;
            case 0x1E63B0u: goto label_1e63b0;
            case 0x1E6418u: goto label_1e6418;
            case 0x1E6428u: goto label_1e6428;
            case 0x1E6460u: goto label_1e6460;
            case 0x1E64A0u: goto label_1e64a0;
            case 0x1E64D0u: goto label_1e64d0;
            case 0x1E6578u: goto label_1e6578;
            case 0x1E6618u: goto label_1e6618;
            case 0x1E662Cu: goto label_1e662c;
            case 0x1E6630u: goto label_1e6630;
            case 0x1E6658u: goto label_1e6658;
            case 0x1E66C8u: goto label_1e66c8;
            case 0x1E66D0u: goto label_1e66d0;
            case 0x1E6718u: goto label_1e6718;
            case 0x1E6730u: goto label_1e6730;
            case 0x1E6738u: goto label_1e6738;
            case 0x1E673Cu: goto label_1e673c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E675Cu;
    // 0x1e675c: 0x0  nop
    ctx->pc = 0x1e675cu;
    // NOP
}
