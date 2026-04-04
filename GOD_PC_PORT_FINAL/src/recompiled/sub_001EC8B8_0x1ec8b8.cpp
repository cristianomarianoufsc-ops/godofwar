#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EC8B8
// Address: 0x1ec8b8 - 0x1ecc38
void sub_001EC8B8_0x1ec8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EC8B8_0x1ec8b8");
#endif

    ctx->pc = 0x1ec8b8u;

    // 0x1ec8b8: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1ec8b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x1ec8bc: 0x3c020903  lui         $v0, 0x903
    ctx->pc = 0x1ec8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2307 << 16));
    // 0x1ec8c0: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x1ec8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x1ec8c4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x1ec8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x1ec8c8: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x1ec8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x1ec8cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ec8ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec8d0: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x1ec8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x1ec8d4: 0x3c040430  lui         $a0, 0x430
    ctx->pc = 0x1ec8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1072 << 16));
    // 0x1ec8d8: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x1ec8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x1ec8dc: 0x34420042  ori         $v0, $v0, 0x42
    ctx->pc = 0x1ec8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)66);
    // 0x1ec8e0: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x1ec8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x1ec8e4: 0x34631ff3  ori         $v1, $v1, 0x1FF3
    ctx->pc = 0x1ec8e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8179);
    // 0x1ec8e8: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x1ec8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x1ec8ec: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x1ec8ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x1ec8f0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1ec8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1ec8f4: 0x3c15002a  lui         $s5, 0x2A
    ctx->pc = 0x1ec8f4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)42 << 16));
    // 0x1ec8f8: 0x3c014200  lui         $at, 0x4200
    ctx->pc = 0x1ec8f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16896 << 16));
    // 0x1ec8fc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ec8fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ec900: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1ec900u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec904: 0x8e260258  lw          $a2, 0x258($s1)
    ctx->pc = 0x1ec904u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
    // 0x1ec908: 0x8e280254  lw          $t0, 0x254($s1)
    ctx->pc = 0x1ec908u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x1ec90c: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x1ec90cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x1ec910: 0x8e290000  lw          $t1, 0x0($s1)
    ctx->pc = 0x1ec910u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ec914: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1ec914u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x1ec918: 0x681827  nor         $v1, $v1, $t0
    ctx->pc = 0x1ec918u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 8)));
    // 0x1ec91c: 0x24e2f170  addiu       $v0, $a3, -0xE90
    ctx->pc = 0x1ec91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963568));
    // 0x1ec920: 0x7fa50060  sq          $a1, 0x60($sp)
    ctx->pc = 0x1ec920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 5));
    // 0x1ec924: 0x8ea4bcf8  lw          $a0, -0x4308($s5)
    ctx->pc = 0x1ec924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294950136)));
    // 0x1ec928: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1ec928u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ec92c: 0xace3f170  sw          $v1, -0xE90($a3)
    ctx->pc = 0x1ec92cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294963568), GPR_U32(ctx, 3));
    // 0x1ec930: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x1ec930u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x1ec934: 0xac48000c  sw          $t0, 0xC($v0)
    ctx->pc = 0x1ec934u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 8));
    // 0x1ec938: 0xac490014  sw          $t1, 0x14($v0)
    ctx->pc = 0x1ec938u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 9));
    // 0x1ec93c: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1ec93cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x1ec940: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1ec940u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1ec944: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1ec944u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1ec948: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1ec948u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1ec94c: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x1ec94cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x1ec950: 0xc047ada  jal         func_11EB68
    ctx->pc = 0x1EC950u;
    SET_GPR_U32(ctx, 31, 0x1EC958u);
    ctx->pc = 0x1EC954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC950u;
            // 0x1ec954: 0xac400020  sw          $zero, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EB68u;
    if (runtime->hasFunction(0x11EB68u)) {
        auto targetFn = runtime->lookupFunction(0x11EB68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC958u; }
        if (ctx->pc != 0x1EC958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EB68_0x11eb68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC958u; }
        if (ctx->pc != 0x1EC958u) { return; }
    }
    ctx->pc = 0x1EC958u;
    // 0x1ec958: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1ec958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ec95c: 0x8c520104  lw          $s2, 0x104($v0)
    ctx->pc = 0x1ec95cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x1ec960: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x1ec960u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x1ec964: 0x0  nop
    ctx->pc = 0x1ec964u;
    // NOP
