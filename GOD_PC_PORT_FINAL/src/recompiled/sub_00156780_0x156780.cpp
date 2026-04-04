#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00156780
// Address: 0x156780 - 0x156990
void sub_00156780_0x156780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156780_0x156780");
#endif

    ctx->pc = 0x156780u;

    // 0x156780: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x156780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x156784: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x156784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x156788: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x156788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x15678c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15678cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156790: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x156790u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156794: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x156794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x156798: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x156798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15679c: 0xc0540d0  jal         func_150340
    ctx->pc = 0x15679Cu;
    SET_GPR_U32(ctx, 31, 0x1567A4u);
    ctx->pc = 0x1567A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15679Cu;
            // 0x1567a0: 0x26260008  addiu       $a2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x150340u;
    if (runtime->hasFunction(0x150340u)) {
        auto targetFn = runtime->lookupFunction(0x150340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1567A4u; }
        if (ctx->pc != 0x1567A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00150340_0x150340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1567A4u; }
        if (ctx->pc != 0x1567A4u) { return; }
    }
    ctx->pc = 0x1567A4u;
    // 0x1567a4: 0x261200e0  addiu       $s2, $s0, 0xE0
    ctx->pc = 0x1567a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x1567a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1567a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1567ac: 0xc08f246  jal         func_23C918
    ctx->pc = 0x1567ACu;
    SET_GPR_U32(ctx, 31, 0x1567B4u);
    ctx->pc = 0x1567B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1567ACu;
            // 0x1567b0: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C918u;
    if (runtime->hasFunction(0x23C918u)) {
        auto targetFn = runtime->lookupFunction(0x23C918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1567B4u; }
        if (ctx->pc != 0x1567B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023C918_0x23c918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1567B4u; }
        if (ctx->pc != 0x1567B4u) { return; }
    }
    ctx->pc = 0x1567B4u;
    // 0x1567b4: 0x8e0800e0  lw          $t0, 0xE0($s0)
    ctx->pc = 0x1567b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1567b8: 0x11000022  beqz        $t0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1567B8u;
    {
        const bool branch_taken_0x1567b8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1567BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1567B8u;
            // 0x1567bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1567b8) {
            ctx->pc = 0x156844u;
            goto label_156844;
        }
    }
    ctx->pc = 0x1567C0u;
    // 0x1567c0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1567c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1567c4: 0x0  nop
    ctx->pc = 0x1567c4u;
    // NOP
label_1567c8:
    // 0x1567c8: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x1567c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1567cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1567ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1567d0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1567d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1567d4: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x1567d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x1567d8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1567d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1567dc: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x1567DCu;
    {
        const bool branch_taken_0x1567dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1567dc) {
            ctx->pc = 0x1567E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1567DCu;
            // 0x1567e0: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x156838u;
            goto label_156838;
        }
    }
    ctx->pc = 0x1567E4u;
    // 0x1567e4: 0x8cc40018  lw          $a0, 0x18($a2)
    ctx->pc = 0x1567e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x1567e8: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1567e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1567ec: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1567ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1567f0: 0xe51818  mult        $v1, $a3, $a1
    ctx->pc = 0x1567f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1567f4: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x1567f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1567f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1567f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1567fc: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x1567fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x156800: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x156800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x156804: 0x24630124  addiu       $v1, $v1, 0x124
    ctx->pc = 0x156804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 292));
    // 0x156808: 0x2484ffec  addiu       $a0, $a0, -0x14
    ctx->pc = 0x156808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
    // 0x15680c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x15680cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x156810: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x156810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x156814: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x156814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156818: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x156818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x15681c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x15681cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156820: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x156820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x156824: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x156824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156828: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x156828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x15682c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x15682cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156830: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x156830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x156834: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x156834u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_156838:
    // 0x156838: 0xe8102b  sltu        $v0, $a3, $t0
    ctx->pc = 0x156838u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x15683c: 0x5440ffe2  bnel        $v0, $zero, . + 4 + (-0x1E << 2)
    ctx->pc = 0x15683Cu;
    {
        const bool branch_taken_0x15683c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15683c) {
            ctx->pc = 0x156840u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15683Cu;
            // 0x156840: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1567C8u;
            runtime->cooperativeGuestYield();
            goto label_1567c8;
        }
    }
    ctx->pc = 0x156844u;
