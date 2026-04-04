#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_226700
// Address: 0x226700 - 0x226908
void entry_226700_0x226908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_226700_0x226908");
#endif

    ctx->pc = 0x226700u;

    // 0x226700: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x226700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x226704: 0x7fb10190  sq          $s1, 0x190($sp)
    ctx->pc = 0x226704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 17));
    // 0x226708: 0x7fb20180  sq          $s2, 0x180($sp)
    ctx->pc = 0x226708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 18));
    // 0x22670c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x22670cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226710: 0x7fb30170  sq          $s3, 0x170($sp)
    ctx->pc = 0x226710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 19));
    // 0x226714: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x226714u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226718: 0x7fb40160  sq          $s4, 0x160($sp)
    ctx->pc = 0x226718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 20));
    // 0x22671c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x22671cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226720: 0x7fb001a0  sq          $s0, 0x1A0($sp)
    ctx->pc = 0x226720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 16));
    // 0x226724: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x226724u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226728: 0x7fb50150  sq          $s5, 0x150($sp)
    ctx->pc = 0x226728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 21));
    // 0x22672c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x22672cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226730: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x226730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
    // 0x226734: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x226734u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x226738: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x226738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x22673c: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x22673cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x226740: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x226740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x226744: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x226744u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x226748: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x226748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x22674c: 0x7a220030  lq          $v0, 0x30($s1)
    ctx->pc = 0x22674cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x226750: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x226750u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226754: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x226754u;
    {
        const bool branch_taken_0x226754 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x226758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226754u;
            // 0x226758: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226754) {
            ctx->pc = 0x22676Cu;
            goto label_22676c;
        }
    }
    ctx->pc = 0x22675Cu;
    // 0x22675c: 0xc04c94c  jal         func_132530
    ctx->pc = 0x22675Cu;
    SET_GPR_U32(ctx, 31, 0x226764u);
    ctx->pc = 0x132530u;
    if (runtime->hasFunction(0x132530u)) {
        auto targetFn = runtime->lookupFunction(0x132530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226764u; }
        if (ctx->pc != 0x226764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132530_0x132530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226764u; }
        if (ctx->pc != 0x226764u) { return; }
    }
    ctx->pc = 0x226764u;
    // 0x226764: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x226764u;
    {
        const bool branch_taken_0x226764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226764u;
            // 0x226768: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226764) {
            ctx->pc = 0x226770u;
            goto label_226770;
        }
    }
    ctx->pc = 0x22676Cu;
