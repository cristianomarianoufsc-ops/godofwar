#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001251A0
// Address: 0x1251a0 - 0x1252e0
void sub_001251A0_0x1251a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001251A0_0x1251a0");
#endif

    ctx->pc = 0x1251a0u;

    // 0x1251a0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1251a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x1251a4: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x1251a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x1251a8: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x1251a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x1251ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1251acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1251b0: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x1251b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x1251b4: 0x8e0400ac  lw          $a0, 0xAC($s0)
    ctx->pc = 0x1251b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x1251b8: 0xc04c050  jal         func_130140
    ctx->pc = 0x1251B8u;
    SET_GPR_U32(ctx, 31, 0x1251C0u);
    ctx->pc = 0x1251BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1251B8u;
            // 0x1251bc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130140u;
    if (runtime->hasFunction(0x130140u)) {
        auto targetFn = runtime->lookupFunction(0x130140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1251C0u; }
        if (ctx->pc != 0x1251C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00130140_0x130140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1251C0u; }
        if (ctx->pc != 0x1251C0u) { return; }
    }
    ctx->pc = 0x1251C0u;
    // 0x1251c0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1251c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1251c4: 0x8e1000a8  lw          $s0, 0xA8($s0)
    ctx->pc = 0x1251c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x1251c8: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1251c8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1251cc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1251ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1251d0: 0x8c51bde8  lw          $s1, -0x4218($v0)
    ctx->pc = 0x1251d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950376)));
    // 0x1251d4: 0xde020068  ld          $v0, 0x68($s0)
    ctx->pc = 0x1251d4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1251d8: 0x50450005  beql        $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1251D8u;
    {
        const bool branch_taken_0x1251d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1251d8) {
            ctx->pc = 0x1251DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1251D8u;
            // 0x1251dc: 0xde030068  ld          $v1, 0x68($s0) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1251F0u;
            goto label_1251f0;
        }
    }
    ctx->pc = 0x1251E0u;
    // 0x1251e0: 0xc056f5e  jal         func_15BD78
    ctx->pc = 0x1251E0u;
    SET_GPR_U32(ctx, 31, 0x1251E8u);
    ctx->pc = 0x1251E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1251E0u;
            // 0x1251e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BD78u;
    if (runtime->hasFunction(0x15BD78u)) {
        auto targetFn = runtime->lookupFunction(0x15BD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1251E8u; }
        if (ctx->pc != 0x1251E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015BD78_0x15bd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1251E8u; }
        if (ctx->pc != 0x1251E8u) { return; }
    }
    ctx->pc = 0x1251E8u;
    // 0x1251e8: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x1251e8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1251ec: 0x0  nop
    ctx->pc = 0x1251ecu;
    // NOP
label_1251f0:
    // 0x1251f0: 0xde020140  ld          $v0, 0x140($s0)
    ctx->pc = 0x1251f0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x1251f4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1251f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1251f8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1251F8u;
    {
        const bool branch_taken_0x1251f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1251FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1251F8u;
            // 0x1251fc: 0x26050070  addiu       $a1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1251f8) {
            ctx->pc = 0x12522Cu;
            goto label_12522c;
        }
    }
    ctx->pc = 0x125200u;
    // 0x125200: 0xfe030140  sd          $v1, 0x140($s0)
    ctx->pc = 0x125200u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 320), GPR_U64(ctx, 3));
    // 0x125204: 0xc0614f6  jal         func_1853D8
    ctx->pc = 0x125204u;
    SET_GPR_U32(ctx, 31, 0x12520Cu);
    ctx->pc = 0x125208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125204u;
            // 0x125208: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1853D8u;
    if (runtime->hasFunction(0x1853D8u)) {
        auto targetFn = runtime->lookupFunction(0x1853D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12520Cu; }
        if (ctx->pc != 0x12520Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1853d8_0x1855e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12520Cu; }
        if (ctx->pc != 0x12520Cu) { return; }
    }
    ctx->pc = 0x12520Cu;
    // 0x12520c: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x12520cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x125210: 0x7e0200e0  sq          $v0, 0xE0($s0)
    ctx->pc = 0x125210u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 224), GPR_VEC(ctx, 2));
    // 0x125214: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x125214u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x125218: 0x7e0200f0  sq          $v0, 0xF0($s0)
    ctx->pc = 0x125218u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 240), GPR_VEC(ctx, 2));
    // 0x12521c: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x12521cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x125220: 0x7e020100  sq          $v0, 0x100($s0)
    ctx->pc = 0x125220u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 256), GPR_VEC(ctx, 2));
    // 0x125224: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x125224u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x125228: 0x7e020110  sq          $v0, 0x110($s0)
    ctx->pc = 0x125228u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 272), GPR_VEC(ctx, 2));
