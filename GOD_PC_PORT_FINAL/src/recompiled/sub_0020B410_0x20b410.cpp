#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020B410
// Address: 0x20b410 - 0x20b610
void sub_0020B410_0x20b410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B410_0x20b410");
#endif

    ctx->pc = 0x20b410u;

label_20b410:
    // 0x20b410: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x20b410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x20b414: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x20b414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x20b418: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x20b418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x20b41c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x20b41cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b420: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x20b420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x20b424: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20b424u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b428: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x20b428u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x20b42c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x20b42cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b430: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x20b430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x20b434: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x20b434u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x20b438: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x20b438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x20b43c: 0x2a620005  slti        $v0, $s3, 0x5
    ctx->pc = 0x20b43cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x20b440: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x20B440u;
    {
        const bool branch_taken_0x20b440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20B444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B440u;
            // 0x20b444: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b440) {
            ctx->pc = 0x20B4DCu;
            goto label_20b4dc;
        }
    }
    ctx->pc = 0x20B448u;
    // 0x20b448: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x20b448u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x20b44c: 0x24050079  addiu       $a1, $zero, 0x79
    ctx->pc = 0x20b44cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
    // 0x20b450: 0xc04f99c  jal         func_13E670
    ctx->pc = 0x20B450u;
    SET_GPR_U32(ctx, 31, 0x20B458u);
    ctx->pc = 0x20B454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20B450u;
            // 0x20b454: 0x2484b950  addiu       $a0, $a0, -0x46B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E670u;
    if (runtime->hasFunction(0x13E670u)) {
        auto targetFn = runtime->lookupFunction(0x13E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B458u; }
        if (ctx->pc != 0x20B458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013E670_0x13e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B458u; }
        if (ctx->pc != 0x20B458u) { return; }
    }
    ctx->pc = 0x20B458u;
    // 0x20b458: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20b458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b45c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x20b45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20b460: 0x24a3001f  addiu       $v1, $a1, 0x1F
    ctx->pc = 0x20b460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 31));
    // 0x20b464: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x20b464u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x20b468: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x20b468u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x20b46c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20b46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b470: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x20b470u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x20b474: 0xa22004  sllv        $a0, $v0, $a1
    ctx->pc = 0x20b474u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x20b478: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20b478u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20b47c: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x20b47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x20b480: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x20b480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x20b484: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x20b484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x20b488: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x20B488u;
    {
        const bool branch_taken_0x20b488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20b488) {
            ctx->pc = 0x20B48Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20B488u;
            // 0x20b48c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20B4C8u;
            goto label_20b4c8;
        }
    }
    ctx->pc = 0x20B490u;
    // 0x20b490: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x20b490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x20b494: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x20b494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x20b498: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x20b498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x20b49c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20B49Cu;
    {
        const bool branch_taken_0x20b49c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20B4A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B49Cu;
            // 0x20b4a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b49c) {
            ctx->pc = 0x20B4B8u;
            goto label_20b4b8;
        }
    }
    ctx->pc = 0x20B4A4u;
    // 0x20b4a4: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x20b4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x20b4a8: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x20b4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x20b4ac: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x20b4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x20b4b0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x20B4B0u;
    {
        const bool branch_taken_0x20b4b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b4b0) {
            ctx->pc = 0x20B4BCu;
            goto label_20b4bc;
        }
    }
    ctx->pc = 0x20B4B8u;
