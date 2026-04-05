#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E5690
// Address: 0x1e5690 - 0x1e5ab0
void sub_001E5690_0x1e5690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5690_0x1e5690");
#endif

    ctx->pc = 0x1e5690u;

    // 0x1e5690: 0x27bdfce0  addiu       $sp, $sp, -0x320
    ctx->pc = 0x1e5690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966496));
    // 0x1e5694: 0x7fb10300  sq          $s1, 0x300($sp)
    ctx->pc = 0x1e5694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 768), GPR_VEC(ctx, 17));
    // 0x1e5698: 0x7fb00310  sq          $s0, 0x310($sp)
    ctx->pc = 0x1e5698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 784), GPR_VEC(ctx, 16));
    // 0x1e569c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e569cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e56a0: 0x7fb202f0  sq          $s2, 0x2F0($sp)
    ctx->pc = 0x1e56a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 18));
    // 0x1e56a4: 0xffbf02e0  sd          $ra, 0x2E0($sp)
    ctx->pc = 0x1e56a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 736), GPR_U64(ctx, 31));
    // 0x1e56a8: 0x7fa502d0  sq          $a1, 0x2D0($sp)
    ctx->pc = 0x1e56a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 5));
    // 0x1e56ac: 0x8e25024c  lw          $a1, 0x24C($s1)
    ctx->pc = 0x1e56acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 588)));
    // 0x1e56b0: 0x10a000f9  beqz        $a1, . + 4 + (0xF9 << 2)
    ctx->pc = 0x1E56B0u;
    {
        const bool branch_taken_0x1e56b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E56B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E56B0u;
            // 0x1e56b4: 0x7ba202d0  lq          $v0, 0x2D0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 720)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e56b0) {
            ctx->pc = 0x1E5A98u;
            goto label_1e5a98;
        }
    }
    ctx->pc = 0x1E56B8u;
    // 0x1e56b8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1e56b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e56bc: 0x24020408  addiu       $v0, $zero, 0x408
    ctx->pc = 0x1e56bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1032));
    // 0x1e56c0: 0xa7a20000  sh          $v0, 0x0($sp)
    ctx->pc = 0x1e56c0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e56c4: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1e56c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x1e56c8: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1e56c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1e56cc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1e56ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1e56d0: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x1e56d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x1e56d4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1e56d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1e56d8: 0x8c44e89c  lw          $a0, -0x1764($v0)
    ctx->pc = 0x1e56d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961308)));
    // 0x1e56dc: 0xc047d6a  jal         func_11F5A8
    ctx->pc = 0x1E56DCu;
    SET_GPR_U32(ctx, 31, 0x1E56E4u);
    ctx->pc = 0x1E56E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E56DCu;
            // 0x1e56e0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F5A8u;
    if (runtime->hasFunction(0x11F5A8u)) {
        auto targetFn = runtime->lookupFunction(0x11F5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E56E4u; }
        if (ctx->pc != 0x1E56E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11f5a8_0x11f5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E56E4u; }
        if (ctx->pc != 0x1E56E4u) { return; }
    }
    ctx->pc = 0x1E56E4u;
    // 0x1e56e4: 0x8e22024c  lw          $v0, 0x24C($s1)
    ctx->pc = 0x1e56e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 588)));
    // 0x1e56e8: 0x8c500104  lw          $s0, 0x104($v0)
    ctx->pc = 0x1e56e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x1e56ec: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1e56ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1e56f0: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1e56f0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1e56f4: 0xde020040  ld          $v0, 0x40($s0)
    ctx->pc = 0x1e56f4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1e56f8: 0x10450003  beq         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E56F8u;
    {
        const bool branch_taken_0x1e56f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1E56FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E56F8u;
            // 0x1e56fc: 0x8e320250  lw          $s2, 0x250($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e56f8) {
            ctx->pc = 0x1E5708u;
            goto label_1e5708;
        }
    }
    ctx->pc = 0x1E5700u;
    // 0x1e5700: 0xc04da64  jal         func_136990
    ctx->pc = 0x1E5700u;
    SET_GPR_U32(ctx, 31, 0x1E5708u);
    ctx->pc = 0x1E5704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5700u;
            // 0x1e5704: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5708u; }
        if (ctx->pc != 0x1E5708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5708u; }
        if (ctx->pc != 0x1E5708u) { return; }
    }
    ctx->pc = 0x1E5708u;
