#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E1430
// Address: 0x1e1430 - 0x1e1548
void sub_001E1430_0x1e1430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1430_0x1e1430");
#endif

    ctx->pc = 0x1e1430u;

    // 0x1e1430: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1e1430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1e1434: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1e1434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x1e1438: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1e1438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x1e143c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e143cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1440: 0x7fa60010  sq          $a2, 0x10($sp)
    ctx->pc = 0x1e1440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 6));
    // 0x1e1444: 0x7fa70020  sq          $a3, 0x20($sp)
    ctx->pc = 0x1e1444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 7));
    // 0x1e1448: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1e1448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x1e144c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1e144cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1e1450: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1e1450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x1e1454: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1e1454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1e1458: 0xc0784dc  jal         func_1E1370
    ctx->pc = 0x1E1458u;
    SET_GPR_U32(ctx, 31, 0x1E1460u);
    ctx->pc = 0x1E145Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1458u;
            // 0x1e145c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1370u;
    if (runtime->hasFunction(0x1E1370u)) {
        auto targetFn = runtime->lookupFunction(0x1E1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1460u; }
        if (ctx->pc != 0x1E1460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1370_0x1e1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1460u; }
        if (ctx->pc != 0x1E1460u) { return; }
    }
    ctx->pc = 0x1E1460u;
    // 0x1e1460: 0x7ba60020  lq          $a2, 0x20($sp)
    ctx->pc = 0x1e1460u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e1464: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1e1464u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1468: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e1468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e146c: 0xc0784dc  jal         func_1E1370
    ctx->pc = 0x1E146Cu;
    SET_GPR_U32(ctx, 31, 0x1E1474u);
    ctx->pc = 0x1E1470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E146Cu;
            // 0x1e1470: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1370u;
    if (runtime->hasFunction(0x1E1370u)) {
        auto targetFn = runtime->lookupFunction(0x1E1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1474u; }
        if (ctx->pc != 0x1E1474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1370_0x1e1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1474u; }
        if (ctx->pc != 0x1E1474u) { return; }
    }
    ctx->pc = 0x1E1474u;
    // 0x1e1474: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1e1474u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e1478: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1e1478u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e147c: 0xdba20010  lqc2        $vf2, 0x10($sp)
    ctx->pc = 0x1e147cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e1480: 0x4be208a8  vadd.xyzw   $vf2, $vf1, $vf2
    ctx->pc = 0x1e1480u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e1484: 0xfba20030  sqc2        $vf2, 0x30($sp)
    ctx->pc = 0x1e1484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e1488: 0xdba30020  lqc2        $vf3, 0x20($sp)
    ctx->pc = 0x1e1488u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e148c: 0x4be308e8  vadd.xyzw   $vf3, $vf1, $vf3
    ctx->pc = 0x1e148cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e1490: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x1e1490u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x1e1494: 0xfba30040  sqc2        $vf3, 0x40($sp)
    ctx->pc = 0x1e1494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e1498: 0x7ba50030  lq          $a1, 0x30($sp)
    ctx->pc = 0x1e1498u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e149c: 0x8e44bcf8  lw          $a0, -0x4308($s2)
    ctx->pc = 0x1e149cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950136)));
    // 0x1e14a0: 0xc047864  jal         func_11E190
    ctx->pc = 0x1E14A0u;
    SET_GPR_U32(ctx, 31, 0x1E14A8u);
    ctx->pc = 0x1E14A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E14A0u;
            // 0x1e14a4: 0x7ba60040  lq          $a2, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E190u;
    if (runtime->hasFunction(0x11E190u)) {
        auto targetFn = runtime->lookupFunction(0x11E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E14A8u; }
        if (ctx->pc != 0x1E14A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E190_0x11e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E14A8u; }
        if (ctx->pc != 0x1E14A8u) { return; }
    }
    ctx->pc = 0x1E14A8u;
    // 0x1e14a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E14A8u;
    {
        const bool branch_taken_0x1e14a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E14ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E14A8u;
            // 0x1e14ac: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e14a8) {
            ctx->pc = 0x1E14C0u;
            goto label_1e14c0;
        }
    }
    ctx->pc = 0x1E14B0u;
    // 0x1e14b0: 0x24427790  addiu       $v0, $v0, 0x7790
    ctx->pc = 0x1e14b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30608));
    // 0x1e14b4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1e14b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e14b8: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1e14b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x1e14bc: 0x0  nop
    ctx->pc = 0x1e14bcu;
    // NOP