label_1ec968:
    // 0x1ec968: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ec968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ec96c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1ec96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1ec970: 0x84530344  lh          $s3, 0x344($v0)
    ctx->pc = 0x1ec970u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1ec974: 0x1263009d  beq         $s3, $v1, . + 4 + (0x9D << 2)
    ctx->pc = 0x1EC974u;
    {
        const bool branch_taken_0x1ec974 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x1EC978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC974u;
            // 0x1ec978: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec974) {
            ctx->pc = 0x1ECBECu;
            goto label_1ecbec;
        }
    }
    ctx->pc = 0x1EC97Cu;
    // 0x1ec97c: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1ec97cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1ec980: 0xde420040  ld          $v0, 0x40($s2)
    ctx->pc = 0x1ec980u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x1ec984: 0x10450004  beq         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC984u;
    {
        const bool branch_taken_0x1ec984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1EC988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC984u;
            // 0x1ec988: 0x26700002  addiu       $s0, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec984) {
            ctx->pc = 0x1EC998u;
            goto label_1ec998;
        }
    }
    ctx->pc = 0x1EC98Cu;
    // 0x1ec98c: 0xc04da64  jal         func_136990
    ctx->pc = 0x1EC98Cu;
    SET_GPR_U32(ctx, 31, 0x1EC994u);
    ctx->pc = 0x1EC990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC98Cu;
            // 0x1ec990: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC994u; }
        if (ctx->pc != 0x1EC994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC994u; }
        if (ctx->pc != 0x1EC994u) { return; }
    }
    ctx->pc = 0x1EC994u;
    // 0x1ec994: 0x0  nop
    ctx->pc = 0x1ec994u;
    // NOP