label_12522c:
    // 0x12522c: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x12522cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x125230: 0xda0600e0  lqc2        $vf6, 0xE0($s0)
    ctx->pc = 0x125230u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x125234: 0xd8440030  lqc2        $vf4, 0x30($v0)
    ctx->pc = 0x125234u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x125238: 0xd8470010  lqc2        $vf7, 0x10($v0)
    ctx->pc = 0x125238u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x12523c: 0xd8480020  lqc2        $vf8, 0x20($v0)
    ctx->pc = 0x12523cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x125240: 0xdba30000  lqc2        $vf3, 0x0($sp)
    ctx->pc = 0x125240u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125244: 0xdba10010  lqc2        $vf1, 0x10($sp)
    ctx->pc = 0x125244u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x125248: 0xdba20020  lqc2        $vf2, 0x20($sp)
    ctx->pc = 0x125248u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12524c: 0xdba50030  lqc2        $vf5, 0x30($sp)
    ctx->pc = 0x12524cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x125250: 0x4be331bc  vmulax.xyzw $ACC, $vf6, $vf3x
    ctx->pc = 0x125250u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x125254: 0x4be338bd  vmadday.xyzw $ACC, $vf7, $vf3y
    ctx->pc = 0x125254u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x125258: 0x4be340be  vmaddaz.xyzw $ACC, $vf8, $vf3z
    ctx->pc = 0x125258u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x12525c: 0x4be320cb  vmaddw.xyzw $vf3, $vf4, $vf3w
    ctx->pc = 0x12525cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x125260: 0x4be131bc  vmulax.xyzw $ACC, $vf6, $vf1x
    ctx->pc = 0x125260u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x125264: 0xfba300c0  sqc2        $vf3, 0xC0($sp)
    ctx->pc = 0x125264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x125268: 0x4be138bd  vmadday.xyzw $ACC, $vf7, $vf1y
    ctx->pc = 0x125268u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x12526c: 0x4be140be  vmaddaz.xyzw $ACC, $vf8, $vf1z
    ctx->pc = 0x12526cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x125270: 0x4be1204b  vmaddw.xyzw $vf1, $vf4, $vf1w
    ctx->pc = 0x125270u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x125274: 0x4be231bc  vmulax.xyzw $ACC, $vf6, $vf2x
    ctx->pc = 0x125274u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x125278: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x125278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12527c: 0x4be238bd  vmadday.xyzw $ACC, $vf7, $vf2y
    ctx->pc = 0x12527cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x125280: 0x4be240be  vmaddaz.xyzw $ACC, $vf8, $vf2z
    ctx->pc = 0x125280u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x125284: 0x4be2208b  vmaddw.xyzw $vf2, $vf4, $vf2w
    ctx->pc = 0x125284u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x125288: 0x4be531bc  vmulax.xyzw $ACC, $vf6, $vf5x
    ctx->pc = 0x125288u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x12528c: 0xfba200e0  sqc2        $vf2, 0xE0($sp)
    ctx->pc = 0x12528cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x125290: 0x4be538bd  vmadday.xyzw $ACC, $vf7, $vf5y
    ctx->pc = 0x125290u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x125294: 0x4be540be  vmaddaz.xyzw $ACC, $vf8, $vf5z
    ctx->pc = 0x125294u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x125298: 0x4be5210b  vmaddw.xyzw $vf4, $vf4, $vf5w
    ctx->pc = 0x125298u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x12529c: 0xfba400f0  sqc2        $vf4, 0xF0($sp)
    ctx->pc = 0x12529cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1252a0: 0xfba30040  sqc2        $vf3, 0x40($sp)
    ctx->pc = 0x1252a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1252a4: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1252a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1252a8: 0xfba20060  sqc2        $vf2, 0x60($sp)
    ctx->pc = 0x1252a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1252ac: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1252acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1252b0: 0xfa2300c0  sqc2        $vf3, 0xC0($s1)
    ctx->pc = 0x1252b0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 192), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1252b4: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x1252b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1252b8: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x1252b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1252bc: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x1252bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1252c0: 0x7e2200d0  sq          $v0, 0xD0($s1)
    ctx->pc = 0x1252c0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 208), GPR_VEC(ctx, 2));
    // 0x1252c4: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x1252c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1252c8: 0x7e2200e0  sq          $v0, 0xE0($s1)
    ctx->pc = 0x1252c8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 224), GPR_VEC(ctx, 2));
    // 0x1252cc: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x1252ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1252d0: 0x7e2200f0  sq          $v0, 0xF0($s1)
    ctx->pc = 0x1252d0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 240), GPR_VEC(ctx, 2));
    // 0x1252d4: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x1252d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1252d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1252D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1252DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1252D8u;
            // 0x1252dc: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1251F0u: goto label_1251f0;
            case 0x12522Cu: goto label_12522c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1252E0u;
}