label_1e5708:
    // 0x1e5708: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x1e5708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x1e570c: 0x4be1033c  vmove.xyzw  $vf1, $vf0
    ctx->pc = 0x1e570cu;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x1e5710: 0xfba102c0  sqc2        $vf1, 0x2C0($sp)
    ctx->pc = 0x1e5710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e5714: 0x121180  sll         $v0, $s2, 6
    ctx->pc = 0x1e5714u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x1e5718: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e5718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e571c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1e571cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e5720: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1e5720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1e5724: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x1e5724u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1e5728: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1e5728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x1e572c: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x1e572cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1e5730: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x1e5730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x1e5734: 0x78630030  lq          $v1, 0x30($v1)
    ctx->pc = 0x1e5734u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1e5738: 0x7fa302b0  sq          $v1, 0x2B0($sp)
    ctx->pc = 0x1e5738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), GPR_VEC(ctx, 3));
    // 0x1e573c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1e573cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e5740: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x1e5740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x1e5744: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1e5744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e5748: 0xc0613b4  jal         func_184ED0
    ctx->pc = 0x1E5748u;
    SET_GPR_U32(ctx, 31, 0x1E5750u);
    ctx->pc = 0x1E574Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5748u;
            // 0x1e574c: 0x262501c0  addiu       $a1, $s1, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184ED0u;
    if (runtime->hasFunction(0x184ED0u)) {
        auto targetFn = runtime->lookupFunction(0x184ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5750u; }
        if (ctx->pc != 0x1E5750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_184ed0_0x184f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5750u; }
        if (ctx->pc != 0x1E5750u) { return; }
    }
    ctx->pc = 0x1E5750u;
    // 0x1e5750: 0xdba50020  lqc2        $vf5, 0x20($sp)
    ctx->pc = 0x1e5750u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e5754: 0xdba60030  lqc2        $vf6, 0x30($sp)
    ctx->pc = 0x1e5754u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e5758: 0xdba70040  lqc2        $vf7, 0x40($sp)
    ctx->pc = 0x1e5758u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e575c: 0xdba80050  lqc2        $vf8, 0x50($sp)
    ctx->pc = 0x1e575cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e5760: 0xdba200a0  lqc2        $vf2, 0xA0($sp)
    ctx->pc = 0x1e5760u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e5764: 0xdba300b0  lqc2        $vf3, 0xB0($sp)
    ctx->pc = 0x1e5764u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e5768: 0xdba400c0  lqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x1e5768u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1e576c: 0xdba100d0  lqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x1e576cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1e5770: 0x4be229bc  vmulax.xyzw $ACC, $vf5, $vf2x
    ctx->pc = 0x1e5770u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1e5774: 0x4be230bd  vmadday.xyzw $ACC, $vf6, $vf2y
    ctx->pc = 0x1e5774u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1e5778: 0x4be238be  vmaddaz.xyzw $ACC, $vf7, $vf2z
    ctx->pc = 0x1e5778u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1e577c: 0x4be2408b  vmaddw.xyzw $vf2, $vf8, $vf2w
    ctx->pc = 0x1e577cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1e5780: 0x4be329bc  vmulax.xyzw $ACC, $vf5, $vf3x
    ctx->pc = 0x1e5780u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1e5784: 0xfba200e0  sqc2        $vf2, 0xE0($sp)
    ctx->pc = 0x1e5784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e5788: 0x4be330bd  vmadday.xyzw $ACC, $vf6, $vf3y
    ctx->pc = 0x1e5788u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1e578c: 0x4be338be  vmaddaz.xyzw $ACC, $vf7, $vf3z
    ctx->pc = 0x1e578cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1e5790: 0x4be340cb  vmaddw.xyzw $vf3, $vf8, $vf3w
    ctx->pc = 0x1e5790u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1e5794: 0x4be429bc  vmulax.xyzw $ACC, $vf5, $vf4x
    ctx->pc = 0x1e5794u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1e5798: 0xfba300f0  sqc2        $vf3, 0xF0($sp)
    ctx->pc = 0x1e5798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e579c: 0x4be430bd  vmadday.xyzw $ACC, $vf6, $vf4y
    ctx->pc = 0x1e579cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1e57a0: 0x4be438be  vmaddaz.xyzw $ACC, $vf7, $vf4z
    ctx->pc = 0x1e57a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1e57a4: 0x4be4410b  vmaddw.xyzw $vf4, $vf8, $vf4w
    ctx->pc = 0x1e57a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1e57a8: 0x4be129bc  vmulax.xyzw $ACC, $vf5, $vf1x
    ctx->pc = 0x1e57a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1e57ac: 0xfba40100  sqc2        $vf4, 0x100($sp)
    ctx->pc = 0x1e57acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1e57b0: 0x4be130bd  vmadday.xyzw $ACC, $vf6, $vf1y
    ctx->pc = 0x1e57b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1e57b4: 0x4be138be  vmaddaz.xyzw $ACC, $vf7, $vf1z
    ctx->pc = 0x1e57b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1e57b8: 0x4be1420b  vmaddw.xyzw $vf8, $vf8, $vf1w
    ctx->pc = 0x1e57b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1e57bc: 0xfba80110  sqc2        $vf8, 0x110($sp)
    ctx->pc = 0x1e57bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x1e57c0: 0xfba20060  sqc2        $vf2, 0x60($sp)
    ctx->pc = 0x1e57c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e57c4: 0x4be2116a  vmul.xyzw   $vf5, $vf2, $vf2
    ctx->pc = 0x1e57c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1e57c8: 0xfba30070  sqc2        $vf3, 0x70($sp)
    ctx->pc = 0x1e57c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e57cc: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1e57ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1e57d0: 0xfba80090  sqc2        $vf8, 0x90($sp)
    ctx->pc = 0x1e57d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x1e57d4: 0x4b052841  vaddy.x     $vf1, $vf5, $vf5y
    ctx->pc = 0x1e57d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e57d8: 0x4b050842  vaddz.x     $vf1, $vf1, $vf5z
    ctx->pc = 0x1e57d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e57dc: 0x4be6133c  vmove.xyzw  $vf6, $vf2
    ctx->pc = 0x1e57dcu;
    ctx->vu0_vf[6] = ctx->vu0_vf[2];
    // 0x1e57e0: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1e57e0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1e57e4: 0x4a0003bf  vwaitq
    ctx->pc = 0x1e57e4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1e57e8: 0x4bc0319c  vmulq.xyz   $vf6, $vf6, $Q
    ctx->pc = 0x1e57e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1e57ec: 0x4a0002ff  vnop
    ctx->pc = 0x1e57ecu;
    // NOP operation, no action needed for VU0
    // 0x1e57f0: 0x4a0002ff  vnop
    ctx->pc = 0x1e57f0u;
    // NOP operation, no action needed for VU0
    // 0x1e57f4: 0x4be3196a  vmul.xyzw   $vf5, $vf3, $vf3
    ctx->pc = 0x1e57f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1e57f8: 0xfba60120  sqc2        $vf6, 0x120($sp)
    ctx->pc = 0x1e57f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1e57fc: 0x4b052841  vaddy.x     $vf1, $vf5, $vf5y
    ctx->pc = 0x1e57fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e5800: 0x4b050842  vaddz.x     $vf1, $vf1, $vf5z
    ctx->pc = 0x1e5800u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e5804: 0x4be71b3c  vmove.xyzw  $vf7, $vf3
    ctx->pc = 0x1e5804u;
    ctx->vu0_vf[7] = ctx->vu0_vf[3];
    // 0x1e5808: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1e5808u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1e580c: 0x4a0003bf  vwaitq
    ctx->pc = 0x1e580cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1e5810: 0x4bc039dc  vmulq.xyz   $vf7, $vf7, $Q
    ctx->pc = 0x1e5810u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1e5814: 0x4a0002ff  vnop
    ctx->pc = 0x1e5814u;
    // NOP operation, no action needed for VU0
    // 0x1e5818: 0x4a0002ff  vnop
    ctx->pc = 0x1e5818u;
    // NOP operation, no action needed for VU0
    // 0x1e581c: 0x4be420aa  vmul.xyzw   $vf2, $vf4, $vf4
    ctx->pc = 0x1e581cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e5820: 0xfba70130  sqc2        $vf7, 0x130($sp)
    ctx->pc = 0x1e5820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1e5824: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1e5824u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e5828: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1e5828u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e582c: 0x4be5233c  vmove.xyzw  $vf5, $vf4
    ctx->pc = 0x1e582cu;
    ctx->vu0_vf[5] = ctx->vu0_vf[4];
    // 0x1e5830: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1e5830u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1e5834: 0x4a0003bf  vwaitq
    ctx->pc = 0x1e5834u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1e5838: 0x4bc0295c  vmulq.xyz   $vf5, $vf5, $Q
    ctx->pc = 0x1e5838u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1e583c: 0x4a0002ff  vnop
    ctx->pc = 0x1e583cu;
    // NOP operation, no action needed for VU0
    // 0x1e5840: 0x4a0002ff  vnop
    ctx->pc = 0x1e5840u;
    // NOP operation, no action needed for VU0
    // 0x1e5844: 0xfba60060  sqc2        $vf6, 0x60($sp)
    ctx->pc = 0x1e5844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1e5848: 0xfba70070  sqc2        $vf7, 0x70($sp)
    ctx->pc = 0x1e5848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1e584c: 0xfba50140  sqc2        $vf5, 0x140($sp)
    ctx->pc = 0x1e584cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1e5850: 0xfba50080  sqc2        $vf5, 0x80($sp)
    ctx->pc = 0x1e5850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1e5854: 0xfba60150  sqc2        $vf6, 0x150($sp)
    ctx->pc = 0x1e5854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1e5858: 0xfba70160  sqc2        $vf7, 0x160($sp)
    ctx->pc = 0x1e5858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1e585c: 0xfba50170  sqc2        $vf5, 0x170($sp)
    ctx->pc = 0x1e585cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1e5860: 0xfba80180  sqc2        $vf8, 0x180($sp)
    ctx->pc = 0x1e5860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x1e5864: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e5864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e5868: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1e5868u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e586c: 0x4be000ec  vsub.xyzw   $vf3, $vf0, $vf0
    ctx->pc = 0x1e586cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e5870: 0x4a8118c0  vaddx.y     $vf3, $vf3, $vf1x
    ctx->pc = 0x1e5870u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e5874: 0xfba30160  sqc2        $vf3, 0x160($sp)
    ctx->pc = 0x1e5874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e5878: 0x4bc332fe  vopmula.xyz $ACC, $vf6, $vf3
    ctx->pc = 0x1e5878u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]);
    // 0x1e587c: 0x4bc618ae  vopmsub.xyz $vf2, $vf3, $vf6
    ctx->pc = 0x1e587cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[6]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1e5880: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x1e5880u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e5884: 0x4be2112a  vmul.xyzw   $vf4, $vf2, $vf2
    ctx->pc = 0x1e5884u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1e5888: 0x4b042041  vaddy.x     $vf1, $vf4, $vf4y
    ctx->pc = 0x1e5888u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e588c: 0x4b040842  vaddz.x     $vf1, $vf1, $vf4z
    ctx->pc = 0x1e588cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e5890: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1e5890u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1e5894: 0x4a0003bf  vwaitq
    ctx->pc = 0x1e5894u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1e5898: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x1e5898u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e589c: 0x4a0002ff  vnop
    ctx->pc = 0x1e589cu;
    // NOP operation, no action needed for VU0
    // 0x1e58a0: 0x4a0002ff  vnop
    ctx->pc = 0x1e58a0u;
    // NOP operation, no action needed for VU0
    // 0x1e58a4: 0xfba20190  sqc2        $vf2, 0x190($sp)
    ctx->pc = 0x1e58a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e58a8: 0xfba20170  sqc2        $vf2, 0x170($sp)
    ctx->pc = 0x1e58a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e58ac: 0x4bc21afe  vopmula.xyz $ACC, $vf3, $vf2
    ctx->pc = 0x1e58acu;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[2]);
    // 0x1e58b0: 0x4bc310ee  vopmsub.xyz $vf3, $vf2, $vf3
    ctx->pc = 0x1e58b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1e58b4: 0x4a2318ec  vsub.w      $vf3, $vf3, $vf3
    ctx->pc = 0x1e58b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e58b8: 0x4be3192a  vmul.xyzw   $vf4, $vf3, $vf3
    ctx->pc = 0x1e58b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1e58bc: 0x4b042041  vaddy.x     $vf1, $vf4, $vf4y
    ctx->pc = 0x1e58bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e58c0: 0xda220200  lqc2        $vf2, 0x200($s1)
    ctx->pc = 0x1e58c0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 512)));
    // 0x1e58c4: 0x4b040842  vaddz.x     $vf1, $vf1, $vf4z
    ctx->pc = 0x1e58c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e58c8: 0x4be231bc  vmulax.xyzw $ACC, $vf6, $vf2x
    ctx->pc = 0x1e58c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1e58cc: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1e58ccu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1e58d0: 0x4a0003bf  vwaitq
    ctx->pc = 0x1e58d0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1e58d4: 0x4bc018dc  vmulq.xyz   $vf3, $vf3, $Q
    ctx->pc = 0x1e58d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e58d8: 0x4a0002ff  vnop
    ctx->pc = 0x1e58d8u;
    // NOP operation, no action needed for VU0
    // 0x1e58dc: 0x4a0002ff  vnop
    ctx->pc = 0x1e58dcu;
    // NOP operation, no action needed for VU0
    // 0x1e58e0: 0x4be238bd  vmadday.xyzw $ACC, $vf7, $vf2y
    ctx->pc = 0x1e58e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1e58e4: 0xfba30150  sqc2        $vf3, 0x150($sp)
    ctx->pc = 0x1e58e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e58e8: 0x4be228be  vmaddaz.xyzw $ACC, $vf5, $vf2z
    ctx->pc = 0x1e58e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1e58ec: 0xfba301a0  sqc2        $vf3, 0x1A0($sp)
    ctx->pc = 0x1e58ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e58f0: 0x4be2408b  vmaddw.xyzw $vf2, $vf8, $vf2w
    ctx->pc = 0x1e58f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1e58f4: 0xfa220200  sqc2        $vf2, 0x200($s1)
    ctx->pc = 0x1e58f4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 512), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e58f8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1e58f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e58fc: 0xdba302d0  lqc2        $vf3, 0x2D0($sp)
    ctx->pc = 0x1e58fcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x1e5900: 0x4b030043  vaddw.x     $vf1, $vf0, $vf3w
    ctx->pc = 0x1e5900u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e5904: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1e5904u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e5908: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e5908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e590c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1e590cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e5910: 0x0  nop
    ctx->pc = 0x1e5910u;
    // NOP
    // 0x1e5914: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1E5914u;
    {
        const bool branch_taken_0x1e5914 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E5918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5914u;
            // 0x1e5918: 0xdba102b0  lqc2        $vf1, 0x2B0($sp) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5914) {
            ctx->pc = 0x1E5938u;
            goto label_1e5938;
        }
    }
    ctx->pc = 0x1E591Cu;
    // 0x1e591c: 0x4be331bc  vmulax.xyzw $ACC, $vf6, $vf3x
    ctx->pc = 0x1e591cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1e5920: 0x4be338bd  vmadday.xyzw $ACC, $vf7, $vf3y
    ctx->pc = 0x1e5920u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1e5924: 0x4be328be  vmaddaz.xyzw $ACC, $vf5, $vf3z
    ctx->pc = 0x1e5924u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1e5928: 0x4be340cb  vmaddw.xyzw $vf3, $vf8, $vf3w
    ctx->pc = 0x1e5928u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1e592c: 0xfba302d0  sqc2        $vf3, 0x2D0($sp)
    ctx->pc = 0x1e592cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e5930: 0xdba102b0  lqc2        $vf1, 0x2B0($sp)
    ctx->pc = 0x1e5930u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1e5934: 0x0  nop
    ctx->pc = 0x1e5934u;
    // NOP