label_156844:
    // 0x156844: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x156844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x156848: 0x8c42e84c  lw          $v0, -0x17B4($v0)
    ctx->pc = 0x156848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
    // 0x15684c: 0x8c5200d8  lw          $s2, 0xD8($v0)
    ctx->pc = 0x15684cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 216)));
    // 0x156850: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x156850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x156854: 0xa6020120  sh          $v0, 0x120($s0)
    ctx->pc = 0x156854u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 288), (uint16_t)GPR_U32(ctx, 2));
    // 0x156858: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x156858u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15685c: 0xa6020122  sh          $v0, 0x122($s0)
    ctx->pc = 0x15685cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 290), (uint16_t)GPR_U32(ctx, 2));
    // 0x156860: 0xfa010100  sqc2        $vf1, 0x100($s0)
    ctx->pc = 0x156860u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 256), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x156864: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x156864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x156868: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x156868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x15686c: 0xdc62bdf8  ld          $v0, -0x4208($v1)
    ctx->pc = 0x15686cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 4294950392)));
    // 0x156870: 0x8e250050  lw          $a1, 0x50($s1)
    ctx->pc = 0x156870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x156874: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x156874u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x156878: 0xa6040060  sh          $a0, 0x60($s0)
    ctx->pc = 0x156878u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 4));
    // 0x15687c: 0xfc62bdf8  sd          $v0, -0x4208($v1)
    ctx->pc = 0x15687cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 4294950392), GPR_U64(ctx, 2));
    // 0x156880: 0xae05011c  sw          $a1, 0x11C($s0)
    ctx->pc = 0x156880u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 5));
    // 0x156884: 0xae000110  sw          $zero, 0x110($s0)
    ctx->pc = 0x156884u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
    // 0x156888: 0xfe000068  sd          $zero, 0x68($s0)
    ctx->pc = 0x156888u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 104), GPR_U64(ctx, 0));
    // 0x15688c: 0xde220058  ld          $v0, 0x58($s1)
    ctx->pc = 0x15688cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x156890: 0xde230060  ld          $v1, 0x60($s1)
    ctx->pc = 0x156890u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x156894: 0xfe0200c0  sd          $v0, 0xC0($s0)
    ctx->pc = 0x156894u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 192), GPR_U64(ctx, 2));
    // 0x156898: 0xfe0300c8  sd          $v1, 0xC8($s0)
    ctx->pc = 0x156898u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 200), GPR_U64(ctx, 3));
    // 0x15689c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x15689cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1568a0: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x1568a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x1568a4: 0xc620006c  lwc1        $f0, 0x6C($s1)
    ctx->pc = 0x1568a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1568a8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1568a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1568ac: 0xe6000114  swc1        $f0, 0x114($s0)
    ctx->pc = 0x1568acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
    // 0x1568b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1568B0u;
    {
        const bool branch_taken_0x1568b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1568B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1568B0u;
            // 0x1568b4: 0xffa30008  sd          $v1, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1568b0) {
            ctx->pc = 0x1568C0u;
            goto label_1568c0;
        }
    }
    ctx->pc = 0x1568B8u;
    // 0x1568b8: 0x8e220068  lw          $v0, 0x68($s1)
    ctx->pc = 0x1568b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x1568bc: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1568bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
