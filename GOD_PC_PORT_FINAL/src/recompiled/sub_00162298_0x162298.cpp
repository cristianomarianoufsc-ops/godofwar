#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00162298
// Address: 0x162298 - 0x1623d8
void sub_00162298_0x162298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162298_0x162298");
#endif

    ctx->pc = 0x162298u;

    // 0x162298: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x162298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x16229c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x16229cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1622a0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1622a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1622a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1622a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1622a8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1622a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1622ac: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1622acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1622b0: 0xc04f824  jal         func_13E090
    ctx->pc = 0x1622B0u;
    SET_GPR_U32(ctx, 31, 0x1622B8u);
    ctx->pc = 0x1622B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1622B0u;
            // 0x1622b4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1622B8u; }
        if (ctx->pc != 0x1622B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1622B8u; }
        if (ctx->pc != 0x1622B8u) { return; }
    }
    ctx->pc = 0x1622B8u;
    // 0x1622b8: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x1622b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x1622bc: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1622bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1622c0: 0x2463f970  addiu       $v1, $v1, -0x690
    ctx->pc = 0x1622c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965616));
    // 0x1622c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1622c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1622c8: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x1622c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x1622cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1622ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1622d0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1622d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1622d4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1622d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1622d8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1622d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1622dc: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1622dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1622e0: 0xc0540d0  jal         func_150340
    ctx->pc = 0x1622E0u;
    SET_GPR_U32(ctx, 31, 0x1622E8u);
    ctx->pc = 0x1622E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1622E0u;
            // 0x1622e4: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x150340u;
    if (runtime->hasFunction(0x150340u)) {
        auto targetFn = runtime->lookupFunction(0x150340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1622E8u; }
        if (ctx->pc != 0x1622E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00150340_0x150340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1622E8u; }
        if (ctx->pc != 0x1622E8u) { return; }
    }
    ctx->pc = 0x1622E8u;
    // 0x1622e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1622e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1622ec: 0xc08ec42  jal         func_23B108
    ctx->pc = 0x1622ECu;
    SET_GPR_U32(ctx, 31, 0x1622F4u);
    ctx->pc = 0x1622F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1622ECu;
            // 0x1622f0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B108u;
    if (runtime->hasFunction(0x23B108u)) {
        auto targetFn = runtime->lookupFunction(0x23B108u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1622F4u; }
        if (ctx->pc != 0x1622F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023B108_0x23b108(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1622F4u; }
        if (ctx->pc != 0x1622F4u) { return; }
    }
    ctx->pc = 0x1622F4u;
    // 0x1622f4: 0xc090572  jal         func_2415C8
    ctx->pc = 0x1622F4u;
    SET_GPR_U32(ctx, 31, 0x1622FCu);
    ctx->pc = 0x1622F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1622F4u;
            // 0x1622f8: 0x264400f0  addiu       $a0, $s2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2415C8u;
    if (runtime->hasFunction(0x2415C8u)) {
        auto targetFn = runtime->lookupFunction(0x2415C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1622FCu; }
        if (ctx->pc != 0x1622FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2415c8_0x2415d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1622FCu; }
        if (ctx->pc != 0x1622FCu) { return; }
    }
    ctx->pc = 0x1622FCu;
    // 0x1622fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1622fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162300: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x162300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x162304: 0x27a60024  addiu       $a2, $sp, 0x24
    ctx->pc = 0x162304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x162308: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x162308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x16230c: 0xc05888e  jal         func_162238
    ctx->pc = 0x16230Cu;
    SET_GPR_U32(ctx, 31, 0x162314u);
    ctx->pc = 0x162310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16230Cu;
            // 0x162310: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x162238u;
    if (runtime->hasFunction(0x162238u)) {
        auto targetFn = runtime->lookupFunction(0x162238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162314u; }
        if (ctx->pc != 0x162314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_162238_0x162298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162314u; }
        if (ctx->pc != 0x162314u) { return; }
    }
    ctx->pc = 0x162314u;
    // 0x162314: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x162314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162318: 0x241100f4  addiu       $s1, $zero, 0xF4
    ctx->pc = 0x162318u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
    // 0x16231c: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x16231Cu;
    {
        const bool branch_taken_0x16231c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x16231c) {
            ctx->pc = 0x162320u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16231Cu;
            // 0x162320: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x162324u;
            goto label_162324;
        }
    }
    ctx->pc = 0x162324u;