label_1e5938:
    // 0x1e5938: 0x4be20a68  vadd.xyzw   $vf9, $vf1, $vf2
    ctx->pc = 0x1e5938u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x1e593c: 0x26230050  addiu       $v1, $s1, 0x50
    ctx->pc = 0x1e593cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x1e5940: 0xd86a0030  lqc2        $vf10, 0x30($v1)
    ctx->pc = 0x1e5940u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1e5944: 0x4bea4a6c  vsub.xyzw   $vf9, $vf9, $vf10
    ctx->pc = 0x1e5944u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[9], ctx->vu0_vf[10]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x1e5948: 0x26220090  addiu       $v0, $s1, 0x90
    ctx->pc = 0x1e5948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x1e594c: 0xd84b0030  lqc2        $vf11, 0x30($v0)
    ctx->pc = 0x1e594cu;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1e5950: 0x4be95ae8  vadd.xyzw   $vf11, $vf11, $vf9
    ctx->pc = 0x1e5950u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[11], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x1e5954: 0x4be952a8  vadd.xyzw   $vf10, $vf10, $vf9
    ctx->pc = 0x1e5954u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x1e5958: 0x7ba402c0  lq          $a0, 0x2C0($sp)
    ctx->pc = 0x1e5958u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x1e595c: 0x7c440030  sq          $a0, 0x30($v0)
    ctx->pc = 0x1e595cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), GPR_VEC(ctx, 4));
    // 0x1e5960: 0x7c640030  sq          $a0, 0x30($v1)
    ctx->pc = 0x1e5960u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 4));
    // 0x1e5964: 0xdba60150  lqc2        $vf6, 0x150($sp)
    ctx->pc = 0x1e5964u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1e5968: 0xdba70160  lqc2        $vf7, 0x160($sp)
    ctx->pc = 0x1e5968u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1e596c: 0xdba80170  lqc2        $vf8, 0x170($sp)
    ctx->pc = 0x1e596cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1e5970: 0xdba50180  lqc2        $vf5, 0x180($sp)
    ctx->pc = 0x1e5970u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1e5974: 0xda210090  lqc2        $vf1, 0x90($s1)
    ctx->pc = 0x1e5974u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x1e5978: 0xd8420010  lqc2        $vf2, 0x10($v0)
    ctx->pc = 0x1e5978u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1e597c: 0xd8430020  lqc2        $vf3, 0x20($v0)
    ctx->pc = 0x1e597cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1e5980: 0xd8440030  lqc2        $vf4, 0x30($v0)
    ctx->pc = 0x1e5980u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1e5984: 0x4be131bc  vmulax.xyzw $ACC, $vf6, $vf1x
    ctx->pc = 0x1e5984u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1e5988: 0x4be138bd  vmadday.xyzw $ACC, $vf7, $vf1y
    ctx->pc = 0x1e5988u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1e598c: 0x4be140be  vmaddaz.xyzw $ACC, $vf8, $vf1z
    ctx->pc = 0x1e598cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1e5990: 0x4be1284b  vmaddw.xyzw $vf1, $vf5, $vf1w
    ctx->pc = 0x1e5990u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1e5994: 0x4be231bc  vmulax.xyzw $ACC, $vf6, $vf2x
    ctx->pc = 0x1e5994u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1e5998: 0xfba101f0  sqc2        $vf1, 0x1F0($sp)
    ctx->pc = 0x1e5998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e599c: 0x4be238bd  vmadday.xyzw $ACC, $vf7, $vf2y
    ctx->pc = 0x1e599cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1e59a0: 0x4be240be  vmaddaz.xyzw $ACC, $vf8, $vf2z
    ctx->pc = 0x1e59a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1e59a4: 0x4be2288b  vmaddw.xyzw $vf2, $vf5, $vf2w
    ctx->pc = 0x1e59a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1e59a8: 0x4be331bc  vmulax.xyzw $ACC, $vf6, $vf3x
    ctx->pc = 0x1e59a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1e59ac: 0xfba20200  sqc2        $vf2, 0x200($sp)
    ctx->pc = 0x1e59acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e59b0: 0x4be338bd  vmadday.xyzw $ACC, $vf7, $vf3y
    ctx->pc = 0x1e59b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1e59b4: 0x4be340be  vmaddaz.xyzw $ACC, $vf8, $vf3z
    ctx->pc = 0x1e59b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1e59b8: 0x4be328cb  vmaddw.xyzw $vf3, $vf5, $vf3w
    ctx->pc = 0x1e59b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1e59bc: 0x4be431bc  vmulax.xyzw $ACC, $vf6, $vf4x
    ctx->pc = 0x1e59bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1e59c0: 0xfba30210  sqc2        $vf3, 0x210($sp)
    ctx->pc = 0x1e59c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e59c4: 0x4be438bd  vmadday.xyzw $ACC, $vf7, $vf4y
    ctx->pc = 0x1e59c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1e59c8: 0x4be440be  vmaddaz.xyzw $ACC, $vf8, $vf4z
    ctx->pc = 0x1e59c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1e59cc: 0x4be4290b  vmaddw.xyzw $vf4, $vf5, $vf4w
    ctx->pc = 0x1e59ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1e59d0: 0xfba40220  sqc2        $vf4, 0x220($sp)
    ctx->pc = 0x1e59d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1e59d4: 0xfba101b0  sqc2        $vf1, 0x1B0($sp)
    ctx->pc = 0x1e59d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e59d8: 0xfa210090  sqc2        $vf1, 0x90($s1)
    ctx->pc = 0x1e59d8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e59dc: 0xfa2200a0  sqc2        $vf2, 0xA0($s1)
    ctx->pc = 0x1e59dcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 160), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e59e0: 0xfa2300b0  sqc2        $vf3, 0xB0($s1)
    ctx->pc = 0x1e59e0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 176), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e59e4: 0xfa2400c0  sqc2        $vf4, 0xC0($s1)
    ctx->pc = 0x1e59e4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1e59e8: 0xfba201c0  sqc2        $vf2, 0x1C0($sp)
    ctx->pc = 0x1e59e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e59ec: 0xfba301d0  sqc2        $vf3, 0x1D0($sp)
    ctx->pc = 0x1e59ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e59f0: 0xfba401e0  sqc2        $vf4, 0x1E0($sp)
    ctx->pc = 0x1e59f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1e59f4: 0xda210050  lqc2        $vf1, 0x50($s1)
    ctx->pc = 0x1e59f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x1e59f8: 0xd8620010  lqc2        $vf2, 0x10($v1)
    ctx->pc = 0x1e59f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1e59fc: 0xd8630020  lqc2        $vf3, 0x20($v1)
    ctx->pc = 0x1e59fcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1e5a00: 0xd8640030  lqc2        $vf4, 0x30($v1)
    ctx->pc = 0x1e5a00u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1e5a04: 0x4be131bc  vmulax.xyzw $ACC, $vf6, $vf1x
    ctx->pc = 0x1e5a04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1e5a08: 0x4be138bd  vmadday.xyzw $ACC, $vf7, $vf1y
    ctx->pc = 0x1e5a08u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1e5a0c: 0x4be140be  vmaddaz.xyzw $ACC, $vf8, $vf1z
    ctx->pc = 0x1e5a0cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1e5a10: 0x4be1284b  vmaddw.xyzw $vf1, $vf5, $vf1w
    ctx->pc = 0x1e5a10u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1e5a14: 0x4be231bc  vmulax.xyzw $ACC, $vf6, $vf2x
    ctx->pc = 0x1e5a14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1e5a18: 0xfba10270  sqc2        $vf1, 0x270($sp)
    ctx->pc = 0x1e5a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e5a1c: 0x4be238bd  vmadday.xyzw $ACC, $vf7, $vf2y
    ctx->pc = 0x1e5a1cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1e5a20: 0x4be240be  vmaddaz.xyzw $ACC, $vf8, $vf2z
    ctx->pc = 0x1e5a20u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1e5a24: 0x4be2288b  vmaddw.xyzw $vf2, $vf5, $vf2w
    ctx->pc = 0x1e5a24u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1e5a28: 0x4be331bc  vmulax.xyzw $ACC, $vf6, $vf3x
    ctx->pc = 0x1e5a28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1e5a2c: 0xfba20280  sqc2        $vf2, 0x280($sp)
    ctx->pc = 0x1e5a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e5a30: 0x4be338bd  vmadday.xyzw $ACC, $vf7, $vf3y
    ctx->pc = 0x1e5a30u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1e5a34: 0x4be340be  vmaddaz.xyzw $ACC, $vf8, $vf3z
    ctx->pc = 0x1e5a34u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1e5a38: 0x4be328cb  vmaddw.xyzw $vf3, $vf5, $vf3w
    ctx->pc = 0x1e5a38u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1e5a3c: 0x4be431bc  vmulax.xyzw $ACC, $vf6, $vf4x
    ctx->pc = 0x1e5a3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1e5a40: 0xfba30290  sqc2        $vf3, 0x290($sp)
    ctx->pc = 0x1e5a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e5a44: 0x4be438bd  vmadday.xyzw $ACC, $vf7, $vf4y
    ctx->pc = 0x1e5a44u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1e5a48: 0x4be440be  vmaddaz.xyzw $ACC, $vf8, $vf4z
    ctx->pc = 0x1e5a48u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1e5a4c: 0x4be4294b  vmaddw.xyzw $vf5, $vf5, $vf4w
    ctx->pc = 0x1e5a4cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1e5a50: 0xfba502a0  sqc2        $vf5, 0x2A0($sp)
    ctx->pc = 0x1e5a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1e5a54: 0xfba10230  sqc2        $vf1, 0x230($sp)
    ctx->pc = 0x1e5a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e5a58: 0xfa210050  sqc2        $vf1, 0x50($s1)
    ctx->pc = 0x1e5a58u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e5a5c: 0xfa220060  sqc2        $vf2, 0x60($s1)
    ctx->pc = 0x1e5a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 96), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e5a60: 0xfa230070  sqc2        $vf3, 0x70($s1)
    ctx->pc = 0x1e5a60u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 112), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e5a64: 0xfa250080  sqc2        $vf5, 0x80($s1)
    ctx->pc = 0x1e5a64u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 128), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1e5a68: 0xfba20240  sqc2        $vf2, 0x240($sp)
    ctx->pc = 0x1e5a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e5a6c: 0xfba30250  sqc2        $vf3, 0x250($sp)
    ctx->pc = 0x1e5a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e5a70: 0xfba50260  sqc2        $vf5, 0x260($sp)
    ctx->pc = 0x1e5a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1e5a74: 0xf84b0030  sqc2        $vf11, 0x30($v0)
    ctx->pc = 0x1e5a74u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x1e5a78: 0xf86a0030  sqc2        $vf10, 0x30($v1)
    ctx->pc = 0x1e5a78u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x1e5a7c: 0xda210110  lqc2        $vf1, 0x110($s1)
    ctx->pc = 0x1e5a7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x1e5a80: 0x4be90868  vadd.xyzw   $vf1, $vf1, $vf9
    ctx->pc = 0x1e5a80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e5a84: 0xfa210110  sqc2        $vf1, 0x110($s1)
    ctx->pc = 0x1e5a84u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e5a88: 0xda2100d0  lqc2        $vf1, 0xD0($s1)
    ctx->pc = 0x1e5a88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x1e5a8c: 0x4be90868  vadd.xyzw   $vf1, $vf1, $vf9
    ctx->pc = 0x1e5a8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e5a90: 0xfa2100d0  sqc2        $vf1, 0xD0($s1)
    ctx->pc = 0x1e5a90u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e5a94: 0x7ba202d0  lq          $v0, 0x2D0($sp)
    ctx->pc = 0x1e5a94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 720)));
label_1e5a98:
    // 0x1e5a98: 0x7bb00310  lq          $s0, 0x310($sp)
    ctx->pc = 0x1e5a98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x1e5a9c: 0x7bb10300  lq          $s1, 0x300($sp)
    ctx->pc = 0x1e5a9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x1e5aa0: 0x7bb202f0  lq          $s2, 0x2F0($sp)
    ctx->pc = 0x1e5aa0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x1e5aa4: 0xdfbf02e0  ld          $ra, 0x2E0($sp)
    ctx->pc = 0x1e5aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x1e5aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5AA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5AA8u;
            // 0x1e5aac: 0x27bd0320  addiu       $sp, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E5708u: goto label_1e5708;
            case 0x1E5938u: goto label_1e5938;
            case 0x1E5A98u: goto label_1e5a98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E5AB0u;
}