label_1ec998:
    // 0x1ec998: 0x8e42008c  lw          $v0, 0x8C($s2)
    ctx->pc = 0x1ec998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x1ec99c: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x1ec99cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1ec9a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ec9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ec9a4: 0xd8430030  lqc2        $vf3, 0x30($v0)
    ctx->pc = 0x1ec9a4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ec9a8: 0xdba10060  lqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1ec9a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ec9ac: 0x4b011884  vsubx.x     $vf2, $vf3, $vf1x
    ctx->pc = 0x1ec9acu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ec9b0: 0x4a411846  vsubz.z     $vf1, $vf3, $vf1z
    ctx->pc = 0x1ec9b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ec9b4: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x1ec9b4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ec9b8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1ec9b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec9bc: 0x4b010042  vaddz.x     $vf1, $vf0, $vf1z
    ctx->pc = 0x1ec9bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ec9c0: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1ec9c0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ec9c4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1ec9c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec9c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ec9c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec9cc: 0x70e22389  pcpyld      $a0, $a3, $v0
    ctx->pc = 0x1ec9ccu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 2)));
    // 0x1ec9d0: 0x70e31389  pcpyld      $v0, $a3, $v1
    ctx->pc = 0x1ec9d0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 3)));
    // 0x1ec9d4: 0x70441cc8  ppacw       $v1, $v0, $a0
    ctx->pc = 0x1ec9d4u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x1ec9d8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1ec9d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1ec9dc: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1ec9dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ec9e0: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1ec9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ec9e4: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1ec9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ec9e8: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1ec9e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ec9ec: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1ec9ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ec9f0: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x1ec9f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x1ec9f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ec9f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ec9f8: 0x48270800  qmfc2.ni    $a3, $vf1
    ctx->pc = 0x1ec9f8u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ec9fc: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x1ec9fcu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eca00: 0x46000004  c1          0x4
    ctx->pc = 0x1eca00u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1eca04: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x1eca04u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1eca08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1eca08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eca0c: 0x46000868  max.s       $f1, $f1, $f0
    ctx->pc = 0x1eca0cu;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[0]);
    // 0x1eca10: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1eca10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1eca14: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1eca14u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1eca18: 0xdba40060  lqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1eca18u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1eca1c: 0x4a822040  vaddx.y     $vf1, $vf4, $vf2x
    ctx->pc = 0x1eca1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1eca20: 0x4b010041  vaddy.x     $vf1, $vf0, $vf1y
    ctx->pc = 0x1eca20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1eca24: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1eca24u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1eca28: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1eca28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eca2c: 0x4b030042  vaddz.x     $vf1, $vf0, $vf3z
    ctx->pc = 0x1eca2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1eca30: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x1eca30u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1eca34: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1eca34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eca38: 0x70442b89  pcpyld      $a1, $v0, $a0
    ctx->pc = 0x1eca38u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x1eca3c: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x1eca3cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x1eca40: 0x70e31b89  pcpyld      $v1, $a3, $v1
    ctx->pc = 0x1eca40u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 3)));
    // 0x1eca44: 0x70652cc8  ppacw       $a1, $v1, $a1
    ctx->pc = 0x1eca44u;
    SET_GPR_VEC(ctx, 5, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x1eca48: 0x7fa50010  sq          $a1, 0x10($sp)
    ctx->pc = 0x1eca48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 5));
    // 0x1eca4c: 0x7fa50040  sq          $a1, 0x40($sp)
    ctx->pc = 0x1eca4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 5));
    // 0x1eca50: 0x4a822084  vsubx.y     $vf2, $vf4, $vf2x
    ctx->pc = 0x1eca50u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1eca54: 0x4b020041  vaddy.x     $vf1, $vf0, $vf2y
    ctx->pc = 0x1eca54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1eca58: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x1eca58u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1eca5c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1eca5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eca60: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x1eca60u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x1eca64: 0x70621cc8  ppacw       $v1, $v1, $v0
    ctx->pc = 0x1eca64u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1eca68: 0x8ea4bcf8  lw          $a0, -0x4308($s5)
    ctx->pc = 0x1eca68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294950136)));
    // 0x1eca6c: 0xfba30070  sqc2        $vf3, 0x70($sp)
    ctx->pc = 0x1eca6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1eca70: 0x700334a9  por         $a2, $zero, $v1
    ctx->pc = 0x1eca70u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x1eca74: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x1eca74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x1eca78: 0xc047864  jal         func_11E190
    ctx->pc = 0x1ECA78u;
    SET_GPR_U32(ctx, 31, 0x1ECA80u);
    ctx->pc = 0x1ECA7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECA78u;
            // 0x1eca7c: 0x7fa30050  sq          $v1, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E190u;
    if (runtime->hasFunction(0x11E190u)) {
        auto targetFn = runtime->lookupFunction(0x11E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECA80u; }
        if (ctx->pc != 0x1ECA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E190_0x11e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECA80u; }
        if (ctx->pc != 0x1ECA80u) { return; }
    }
    ctx->pc = 0x1ECA80u;
    // 0x1eca80: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x1ECA80u;
    {
        const bool branch_taken_0x1eca80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECA84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECA80u;
            // 0x1eca84: 0xdba30070  lqc2        $vf3, 0x70($sp) (Delay Slot)
        ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eca80) {
            ctx->pc = 0x1ECBECu;
            goto label_1ecbec;
        }
    }
    ctx->pc = 0x1ECA88u;
    // 0x1eca88: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1eca88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1eca8c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1eca8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1eca90: 0x24477790  addiu       $a3, $v0, 0x7790
    ctx->pc = 0x1eca90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 30608));
    // 0x1eca94: 0x8c635e70  lw          $v1, 0x5E70($v1)
    ctx->pc = 0x1eca94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24176)));
    // 0x1eca98: 0x8ce2002c  lw          $v0, 0x2C($a3)
    ctx->pc = 0x1eca98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x1eca9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eca9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ecaa0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ecaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ecaa4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1ecaa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1ecaa8: 0x14400051  bnez        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x1ECAA8u;
    {
        const bool branch_taken_0x1ecaa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ECAACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECAA8u;
            // 0x1ecaac: 0x141080  sll         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecaa8) {
            ctx->pc = 0x1ECBF0u;
            goto label_1ecbf0;
        }
    }
    ctx->pc = 0x1ECAB0u;
    // 0x1ecab0: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x1ecab0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1ecab4: 0xdba20060  lqc2        $vf2, 0x60($sp)
    ctx->pc = 0x1ecab4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ecab8: 0x4a820845  vsuby.y     $vf1, $vf1, $vf2y
    ctx->pc = 0x1ecab8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ecabc: 0x4b010041  vaddy.x     $vf1, $vf0, $vf1y
    ctx->pc = 0x1ecabcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ecac0: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1ecac0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ecac4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ecac4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecac8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1ecac8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1ecacc: 0x4a811840  vaddx.y     $vf1, $vf3, $vf1x
    ctx->pc = 0x1ecaccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ecad0: 0x4be21b3c  vmove.xyzw  $vf2, $vf3
    ctx->pc = 0x1ecad0u;
    ctx->vu0_vf[2] = ctx->vu0_vf[3];
    // 0x1ecad4: 0x78e70010  lq          $a3, 0x10($a3)
    ctx->pc = 0x1ecad4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1ecad8: 0x4a810081  vaddy.y     $vf2, $vf0, $vf1y
    ctx->pc = 0x1ecad8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ecadc: 0x3c013f7f  lui         $at, 0x3F7F
    ctx->pc = 0x1ecadcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16255 << 16));
    // 0x1ecae0: 0x3421be77  ori         $at, $at, 0xBE77
    ctx->pc = 0x1ecae0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48759);
    // 0x1ecae4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ecae4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ecae8: 0x700717c9  prot3w      $v0, $a3
    ctx->pc = 0x1ecae8u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1ecaec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ecaecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ecaf0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1ecaf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ecaf4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1ECAF4u;
    {
        const bool branch_taken_0x1ecaf4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ecaf4) {
            ctx->pc = 0x1ECB10u;
            goto label_1ecb10;
        }
    }
    ctx->pc = 0x1ECAFCu;
    // 0x1ecafc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ecafcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ecb00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ecb00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ecb04: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1ECB04u;
    {
        const bool branch_taken_0x1ecb04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECB08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECB04u;
            // 0x1ecb08: 0x141880  sll         $v1, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecb04) {
            ctx->pc = 0x1ECB50u;
            goto label_1ecb50;
        }
    }
    ctx->pc = 0x1ECB0Cu;
    // 0x1ecb0c: 0x0  nop
    ctx->pc = 0x1ecb0cu;
    // NOP
