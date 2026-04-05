#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001244B8
// Address: 0x1244b8 - 0x124810
void sub_001244B8_0x1244b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001244B8_0x1244b8");
#endif

    ctx->pc = 0x1244b8u;

    // 0x1244b8: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x1244b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x1244bc: 0x7fb00160  sq          $s0, 0x160($sp)
    ctx->pc = 0x1244bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 16));
    // 0x1244c0: 0x7fb10150  sq          $s1, 0x150($sp)
    ctx->pc = 0x1244c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 17));
    // 0x1244c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1244c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1244c8: 0x7fb20140  sq          $s2, 0x140($sp)
    ctx->pc = 0x1244c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 18));
    // 0x1244cc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1244ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1244d0: 0xe7b70188  swc1        $f23, 0x188($sp)
    ctx->pc = 0x1244d0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x1244d4: 0xe7b60180  swc1        $f22, 0x180($sp)
    ctx->pc = 0x1244d4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x1244d8: 0xe7b50178  swc1        $f21, 0x178($sp)
    ctx->pc = 0x1244d8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x1244dc: 0xe7b40170  swc1        $f20, 0x170($sp)
    ctx->pc = 0x1244dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x1244e0: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x1244e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x1244e4: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x1244E4u;
    SET_GPR_U32(ctx, 31, 0x1244ECu);
    ctx->pc = 0x1244E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1244E4u;
            // 0x1244e8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1244ECu; }
        if (ctx->pc != 0x1244ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1244ECu; }
        if (ctx->pc != 0x1244ECu) { return; }
    }
    ctx->pc = 0x1244ECu;
    // 0x1244ec: 0x3c013000  lui         $at, 0x3000
    ctx->pc = 0x1244ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12288 << 16));
    // 0x1244f0: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x1244f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x1244f4: 0x4482b000  mtc1        $v0, $f22
    ctx->pc = 0x1244f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1244f8: 0x4680b5a0  cvt.s.w     $f22, $f22
    ctx->pc = 0x1244f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[22], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
    // 0x1244fc: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x1244fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x124500: 0x4617b582  mul.s       $f22, $f22, $f23
    ctx->pc = 0x124500u;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[23]);
    // 0x124504: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x124504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x124508: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x124508u;
    SET_GPR_U32(ctx, 31, 0x124510u);
    ctx->pc = 0x12450Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124508u;
            // 0x12450c: 0x4600b582  mul.s       $f22, $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124510u; }
        if (ctx->pc != 0x124510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124510u; }
        if (ctx->pc != 0x124510u) { return; }
    }
    ctx->pc = 0x124510u;
    // 0x124510: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x124510u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x124514: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x124514u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x124518: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x124518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x12451c: 0x4617ad42  mul.s       $f21, $f21, $f23
    ctx->pc = 0x12451cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[23]);
    // 0x124520: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x124520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x124524: 0x46150544  c1          0x150544
    ctx->pc = 0x124524u;
    ctx->f[21] = FPU_SQRT_S(ctx->f[0]);
    // 0x124528: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x124528u;
    SET_GPR_U32(ctx, 31, 0x124530u);
    ctx->pc = 0x12452Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124528u;
            // 0x12452c: 0x4600ad42  mul.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124530u; }
        if (ctx->pc != 0x124530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124530u; }
        if (ctx->pc != 0x124530u) { return; }
    }
    ctx->pc = 0x124530u;
    // 0x124530: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x124530u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x124534: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x124534u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x124538: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x124538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x12453c: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x12453cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x124540: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x124540u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x124544: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x124544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x124548: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x124548u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x12454c: 0x4617a502  mul.s       $f20, $f20, $f23
    ctx->pc = 0x12454cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[23]);
    // 0x124550: 0x4614a500  add.s       $f20, $f20, $f20
    ctx->pc = 0x124550u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
    // 0x124554: 0xc060ee2  jal         func_183B88
    ctx->pc = 0x124554u;
    SET_GPR_U32(ctx, 31, 0x12455Cu);
    ctx->pc = 0x124558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124554u;
            // 0x124558: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x183B88u;
    if (runtime->hasFunction(0x183B88u)) {
        auto targetFn = runtime->lookupFunction(0x183B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12455Cu; }
        if (ctx->pc != 0x12455Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183B88_0x183b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12455Cu; }
        if (ctx->pc != 0x12455Cu) { return; }
    }
    ctx->pc = 0x12455Cu;
    // 0x12455c: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x12455cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x124560: 0x27a40084  addiu       $a0, $sp, 0x84
    ctx->pc = 0x124560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x124564: 0xc060ee2  jal         func_183B88
    ctx->pc = 0x124564u;
    SET_GPR_U32(ctx, 31, 0x12456Cu);
    ctx->pc = 0x124568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124564u;
            // 0x124568: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x183B88u;
    if (runtime->hasFunction(0x183B88u)) {
        auto targetFn = runtime->lookupFunction(0x183B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12456Cu; }
        if (ctx->pc != 0x12456Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183B88_0x183b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12456Cu; }
        if (ctx->pc != 0x12456Cu) { return; }
    }
    ctx->pc = 0x12456Cu;
    // 0x12456c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x12456cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x124570: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x124570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x124574: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x124574u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x124578: 0xc7a30080  lwc1        $f3, 0x80($sp)
    ctx->pc = 0x124578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12457c: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x12457cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x124580: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x124580u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x124584: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x124584u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
    // 0x124588: 0x4600b042  mul.s       $f1, $f22, $f0
    ctx->pc = 0x124588u;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x12458c: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x12458cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x124590: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x124590u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x124594: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x124594u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x124598: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x124598u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x12459c: 0x70661389  pcpyld      $v0, $v1, $a2
    ctx->pc = 0x12459cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
    // 0x1245a0: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x1245a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1245a4: 0x70e81b89  pcpyld      $v1, $a3, $t0
    ctx->pc = 0x1245a4u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x1245a8: 0x70621cc8  ppacw       $v1, $v1, $v0
    ctx->pc = 0x1245a8u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1245ac: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x1245acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x1245b0: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x1245b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
    // 0x1245b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1245b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1245b8: 0x44071800  mfc1        $a3, $f3
    ctx->pc = 0x1245b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1245bc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1245bcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1245c0: 0x70472389  pcpyld      $a0, $v0, $a3
    ctx->pc = 0x1245c0u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x1245c4: 0x4408b000  mfc1        $t0, $f22
    ctx->pc = 0x1245c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1245c8: 0x70481389  pcpyld      $v0, $v0, $t0
    ctx->pc = 0x1245c8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x1245cc: 0x70442cc8  ppacw       $a1, $v0, $a0
    ctx->pc = 0x1245ccu;
    SET_GPR_VEC(ctx, 5, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x1245d0: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x1245d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1245d4: 0x4be111ac  vsub.xyzw   $vf6, $vf2, $vf1
    ctx->pc = 0x1245d4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1245d8: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1245d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1245dc: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x1245dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1245e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1245e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1245e4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1245e4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1245e8: 0x4be000ec  vsub.xyzw   $vf3, $vf0, $vf0
    ctx->pc = 0x1245e8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1245ec: 0x4a8218c0  vaddx.y     $vf3, $vf3, $vf2x
    ctx->pc = 0x1245ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1245f0: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1245f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1245f4: 0x4bc11afe  vopmula.xyz $ACC, $vf3, $vf1
    ctx->pc = 0x1245f4u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]);
    // 0x1245f8: 0x4bc308ee  vopmsub.xyz $vf3, $vf1, $vf3
    ctx->pc = 0x1245f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1245fc: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x1245fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x124600: 0x4a2318ec  vsub.w      $vf3, $vf3, $vf3
    ctx->pc = 0x124600u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x124604: 0xfba300d0  sqc2        $vf3, 0xD0($sp)
    ctx->pc = 0x124604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x124608: 0x4be630aa  vmul.xyzw   $vf2, $vf6, $vf6
    ctx->pc = 0x124608u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12460c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x12460cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x124610: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x124610u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x124614: 0x4be4333c  vmove.xyzw  $vf4, $vf6
    ctx->pc = 0x124614u;
    ctx->vu0_vf[4] = ctx->vu0_vf[6];
    // 0x124618: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x124618u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x12461c: 0x4a0003bf  vwaitq
    ctx->pc = 0x12461cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x124620: 0x4bc0211c  vmulq.xyz   $vf4, $vf4, $Q
    ctx->pc = 0x124620u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x124624: 0x4a0002ff  vnop
    ctx->pc = 0x124624u;
    // NOP operation, no action needed for VU0
    // 0x124628: 0x4a0002ff  vnop
    ctx->pc = 0x124628u;
    // NOP operation, no action needed for VU0
    // 0x12462c: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x12462cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x124630: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x124630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x124634: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x124634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x124638: 0x8c640044  lw          $a0, 0x44($v1)
    ctx->pc = 0x124638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x12463c: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x12463cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x124640: 0x4be12118  vmulx.xyzw  $vf4, $vf4, $vf1x
    ctx->pc = 0x124640u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x124644: 0x8c650048  lw          $a1, 0x48($v1)
    ctx->pc = 0x124644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x124648: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x124648u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x12464c: 0x4be11858  vmulx.xyzw  $vf1, $vf3, $vf1x
    ctx->pc = 0x12464cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x124650: 0x4be12128  vadd.xyzw   $vf4, $vf4, $vf1
    ctx->pc = 0x124650u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x124654: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x124654u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x124658: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x124658u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12465c: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x12465cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x124660: 0x8c680008  lw          $t0, 0x8($v1)
    ctx->pc = 0x124660u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x124664: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x124664u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124668: 0x70e81389  pcpyld      $v0, $a3, $t0
    ctx->pc = 0x124668u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x12466c: 0x70442cc8  ppacw       $a1, $v0, $a0
    ctx->pc = 0x12466cu;
    SET_GPR_VEC(ctx, 5, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x124670: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x124670u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x124674: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x124674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x124678: 0x4be2116a  vmul.xyzw   $vf5, $vf2, $vf2
    ctx->pc = 0x124678u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12467c: 0xfba200e0  sqc2        $vf2, 0xE0($sp)
    ctx->pc = 0x12467cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x124680: 0x4b052841  vaddy.x     $vf1, $vf5, $vf5y
    ctx->pc = 0x124680u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x124684: 0x4b050842  vaddz.x     $vf1, $vf1, $vf5z
    ctx->pc = 0x124684u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x124688: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x124688u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x12468c: 0x4a0003bf  vwaitq
    ctx->pc = 0x12468cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x124690: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x124690u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x124694: 0x4a0002ff  vnop
    ctx->pc = 0x124694u;
    // NOP operation, no action needed for VU0
    // 0x124698: 0x4a0002ff  vnop
    ctx->pc = 0x124698u;
    // NOP operation, no action needed for VU0
    // 0x12469c: 0xfba200f0  sqc2        $vf2, 0xF0($sp)
    ctx->pc = 0x12469cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1246a0: 0xfba20050  sqc2        $vf2, 0x50($sp)
    ctx->pc = 0x1246a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1246a4: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x1246a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x1246a8: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x1246a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1246ac: 0xfba200e0  sqc2        $vf2, 0xE0($sp)
    ctx->pc = 0x1246acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1246b0: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x1246b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1246b4: 0x4be22128  vadd.xyzw   $vf4, $vf4, $vf2
    ctx->pc = 0x1246b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1246b8: 0x4bc61afe  vopmula.xyz $ACC, $vf3, $vf6
    ctx->pc = 0x1246b8u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[6]);
    // 0x1246bc: 0x4bc330ee  vopmsub.xyz $vf3, $vf6, $vf3
    ctx->pc = 0x1246bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1246c0: 0x4a2318ec  vsub.w      $vf3, $vf3, $vf3
    ctx->pc = 0x1246c0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1246c4: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x1246c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1246c8: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1246c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1246cc: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1246ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1246d0: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1246d0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1246d4: 0x4a0003bf  vwaitq
    ctx->pc = 0x1246d4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1246d8: 0x4bc018dc  vmulq.xyz   $vf3, $vf3, $Q
    ctx->pc = 0x1246d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1246dc: 0x4a0002ff  vnop
    ctx->pc = 0x1246dcu;
    // NOP operation, no action needed for VU0
    // 0x1246e0: 0x4a0002ff  vnop
    ctx->pc = 0x1246e0u;
    // NOP operation, no action needed for VU0
    // 0x1246e4: 0xfba30100  sqc2        $vf3, 0x100($sp)
    ctx->pc = 0x1246e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1246e8: 0x8c63004c  lw          $v1, 0x4C($v1)
    ctx->pc = 0x1246e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x1246ec: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1246ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1246f0: 0xfba30060  sqc2        $vf3, 0x60($sp)
    ctx->pc = 0x1246f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1246f4: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x1246f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1246f8: 0x4be32128  vadd.xyzw   $vf4, $vf4, $vf3
    ctx->pc = 0x1246f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1246fc: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x1246FCu;
    SET_GPR_U32(ctx, 31, 0x124704u);
    ctx->pc = 0x124700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1246FCu;
            // 0x124700: 0xfba40120  sqc2        $vf4, 0x120($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124704u; }
        if (ctx->pc != 0x124704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124704u; }
        if (ctx->pc != 0x124704u) { return; }
    }
    ctx->pc = 0x124704u;
    // 0x124704: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x124704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x124708: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x124708u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x12470c: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x12470cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x124710: 0x4617ad42  mul.s       $f21, $f21, $f23
    ctx->pc = 0x124710u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[23]);
    // 0x124714: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x124714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x124718: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x124718u;
    SET_GPR_U32(ctx, 31, 0x124720u);
    ctx->pc = 0x12471Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124718u;
            // 0x12471c: 0x4600ad42  mul.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124720u; }
        if (ctx->pc != 0x124720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124720u; }
        if (ctx->pc != 0x124720u) { return; }
    }
    ctx->pc = 0x124720u;
    // 0x124720: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x124720u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x124724: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x124724u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x124728: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x124728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x12472c: 0x4617a502  mul.s       $f20, $f20, $f23
    ctx->pc = 0x12472cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[23]);
    // 0x124730: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x124730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x124734: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x124734u;
    SET_GPR_U32(ctx, 31, 0x12473Cu);
    ctx->pc = 0x124738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124734u;
            // 0x124738: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12473Cu; }
        if (ctx->pc != 0x12473Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12473Cu; }
        if (ctx->pc != 0x12473Cu) { return; }
    }
    ctx->pc = 0x12473Cu;
    // 0x12473c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12473cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x124740: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x124740u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x124744: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x124744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x124748: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x124748u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x12474c: 0xc4410050  lwc1        $f1, 0x50($v0)
    ctx->pc = 0x12474cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x124750: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x124750u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x124754: 0x4407a000  mfc1        $a3, $f20
    ctx->pc = 0x124754u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x124758: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x124758u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12475c: 0x4408a800  mfc1        $t0, $f21
    ctx->pc = 0x12475cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x124760: 0x70e81b89  pcpyld      $v1, $a3, $t0
    ctx->pc = 0x124760u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x124764: 0xdba40120  lqc2        $vf4, 0x120($sp)
    ctx->pc = 0x124764u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x124768: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x124768u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x12476c: 0x70c71389  pcpyld      $v0, $a2, $a3
    ctx->pc = 0x12476cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 7)));
    // 0x124770: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x124770u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x124774: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x124774u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x124778: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x124778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x12477c: 0x4be12128  vadd.xyzw   $vf4, $vf4, $vf1
    ctx->pc = 0x12477cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x124780: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x124780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x124784: 0x4a24212c  vsub.w      $vf4, $vf4, $vf4
    ctx->pc = 0x124784u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x124788: 0xdba20090  lqc2        $vf2, 0x90($sp)
    ctx->pc = 0x124788u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12478c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x12478cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x124790: 0x8c42bde8  lw          $v0, -0x4218($v0)
    ctx->pc = 0x124790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950376)));
    // 0x124794: 0xd84100c0  lqc2        $vf1, 0xC0($v0)
    ctx->pc = 0x124794u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x124798: 0x244300c0  addiu       $v1, $v0, 0xC0
    ctx->pc = 0x124798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x12479c: 0x4be209bc  vmulax.xyzw $ACC, $vf1, $vf2x
    ctx->pc = 0x12479cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1247a0: 0xd8610010  lqc2        $vf1, 0x10($v1)
    ctx->pc = 0x1247a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1247a4: 0x4be208bd  vmadday.xyzw $ACC, $vf1, $vf2y
    ctx->pc = 0x1247a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1247a8: 0xd8610020  lqc2        $vf1, 0x20($v1)
    ctx->pc = 0x1247a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1247ac: 0x4be208be  vmaddaz.xyzw $ACC, $vf1, $vf2z
    ctx->pc = 0x1247acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1247b0: 0xd8610030  lqc2        $vf1, 0x30($v1)
    ctx->pc = 0x1247b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1247b4: 0x4be2084b  vmaddw.xyzw $vf1, $vf1, $vf2w
    ctx->pc = 0x1247b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1247b8: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1247b8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1247bc: 0xd8410100  lqc2        $vf1, 0x100($v0)
    ctx->pc = 0x1247bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x1247c0: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x1247c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x1247c4: 0x4be409bc  vmulax.xyzw $ACC, $vf1, $vf4x
    ctx->pc = 0x1247c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1247c8: 0xd8410010  lqc2        $vf1, 0x10($v0)
    ctx->pc = 0x1247c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1247cc: 0x4be408bd  vmadday.xyzw $ACC, $vf1, $vf4y
    ctx->pc = 0x1247ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1247d0: 0xd8410020  lqc2        $vf1, 0x20($v0)
    ctx->pc = 0x1247d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1247d4: 0x4be408be  vmaddaz.xyzw $ACC, $vf1, $vf4z
    ctx->pc = 0x1247d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1247d8: 0xd8410030  lqc2        $vf1, 0x30($v0)
    ctx->pc = 0x1247d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1247dc: 0x4be4084b  vmaddw.xyzw $vf1, $vf1, $vf4w
    ctx->pc = 0x1247dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1247e0: 0xfa410000  sqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1247e0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1247e4: 0x7bb00160  lq          $s0, 0x160($sp)
    ctx->pc = 0x1247e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1247e8: 0x7bb10150  lq          $s1, 0x150($sp)
    ctx->pc = 0x1247e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1247ec: 0x7bb20140  lq          $s2, 0x140($sp)
    ctx->pc = 0x1247ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1247f0: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x1247f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1247f4: 0xc7b70188  lwc1        $f23, 0x188($sp)
    ctx->pc = 0x1247f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1247f8: 0xc7b60180  lwc1        $f22, 0x180($sp)
    ctx->pc = 0x1247f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1247fc: 0xc7b50178  lwc1        $f21, 0x178($sp)
    ctx->pc = 0x1247fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x124800: 0xc7b40170  lwc1        $f20, 0x170($sp)
    ctx->pc = 0x124800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x124804: 0x3e00008  jr          $ra
    ctx->pc = 0x124804u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124804u;
            // 0x124808: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12480Cu;
    // 0x12480c: 0x0  nop
    ctx->pc = 0x12480cu;
    // NOP
}