label_22676c:
    // 0x22676c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22676cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_226770:
    // 0x226770: 0x10a00055  beqz        $a1, . + 4 + (0x55 << 2)
    ctx->pc = 0x226770u;
    {
        const bool branch_taken_0x226770 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x226774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226770u;
            // 0x226774: 0xae45000c  sw          $a1, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226770) {
            ctx->pc = 0x2268C8u;
            goto label_2268c8;
        }
    }
    ctx->pc = 0x226778u;
    // 0x226778: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x226778u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x22677c: 0x3c15002a  lui         $s5, 0x2A
    ctx->pc = 0x22677cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)42 << 16));
    // 0x226780: 0xdea4bdf8  ld          $a0, -0x4208($s5)
    ctx->pc = 0x226780u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 21), 4294950392)));
    // 0x226784: 0x7ca20020  sq          $v0, 0x20($a1)
    ctx->pc = 0x226784u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 2));
    // 0x226788: 0x84a30060  lh          $v1, 0x60($a1)
    ctx->pc = 0x226788u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x22678c: 0x64840001  daddiu      $a0, $a0, 0x1
    ctx->pc = 0x22678cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)1);
    // 0x226790: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x226790u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x226794: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x226794u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x226798: 0x7ca20030  sq          $v0, 0x30($a1)
    ctx->pc = 0x226798u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 2));
    // 0x22679c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22679cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2267a0: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x2267a0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x2267a4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2267a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2267a8: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x2267a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2267ac: 0x7ca20040  sq          $v0, 0x40($a1)
    ctx->pc = 0x2267acu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 64), GPR_VEC(ctx, 2));
    // 0x2267b0: 0x7a220030  lq          $v0, 0x30($s1)
    ctx->pc = 0x2267b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2267b4: 0x7ca20050  sq          $v0, 0x50($a1)
    ctx->pc = 0x2267b4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 80), GPR_VEC(ctx, 2));
    // 0x2267b8: 0xfea4bdf8  sd          $a0, -0x4208($s5)
    ctx->pc = 0x2267b8u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 4294950392), GPR_U64(ctx, 4));
    // 0x2267bc: 0x12600046  beqz        $s3, . + 4 + (0x46 << 2)
    ctx->pc = 0x2267BCu;
    {
        const bool branch_taken_0x2267bc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2267C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2267BCu;
            // 0x2267c0: 0xfca30068  sd          $v1, 0x68($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 104), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2267bc) {
            ctx->pc = 0x2268D8u;
            goto label_2268d8;
        }
    }
    ctx->pc = 0x2267C4u;
    // 0x2267c4: 0x680003a  bltz        $s4, . + 4 + (0x3A << 2)
    ctx->pc = 0x2267C4u;
    {
        const bool branch_taken_0x2267c4 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x2267C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2267C4u;
            // 0x2267c8: 0x27b00040  addiu       $s0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2267c4) {
            ctx->pc = 0x2268B0u;
            goto label_2268b0;
        }
    }
    ctx->pc = 0x2267CCu;
    // 0x2267cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2267ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2267d0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2267d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2267d4: 0xc04c586  jal         func_131618
    ctx->pc = 0x2267D4u;
    SET_GPR_U32(ctx, 31, 0x2267DCu);
    ctx->pc = 0x2267D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2267D4u;
            // 0x2267d8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131618u;
    if (runtime->hasFunction(0x131618u)) {
        auto targetFn = runtime->lookupFunction(0x131618u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2267DCu; }
        if (ctx->pc != 0x2267DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131618_0x131618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2267DCu; }
        if (ctx->pc != 0x2267DCu) { return; }
    }
    ctx->pc = 0x2267DCu;
    // 0x2267dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2267dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2267e0: 0xc0614f6  jal         func_1853D8
    ctx->pc = 0x2267E0u;
    SET_GPR_U32(ctx, 31, 0x2267E8u);
    ctx->pc = 0x2267E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2267E0u;
            // 0x2267e4: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1853D8u;
    if (runtime->hasFunction(0x1853D8u)) {
        auto targetFn = runtime->lookupFunction(0x1853D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2267E8u; }
        if (ctx->pc != 0x2267E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1853d8_0x1855e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2267E8u; }
        if (ctx->pc != 0x2267E8u) { return; }
    }
    ctx->pc = 0x2267E8u;
    // 0x2267e8: 0xdba600c0  lqc2        $vf6, 0xC0($sp)
    ctx->pc = 0x2267e8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2267ec: 0xdba700d0  lqc2        $vf7, 0xD0($sp)
    ctx->pc = 0x2267ecu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2267f0: 0xdba800e0  lqc2        $vf8, 0xE0($sp)
    ctx->pc = 0x2267f0u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2267f4: 0xdba400f0  lqc2        $vf4, 0xF0($sp)
    ctx->pc = 0x2267f4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2267f8: 0xda230000  lqc2        $vf3, 0x0($s1)
    ctx->pc = 0x2267f8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2267fc: 0xda250030  lqc2        $vf5, 0x30($s1)
    ctx->pc = 0x2267fcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x226800: 0xda210010  lqc2        $vf1, 0x10($s1)
    ctx->pc = 0x226800u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x226804: 0xda220020  lqc2        $vf2, 0x20($s1)
    ctx->pc = 0x226804u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x226808: 0x4be331bc  vmulax.xyzw $ACC, $vf6, $vf3x
    ctx->pc = 0x226808u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x22680c: 0x4be338bd  vmadday.xyzw $ACC, $vf7, $vf3y
    ctx->pc = 0x22680cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x226810: 0x4be340be  vmaddaz.xyzw $ACC, $vf8, $vf3z
    ctx->pc = 0x226810u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x226814: 0x4be320cb  vmaddw.xyzw $vf3, $vf4, $vf3w
    ctx->pc = 0x226814u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x226818: 0x4be131bc  vmulax.xyzw $ACC, $vf6, $vf1x
    ctx->pc = 0x226818u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x22681c: 0xfba30100  sqc2        $vf3, 0x100($sp)
    ctx->pc = 0x22681cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x226820: 0x4be138bd  vmadday.xyzw $ACC, $vf7, $vf1y
    ctx->pc = 0x226820u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x226824: 0x4be140be  vmaddaz.xyzw $ACC, $vf8, $vf1z
    ctx->pc = 0x226824u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x226828: 0x4be1204b  vmaddw.xyzw $vf1, $vf4, $vf1w
    ctx->pc = 0x226828u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x22682c: 0x4be231bc  vmulax.xyzw $ACC, $vf6, $vf2x
    ctx->pc = 0x22682cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x226830: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x226830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x226834: 0x4be238bd  vmadday.xyzw $ACC, $vf7, $vf2y
    ctx->pc = 0x226834u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x226838: 0x4be240be  vmaddaz.xyzw $ACC, $vf8, $vf2z
    ctx->pc = 0x226838u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x22683c: 0x4be2208b  vmaddw.xyzw $vf2, $vf4, $vf2w
    ctx->pc = 0x22683cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x226840: 0x4be531bc  vmulax.xyzw $ACC, $vf6, $vf5x
    ctx->pc = 0x226840u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x226844: 0xfba20120  sqc2        $vf2, 0x120($sp)
    ctx->pc = 0x226844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x226848: 0x4be538bd  vmadday.xyzw $ACC, $vf7, $vf5y
    ctx->pc = 0x226848u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x22684c: 0x4be540be  vmaddaz.xyzw $ACC, $vf8, $vf5z
    ctx->pc = 0x22684cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x226850: 0x4be5210b  vmaddw.xyzw $vf4, $vf4, $vf5w
    ctx->pc = 0x226850u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x226854: 0xfba40130  sqc2        $vf4, 0x130($sp)
    ctx->pc = 0x226854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x226858: 0xfba30080  sqc2        $vf3, 0x80($sp)
    ctx->pc = 0x226858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x22685c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22685cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226860: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x226860u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x226864: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x226864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x226868: 0xfba200a0  sqc2        $vf2, 0xA0($sp)
    ctx->pc = 0x226868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x22686c: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x22686cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x226870: 0xf8a30020  sqc2        $vf3, 0x20($a1)
    ctx->pc = 0x226870u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x226874: 0xdea4bdf8  ld          $a0, -0x4208($s5)
    ctx->pc = 0x226874u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 21), 4294950392)));
    // 0x226878: 0x84a30060  lh          $v1, 0x60($a1)
    ctx->pc = 0x226878u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x22687c: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x22687cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x226880: 0x64840001  daddiu      $a0, $a0, 0x1
    ctx->pc = 0x226880u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)1);
    // 0x226884: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x226884u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x226888: 0x7ca20030  sq          $v0, 0x30($a1)
    ctx->pc = 0x226888u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 2));
    // 0x22688c: 0x83300a  movz        $a2, $a0, $v1
    ctx->pc = 0x22688cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
    // 0x226890: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x226890u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226894: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x226894u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x226898: 0x7ca20040  sq          $v0, 0x40($a1)
    ctx->pc = 0x226898u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 64), GPR_VEC(ctx, 2));
    // 0x22689c: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x22689cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2268a0: 0x7ca20050  sq          $v0, 0x50($a1)
    ctx->pc = 0x2268a0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 80), GPR_VEC(ctx, 2));
    // 0x2268a4: 0xfea4bdf8  sd          $a0, -0x4208($s5)
    ctx->pc = 0x2268a4u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 4294950392), GPR_U64(ctx, 4));
    // 0x2268a8: 0xfca30068  sd          $v1, 0x68($a1)
    ctx->pc = 0x2268a8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 104), GPR_U64(ctx, 3));
    // 0x2268ac: 0x0  nop
    ctx->pc = 0x2268acu;
    // NOP