label_1e14c0:
    // 0x1e14c0: 0x8e44bcf8  lw          $a0, -0x4308($s2)
    ctx->pc = 0x1e14c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950136)));
    // 0x1e14c4: 0x7ba50040  lq          $a1, 0x40($sp)
    ctx->pc = 0x1e14c4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e14c8: 0xc047864  jal         func_11E190
    ctx->pc = 0x1E14C8u;
    SET_GPR_U32(ctx, 31, 0x1E14D0u);
    ctx->pc = 0x1E14CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E14C8u;
            // 0x1e14cc: 0x7ba60030  lq          $a2, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E190u;
    if (runtime->hasFunction(0x11E190u)) {
        auto targetFn = runtime->lookupFunction(0x11E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E14D0u; }
        if (ctx->pc != 0x1E14D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E190_0x11e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E14D0u; }
        if (ctx->pc != 0x1E14D0u) { return; }
    }
    ctx->pc = 0x1E14D0u;
    // 0x1e14d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E14D0u;
    {
        const bool branch_taken_0x1e14d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E14D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E14D0u;
            // 0x1e14d4: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e14d0) {
            ctx->pc = 0x1E14E4u;
            goto label_1e14e4;
        }
    }
    ctx->pc = 0x1E14D8u;
    // 0x1e14d8: 0x24427790  addiu       $v0, $v0, 0x7790
    ctx->pc = 0x1e14d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30608));
    // 0x1e14dc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1e14dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e14e0: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x1e14e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_1e14e4:
    // 0x1e14e4: 0xdba20040  lqc2        $vf2, 0x40($sp)
    ctx->pc = 0x1e14e4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e14e8: 0xdba30030  lqc2        $vf3, 0x30($sp)
    ctx->pc = 0x1e14e8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e14ec: 0x4be3106c  vsub.xyzw   $vf1, $vf2, $vf3
    ctx->pc = 0x1e14ecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e14f0: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1e14f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e14f4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1e14f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1e14f8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1e14f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e14fc: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1e14fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e1500: 0x4be30868  vadd.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x1e1500u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e1504: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x1e1504u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e1508: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e1508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e150c: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x1e150cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e1510: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e1510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1514: 0xc0784dc  jal         func_1E1370
    ctx->pc = 0x1E1514u;
    SET_GPR_U32(ctx, 31, 0x1E151Cu);
    ctx->pc = 0x1E1518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1514u;
            // 0x1e1518: 0x48261800  qmfc2.ni    $a2, $vf3 (Delay Slot)
        SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1370u;
    if (runtime->hasFunction(0x1E1370u)) {
        auto targetFn = runtime->lookupFunction(0x1E1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E151Cu; }
        if (ctx->pc != 0x1E151Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1370_0x1e1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E151Cu; }
        if (ctx->pc != 0x1E151Cu) { return; }
    }
    ctx->pc = 0x1E151Cu;
    // 0x1e151c: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x1e151cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x1e1520: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1e1520u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e1524: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x1e1524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x1e1528: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1e1528u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e152c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1e152cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e1530: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1e1530u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e1534: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1e1534u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e1538: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1e1538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e153c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E153Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E153Cu;
            // 0x1e1540: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E14C0u: goto label_1e14c0;
            case 0x1E14E4u: goto label_1e14e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E1544u;
    // 0x1e1544: 0x0  nop
    ctx->pc = 0x1e1544u;
    // NOP
}