label_162324:
    // 0x162324: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x162324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162328: 0x28040  sll         $s0, $v0, 1
    ctx->pc = 0x162328u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x16232c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x16232cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x162330: 0x211001a  div         $zero, $s0, $s1
    ctx->pc = 0x162330u;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x162334: 0x8812  mflo        $s1
    ctx->pc = 0x162334u;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x162338: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x162338u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x16233c: 0x211001a  div         $zero, $s0, $s1
    ctx->pc = 0x16233cu;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x162340: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x162340u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162344: 0x8012  mflo        $s0
    ctx->pc = 0x162344u;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x162348: 0xc058828  jal         func_1620A0
    ctx->pc = 0x162348u;
    SET_GPR_U32(ctx, 31, 0x162350u);
    ctx->pc = 0x16234Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162348u;
            // 0x16234c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1620A0u;
    if (runtime->hasFunction(0x1620A0u)) {
        auto targetFn = runtime->lookupFunction(0x1620A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162350u; }
        if (ctx->pc != 0x162350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001620A0_0x1620a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162350u; }
        if (ctx->pc != 0x162350u) { return; }
    }
    ctx->pc = 0x162350u;
    // 0x162350: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x162350u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x162354: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x162354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x162358: 0xc4604a50  lwc1        $f0, 0x4A50($v1)
    ctx->pc = 0x162358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 19024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16235c: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x16235cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x162360: 0xae500118  sw          $s0, 0x118($s2)
    ctx->pc = 0x162360u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 280), GPR_U32(ctx, 16));
    // 0x162364: 0xae430114  sw          $v1, 0x114($s2)
    ctx->pc = 0x162364u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 276), GPR_U32(ctx, 3));
    // 0x162368: 0xae51011c  sw          $s1, 0x11C($s2)
    ctx->pc = 0x162368u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 284), GPR_U32(ctx, 17));
    // 0x16236c: 0xe6400140  swc1        $f0, 0x140($s2)
    ctx->pc = 0x16236cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 320), bits); }
    // 0x162370: 0xae440148  sw          $a0, 0x148($s2)
    ctx->pc = 0x162370u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 328), GPR_U32(ctx, 4));
    // 0x162374: 0xae420110  sw          $v0, 0x110($s2)
    ctx->pc = 0x162374u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 272), GPR_U32(ctx, 2));
    // 0x162378: 0xae400130  sw          $zero, 0x130($s2)
    ctx->pc = 0x162378u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 304), GPR_U32(ctx, 0));
    // 0x16237c: 0xae40014c  sw          $zero, 0x14C($s2)
    ctx->pc = 0x16237cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 332), GPR_U32(ctx, 0));
    // 0x162380: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x162380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x162384: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x162384u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x162388: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x162388u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16238c: 0x4b020840  vaddx.x     $vf1, $vf1, $vf2x
    ctx->pc = 0x16238cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x162390: 0x3c014019  lui         $at, 0x4019
    ctx->pc = 0x162390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16409 << 16));
    // 0x162394: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x162394u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x162398: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x162398u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16239c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x16239cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1623a0: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x1623a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
    // 0x1623a4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1623a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1623a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1623a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1623ac: 0xfa4100e0  sqc2        $vf1, 0xE0($s2)
    ctx->pc = 0x1623acu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1623b0: 0xe6410150  swc1        $f1, 0x150($s2)
    ctx->pc = 0x1623b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 336), bits); }
    // 0x1623b4: 0xe6400154  swc1        $f0, 0x154($s2)
    ctx->pc = 0x1623b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 340), bits); }
    // 0x1623b8: 0xae400144  sw          $zero, 0x144($s2)
    ctx->pc = 0x1623b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 324), GPR_U32(ctx, 0));
    // 0x1623bc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1623bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1623c0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1623c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1623c4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1623c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1623c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1623c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1623cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1623CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1623D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1623CCu;
            // 0x1623d0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x162324u: goto label_162324;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1623D4u;
    // 0x1623d4: 0x0  nop
    ctx->pc = 0x1623d4u;
    // NOP
}