label_20b4b8:
    // 0x20b4b8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20b4b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20b4bc:
    // 0x20b4bc: 0x50c0004b  beql        $a2, $zero, . + 4 + (0x4B << 2)
    ctx->pc = 0x20B4BCu;
    {
        const bool branch_taken_0x20b4bc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b4bc) {
            ctx->pc = 0x20B4C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20B4BCu;
            // 0x20b4c0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20B5ECu;
            goto label_20b5ec;
        }
    }
    ctx->pc = 0x20B4C4u;
    // 0x20b4c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20b4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20b4c8:
    // 0x20b4c8: 0xc090bbe  jal         func_242EF8
    ctx->pc = 0x20B4C8u;
    SET_GPR_U32(ctx, 31, 0x20B4D0u);
    ctx->pc = 0x20B4CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20B4C8u;
            // 0x20b4cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242EF8u;
    if (runtime->hasFunction(0x242EF8u)) {
        auto targetFn = runtime->lookupFunction(0x242EF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B4D0u; }
        if (ctx->pc != 0x20B4D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242ef8_0x243050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B4D0u; }
        if (ctx->pc != 0x20B4D0u) { return; }
    }
    ctx->pc = 0x20B4D0u;
    // 0x20b4d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20b4d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b4d4: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x20B4D4u;
    {
        const bool branch_taken_0x20b4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B4D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B4D4u;
            // 0x20b4d8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b4d4) {
            ctx->pc = 0x20B5ECu;
            goto label_20b5ec;
        }
    }
    ctx->pc = 0x20B4DCu;
label_20b4dc:
    // 0x20b4dc: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x20b4dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x20b4e0: 0x3c10002d  lui         $s0, 0x2D
    ctx->pc = 0x20b4e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)45 << 16));
    // 0x20b4e4: 0x2610b950  addiu       $s0, $s0, -0x46B0
    ctx->pc = 0x20b4e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949200));
    // 0x20b4e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20b4e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20b4ec: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x20b4ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x20b4f0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x20b4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x20b4f4: 0xc04f970  jal         func_13E5C0
    ctx->pc = 0x20B4F4u;
    SET_GPR_U32(ctx, 31, 0x20B4FCu);
    ctx->pc = 0x20B4F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20B4F4u;
            // 0x20b4f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E5C0u;
    if (runtime->hasFunction(0x13E5C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B4FCu; }
        if (ctx->pc != 0x20B4FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e5c0_0x13e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B4FCu; }
        if (ctx->pc != 0x20B4FCu) { return; }
    }
    ctx->pc = 0x20B4FCu;
    // 0x20b4fc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x20b4fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x20b500: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x20b500u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x20b504: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x20b504u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x20b508: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x20b508u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x20b50c: 0xdba20010  lqc2        $vf2, 0x10($sp)
    ctx->pc = 0x20b50cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20b510: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x20b510u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20b514: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x20b514u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x20b518: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x20b518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x20b51c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20b51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b520: 0xc04f970  jal         func_13E5C0
    ctx->pc = 0x20B520u;
    SET_GPR_U32(ctx, 31, 0x20B528u);
    ctx->pc = 0x20B524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20B520u;
            // 0x20b524: 0xfba20040  sqc2        $vf2, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E5C0u;
    if (runtime->hasFunction(0x13E5C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B528u; }
        if (ctx->pc != 0x20B528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e5c0_0x13e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B528u; }
        if (ctx->pc != 0x20B528u) { return; }
    }
    ctx->pc = 0x20B528u;
    // 0x20b528: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x20b528u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x20b52c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x20b52cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x20b530: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x20b530u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x20b534: 0x48a31800  qmtc2.ni    $v1, $vf3
    ctx->pc = 0x20b534u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x20b538: 0xdba10020  lqc2        $vf1, 0x20($sp)
    ctx->pc = 0x20b538u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20b53c: 0x4be30858  vmulx.xyzw  $vf1, $vf1, $vf3x
    ctx->pc = 0x20b53cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20b540: 0xdba20040  lqc2        $vf2, 0x40($sp)
    ctx->pc = 0x20b540u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20b544: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x20b544u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20b548: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x20b548u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x20b54c: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x20b54cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20b550: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x20b550u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20b554: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x20b554u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x20b558: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x20b558u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x20b55c: 0x4a0003bf  vwaitq
    ctx->pc = 0x20b55cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x20b560: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x20b560u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20b564: 0x4a0002ff  vnop
    ctx->pc = 0x20b564u;
    // NOP operation, no action needed for VU0
    // 0x20b568: 0x4a0002ff  vnop
    ctx->pc = 0x20b568u;
    // NOP operation, no action needed for VU0
    // 0x20b56c: 0x48a31800  qmtc2.ni    $v1, $vf3
    ctx->pc = 0x20b56cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x20b570: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x20b570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x20b574: 0xfba20030  sqc2        $vf2, 0x30($sp)
    ctx->pc = 0x20b574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x20b578: 0x4be31098  vmulx.xyzw  $vf2, $vf2, $vf3x
    ctx->pc = 0x20b578u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20b57c: 0xda210030  lqc2        $vf1, 0x30($s1)
    ctx->pc = 0x20b57cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x20b580: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20b580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b584: 0x4be110e8  vadd.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x20b584u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x20b588: 0xc0828e4  jal         func_20A390
    ctx->pc = 0x20B588u;
    SET_GPR_U32(ctx, 31, 0x20B590u);
    ctx->pc = 0x20B58Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20B588u;
            // 0x20b58c: 0x48251800  qmfc2.ni    $a1, $vf3 (Delay Slot)
        SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A390u;
    if (runtime->hasFunction(0x20A390u)) {
        auto targetFn = runtime->lookupFunction(0x20A390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B590u; }
        if (ctx->pc != 0x20B590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_20a390_0x20a498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B590u; }
        if (ctx->pc != 0x20B590u) { return; }
    }
    ctx->pc = 0x20B590u;
    // 0x20b590: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x20b590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20b594: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20b594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b598: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x20B598u;
    {
        const bool branch_taken_0x20b598 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x20B59Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B598u;
            // 0x20b59c: 0x64182a  slt         $v1, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b598) {
            ctx->pc = 0x20B5D0u;
            goto label_20b5d0;
        }
    }
    ctx->pc = 0x20B5A0u;
    // 0x20b5a0: 0x2482001f  addiu       $v0, $a0, 0x1F
    ctx->pc = 0x20b5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x20b5a4: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x20b5a4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x20b5a8: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x20b5a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x20b5ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20b5acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b5b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20b5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20b5b4: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x20b5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x20b5b8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x20b5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x20b5bc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x20b5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20b5c0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20b5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20b5c4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20B5C4u;
    {
        const bool branch_taken_0x20b5c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B5C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B5C4u;
            // 0x20b5c8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b5c4) {
            ctx->pc = 0x20B5ECu;
            goto label_20b5ec;
        }
    }
    ctx->pc = 0x20B5CCu;
    // 0x20b5cc: 0x0  nop
    ctx->pc = 0x20b5ccu;
    // NOP