label_2268b0:
    // 0x2268b0: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x2268b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2268b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2268b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2268b8: 0xc04c518  jal         func_131460
    ctx->pc = 0x2268B8u;
    SET_GPR_U32(ctx, 31, 0x2268C0u);
    ctx->pc = 0x2268BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2268B8u;
            // 0x2268bc: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131460u;
    if (runtime->hasFunction(0x131460u)) {
        auto targetFn = runtime->lookupFunction(0x131460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2268C0u; }
        if (ctx->pc != 0x2268C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131460_0x131460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2268C0u; }
        if (ctx->pc != 0x2268C0u) { return; }
    }
    ctx->pc = 0x2268C0u;
    // 0x2268c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2268C0u;
    {
        const bool branch_taken_0x2268c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2268c0) {
            ctx->pc = 0x2268D8u;
            goto label_2268d8;
        }
    }
    ctx->pc = 0x2268C8u;
label_2268c8:
    // 0x2268c8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2268c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2268cc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2268ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2268d0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2268d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2268d4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2268d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_2268d8:
    // 0x2268d8: 0xc089192  jal         func_224648
    ctx->pc = 0x2268D8u;
    SET_GPR_U32(ctx, 31, 0x2268E0u);
    ctx->pc = 0x2268DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2268D8u;
            // 0x2268dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224648u;
    if (runtime->hasFunction(0x224648u)) {
        auto targetFn = runtime->lookupFunction(0x224648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2268E0u; }
        if (ctx->pc != 0x2268E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224648_0x224648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2268E0u; }
        if (ctx->pc != 0x2268E0u) { return; }
    }
    ctx->pc = 0x2268E0u;
    // 0x2268e0: 0x7bb001a0  lq          $s0, 0x1A0($sp)
    ctx->pc = 0x2268e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2268e4: 0x7bb10190  lq          $s1, 0x190($sp)
    ctx->pc = 0x2268e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2268e8: 0x7bb20180  lq          $s2, 0x180($sp)
    ctx->pc = 0x2268e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2268ec: 0x7bb30170  lq          $s3, 0x170($sp)
    ctx->pc = 0x2268ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2268f0: 0x7bb40160  lq          $s4, 0x160($sp)
    ctx->pc = 0x2268f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2268f4: 0x7bb50150  lq          $s5, 0x150($sp)
    ctx->pc = 0x2268f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2268f8: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x2268f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2268fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2268FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2268FCu;
            // 0x226900: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22676Cu: goto label_22676c;
            case 0x226770u: goto label_226770;
            case 0x2268B0u: goto label_2268b0;
            case 0x2268C8u: goto label_2268c8;
            case 0x2268D8u: goto label_2268d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x226904u;
    // 0x226904: 0x0  nop
    ctx->pc = 0x226904u;
    // NOP
}
