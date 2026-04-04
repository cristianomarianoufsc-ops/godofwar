#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00185318
// Address: 0x185318 - 0x1853d8
void sub_00185318_0x185318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00185318_0x185318");
#endif

    ctx->pc = 0x185318u;

    // 0x185318: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x185318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x18531c: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x18531cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x185320: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x185320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x185324: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x185324u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185328: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x185328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x18532c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18532cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185330: 0x7a040000  lq          $a0, 0x0($s0)
    ctx->pc = 0x185330u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x185334: 0x4be1033c  vmove.xyzw  $vf1, $vf0
    ctx->pc = 0x185334u;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x185338: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x185338u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x18533c: 0x7a030020  lq          $v1, 0x20($s0)
    ctx->pc = 0x18533cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x185340: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x185340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
    // 0x185344: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x185344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x185348: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x185348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x18534c: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x18534cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x185350: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x185350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x185354: 0xc0613b4  jal         func_184ED0
    ctx->pc = 0x185354u;
    SET_GPR_U32(ctx, 31, 0x18535Cu);
    ctx->pc = 0x185358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185354u;
            // 0x185358: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184ED0u;
    if (runtime->hasFunction(0x184ED0u)) {
        auto targetFn = runtime->lookupFunction(0x184ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18535Cu; }
        if (ctx->pc != 0x18535Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_184ed0_0x184f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18535Cu; }
        if (ctx->pc != 0x18535Cu) { return; }
    }
    ctx->pc = 0x18535Cu;
    // 0x18535c: 0xdba30040  lqc2        $vf3, 0x40($sp)
    ctx->pc = 0x18535cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x185360: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x185360u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x185364: 0xdba40050  lqc2        $vf4, 0x50($sp)
    ctx->pc = 0x185364u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x185368: 0xdba50060  lqc2        $vf5, 0x60($sp)
    ctx->pc = 0x185368u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18536c: 0xdba20070  lqc2        $vf2, 0x70($sp)
    ctx->pc = 0x18536cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x185370: 0xfba30000  sqc2        $vf3, 0x0($sp)
    ctx->pc = 0x185370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x185374: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x185374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x185378: 0xfba50020  sqc2        $vf5, 0x20($sp)
    ctx->pc = 0x185378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x18537c: 0xfba20030  sqc2        $vf2, 0x30($sp)
    ctx->pc = 0x18537cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x185380: 0xda010030  lqc2        $vf1, 0x30($s0)
    ctx->pc = 0x185380u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x185384: 0x4be1306c  vsub.xyzw   $vf1, $vf6, $vf1
    ctx->pc = 0x185384u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x185388: 0x4be119bc  vmulax.xyzw $ACC, $vf3, $vf1x
    ctx->pc = 0x185388u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x18538c: 0x4be120bd  vmadday.xyzw $ACC, $vf4, $vf1y
    ctx->pc = 0x18538cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x185390: 0x4be128be  vmaddaz.xyzw $ACC, $vf5, $vf1z
    ctx->pc = 0x185390u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x185394: 0x4be1108b  vmaddw.xyzw $vf2, $vf2, $vf1w
    ctx->pc = 0x185394u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x185398: 0xfba20080  sqc2        $vf2, 0x80($sp)
    ctx->pc = 0x185398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x18539c: 0x4b020047  vsubw.x     $vf1, $vf0, $vf2w
    ctx->pc = 0x18539cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1853a0: 0x4a213080  vaddx.w     $vf2, $vf6, $vf1x
    ctx->pc = 0x1853a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1853a4: 0xfa230000  sqc2        $vf3, 0x0($s1)
    ctx->pc = 0x1853a4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1853a8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1853a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1853ac: 0xfa240010  sqc2        $vf4, 0x10($s1)
    ctx->pc = 0x1853acu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1853b0: 0xfa250020  sqc2        $vf5, 0x20($s1)
    ctx->pc = 0x1853b0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1853b4: 0xfa220030  sqc2        $vf2, 0x30($s1)
    ctx->pc = 0x1853b4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1853b8: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x1853b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1853bc: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1853bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1853c0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1853c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1853c4: 0xfba20080  sqc2        $vf2, 0x80($sp)
    ctx->pc = 0x1853c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1853c8: 0xfba20030  sqc2        $vf2, 0x30($sp)
    ctx->pc = 0x1853c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1853cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1853CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1853D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1853CCu;
            // 0x1853d0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1853D4u;
    // 0x1853d4: 0x0  nop
    ctx->pc = 0x1853d4u;
    // NOP
}