label_20b5d0:
    // 0x20b5d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20b5d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b5d4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x20b5d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x20b5d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20b5d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b5dc: 0xc082d04  jal         func_20B410
    ctx->pc = 0x20B5DCu;
    SET_GPR_U32(ctx, 31, 0x20B5E4u);
    ctx->pc = 0x20B5E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20B5DCu;
            // 0x20b5e0: 0x26660001  addiu       $a2, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20B410u;
    runtime->cooperativeGuestYield();
    goto label_20b410;
    ctx->pc = 0x20B5E4u;
label_20b5e4:
    // 0x20b5e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20b5e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b5e8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x20b5e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20b5ec:
    // 0x20b5ec: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x20b5ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x20b5f0: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x20b5f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x20b5f4: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x20b5f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20b5f8: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x20b5f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20b5fc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x20b5fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20b600: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x20b600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x20b604: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x20b604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20b608: 0x3e00008  jr          $ra
    ctx->pc = 0x20B608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B60Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B608u;
            // 0x20b60c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20B410u: goto label_20b410;
            case 0x20B4B8u: goto label_20b4b8;
            case 0x20B4BCu: goto label_20b4bc;
            case 0x20B4C8u: goto label_20b4c8;
            case 0x20B4DCu: goto label_20b4dc;
            case 0x20B5D0u: goto label_20b5d0;
            case 0x20B5E4u: goto label_20b5e4;
            case 0x20B5ECu: goto label_20b5ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20B610u;
}