label_1ecb10:
    // 0x1ecb10: 0x3c013ea3  lui         $at, 0x3EA3
    ctx->pc = 0x1ecb10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16035 << 16));
    // 0x1ecb14: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1ecb14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1ecb18: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ecb18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ecb1c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1ecb1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ecb20: 0x46001005  abs.s       $f0, $f2
    ctx->pc = 0x1ecb20u;
    ctx->f[0] = FPU_ABS_S(ctx->f[2]);
    // 0x1ecb24: 0x3c013fa3  lui         $at, 0x3FA3
    ctx->pc = 0x1ecb24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16291 << 16));
    // 0x1ecb28: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1ecb28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1ecb2c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1ecb2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1ecb30: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ecb30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1ecb34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ecb34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ecb38: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ecb38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ecb3c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1ecb3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ecb40: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x1ecb40u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x1ecb44: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x1ecb44u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x1ecb48: 0x46020029  min.s       $f0, $f0, $f2
    ctx->pc = 0x1ecb48u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[2]);
    // 0x1ecb4c: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x1ecb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_1ecb50:
    // 0x1ecb50: 0x26220348  addiu       $v0, $s1, 0x348
    ctx->pc = 0x1ecb50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 840));
    // 0x1ecb54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ecb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ecb58: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1ecb58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1ecb5c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ecb5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1ecb60: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ecb60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ecb64: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1ecb64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ecb68: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1ecb68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1ecb6c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1ecb6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1ecb70: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1ecb70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1ecb74: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ecb74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1ecb78: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1ecb78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1ecb7c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ecb7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ecb80: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x1ecb80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ecb84: 0x0  nop
    ctx->pc = 0x1ecb84u;
    // NOP
    // 0x1ecb88: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1ECB88u;
    {
        const bool branch_taken_0x1ecb88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1ECB8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECB88u;
            // 0x1ecb8c: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecb88) {
            ctx->pc = 0x1ECB94u;
            goto label_1ecb94;
        }
    }
    ctx->pc = 0x1ECB90u;
    // 0x1ecb90: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1ecb90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1ecb94:
    // 0x1ecb94: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1ecb94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ecb98: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x1ecb98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
    // 0x1ecb9c: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x1ecb9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x1ecba0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ecba0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ecba4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1ecba4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ecba8: 0x0  nop
    ctx->pc = 0x1ecba8u;
    // NOP
    // 0x1ecbac: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1ECBACu;
    {
        const bool branch_taken_0x1ecbac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ecbac) {
            ctx->pc = 0x1ECBB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECBACu;
            // 0x1ecbb0: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ECBC4u;
            goto label_1ecbc4;
        }
    }
    ctx->pc = 0x1ECBB4u;
    // 0x1ecbb4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ecbb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ecbb8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ecbb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ecbbc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1ecbbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1ecbc0: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x1ecbc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1ecbc4:
    // 0x1ecbc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ecbc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ecbc8: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x1ecbc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ecbcc: 0x0  nop
    ctx->pc = 0x1ecbccu;
    // NOP
    // 0x1ecbd0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1ECBD0u;
    {
        const bool branch_taken_0x1ecbd0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1ECBD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECBD0u;
            // 0x1ecbd4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecbd0) {
            ctx->pc = 0x1ECBECu;
            goto label_1ecbec;
        }
    }
    ctx->pc = 0x1ECBD8u;
    // 0x1ecbd8: 0x48261000  qmfc2.ni    $a2, $vf2
    ctx->pc = 0x1ecbd8u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ecbdc: 0xc042546  jal         func_109518
    ctx->pc = 0x1ECBDCu;
    SET_GPR_U32(ctx, 31, 0x1ECBE4u);
    ctx->pc = 0x1ECBE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECBDCu;
            // 0x1ecbe0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109518u;
    if (runtime->hasFunction(0x109518u)) {
        auto targetFn = runtime->lookupFunction(0x109518u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECBE4u; }
        if (ctx->pc != 0x1ECBE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00109518_0x109518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECBE4u; }
        if (ctx->pc != 0x1ECBE4u) { return; }
    }
    ctx->pc = 0x1ECBE4u;
    // 0x1ecbe4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1ECBE4u;
    {
        const bool branch_taken_0x1ecbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECBE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECBE4u;
            // 0x1ecbe8: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecbe4) {
            ctx->pc = 0x1ECBFCu;
            goto label_1ecbfc;
        }
    }
    ctx->pc = 0x1ECBECu;