label_1568c0:
    // 0x1568c0: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x1568c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x1568c4: 0xc05420c  jal         func_150830
    ctx->pc = 0x1568C4u;
    SET_GPR_U32(ctx, 31, 0x1568CCu);
    ctx->pc = 0x1568C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1568C4u;
            // 0x1568c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x150830u;
    if (runtime->hasFunction(0x150830u)) {
        auto targetFn = runtime->lookupFunction(0x150830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1568CCu; }
        if (ctx->pc != 0x1568CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_150830_0x1508a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1568CCu; }
        if (ctx->pc != 0x1568CCu) { return; }
    }
    ctx->pc = 0x1568CCu;
    // 0x1568cc: 0xc054168  jal         func_1505A0
    ctx->pc = 0x1568CCu;
    SET_GPR_U32(ctx, 31, 0x1568D4u);
    ctx->pc = 0x1568D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1568CCu;
            // 0x1568d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1505A0u;
    if (runtime->hasFunction(0x1505A0u)) {
        auto targetFn = runtime->lookupFunction(0x1505A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1568D4u; }
        if (ctx->pc != 0x1568D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1505a0_0x150698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1568D4u; }
        if (ctx->pc != 0x1568D4u) { return; }
    }
    ctx->pc = 0x1568D4u;
    // 0x1568d4: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x1568d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x1568d8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1568d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1568dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1568DCu;
    {
        const bool branch_taken_0x1568dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1568E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1568DCu;
            // 0x1568e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1568dc) {
            ctx->pc = 0x1568F0u;
            goto label_1568f0;
        }
    }
    ctx->pc = 0x1568E4u;
    // 0x1568e4: 0x8e4200f8  lw          $v0, 0xF8($s2)
    ctx->pc = 0x1568e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 248)));
    // 0x1568e8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1568e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1568ec: 0xae4200f8  sw          $v0, 0xF8($s2)
    ctx->pc = 0x1568ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 248), GPR_U32(ctx, 2));
label_1568f0:
    // 0x1568f0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1568f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1568f4: 0x26450100  addiu       $a1, $s2, 0x100
    ctx->pc = 0x1568f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
    // 0x1568f8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1568f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1568fc: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1568fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x156900: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x156900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x156904: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x156904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x156908: 0x1080fff9  beqz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x156908u;
    {
        const bool branch_taken_0x156908 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15690Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156908u;
            // 0x15690c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156908) {
            ctx->pc = 0x1568F0u;
            runtime->cooperativeGuestYield();
            goto label_1568f0;
        }
    }
    ctx->pc = 0x156910u;
    // 0x156910: 0x8e0200e0  lw          $v0, 0xE0($s0)
    ctx->pc = 0x156910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x156914: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x156914u;
    {
        const bool branch_taken_0x156914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x156918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156914u;
            // 0x156918: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156914) {
            ctx->pc = 0x156974u;
            goto label_156974;
        }
    }
    ctx->pc = 0x15691Cu;
    // 0x15691c: 0x8e0200e4  lw          $v0, 0xE4($s0)
    ctx->pc = 0x15691cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
label_156920:
    // 0x156920: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x156920u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x156924: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x156924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x156928: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x156928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15692c: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x15692cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x156930: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x156930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x156934: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x156934u;
    {
        const bool branch_taken_0x156934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x156938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156934u;
            // 0x156938: 0x72142  srl         $a0, $a3, 5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156934) {
            ctx->pc = 0x156960u;
            goto label_156960;
        }
    }
    ctx->pc = 0x15693Cu;
    // 0x15693c: 0x30e2001f  andi        $v0, $a3, 0x1F
    ctx->pc = 0x15693cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)31);
    // 0x156940: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x156940u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x156944: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x156944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x156948: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x156948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x15694c: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x15694cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x156950: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x156950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x156954: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x156954u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x156958: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x156958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x15695c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x15695cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_156960:
    // 0x156960: 0x8e0200e0  lw          $v0, 0xE0($s0)
    ctx->pc = 0x156960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x156964: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x156964u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x156968: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x156968u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x15696c: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x15696Cu;
    {
        const bool branch_taken_0x15696c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15696c) {
            ctx->pc = 0x156970u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15696Cu;
            // 0x156970: 0x8e0200e4  lw          $v0, 0xE4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x156920u;
            runtime->cooperativeGuestYield();
            goto label_156920;
        }
    }
    ctx->pc = 0x156974u;
label_156974:
    // 0x156974: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x156974u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156978: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x156978u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15697c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x15697cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x156980: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x156980u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x156984: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x156984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156988: 0x3e00008  jr          $ra
    ctx->pc = 0x156988u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15698Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156988u;
            // 0x15698c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1567C8u: goto label_1567c8;
            case 0x156838u: goto label_156838;
            case 0x156844u: goto label_156844;
            case 0x1568C0u: goto label_1568c0;
            case 0x1568F0u: goto label_1568f0;
            case 0x156920u: goto label_156920;
            case 0x156960u: goto label_156960;
            case 0x156974u: goto label_156974;
            default: break;
        }
        return;
    }
    ctx->pc = 0x156990u;
}