label_1ecbec:
    // 0x1ecbec: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x1ecbecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_1ecbf0:
    // 0x1ecbf0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1ecbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1ecbf4: 0xac400348  sw          $zero, 0x348($v0)
    ctx->pc = 0x1ecbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 840), GPR_U32(ctx, 0));
    // 0x1ecbf8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1ecbf8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1ecbfc:
    // 0x1ecbfc: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x1ecbfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1ecc00: 0x1440ff59  bnez        $v0, . + 4 + (-0xA7 << 2)
    ctx->pc = 0x1ECC00u;
    {
        const bool branch_taken_0x1ecc00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ECC04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECC00u;
            // 0x1ecc04: 0x141040  sll         $v0, $s4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecc00) {
            ctx->pc = 0x1EC968u;
            runtime->cooperativeGuestYield();
            goto label_1ec968;
        }
    }
    ctx->pc = 0x1ECC08u;
    // 0x1ecc08: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ecc08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ecc0c: 0xc047b18  jal         func_11EC60
    ctx->pc = 0x1ECC0Cu;
    SET_GPR_U32(ctx, 31, 0x1ECC14u);
    ctx->pc = 0x1ECC10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECC0Cu;
            // 0x1ecc10: 0x8c44bcf8  lw          $a0, -0x4308($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EC60u;
    if (runtime->hasFunction(0x11EC60u)) {
        auto targetFn = runtime->lookupFunction(0x11EC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECC14u; }
        if (ctx->pc != 0x1ECC14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EC60_0x11ec60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECC14u; }
        if (ctx->pc != 0x1ECC14u) { return; }
    }
    ctx->pc = 0x1ECC14u;
    // 0x1ecc14: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x1ecc14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1ecc18: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x1ecc18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1ecc1c: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x1ecc1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1ecc20: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x1ecc20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ecc24: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x1ecc24u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ecc28: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x1ecc28u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ecc2c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1ecc2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ecc30: 0x3e00008  jr          $ra
    ctx->pc = 0x1ECC30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECC34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECC30u;
            // 0x1ecc34: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EC968u: goto label_1ec968;
            case 0x1EC998u: goto label_1ec998;
            case 0x1ECB10u: goto label_1ecb10;
            case 0x1ECB50u: goto label_1ecb50;
            case 0x1ECB94u: goto label_1ecb94;
            case 0x1ECBC4u: goto label_1ecbc4;
            case 0x1ECBECu: goto label_1ecbec;
            case 0x1ECBF0u: goto label_1ecbf0;
            case 0x1ECBFCu: goto label_1ecbfc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1ECC38u;
}
