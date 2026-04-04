#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1d8d28
// Address: 0x1d8d28 - 0x1d8ef8
void entry_1d8d28_0x1d8ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1d8d28_0x1d8ef8");
#endif

    ctx->pc = 0x1d8d28u;

    // 0x1d8d28: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x1d8d28u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1d8d2c: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1d8d2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1d8d30: 0x4b020042  vaddz.x     $vf1, $vf0, $vf2z
    ctx->pc = 0x1d8d30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d8d34: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1d8d34u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d8d38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d8d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8d3c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1d8d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1d8d40: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x1d8d40u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1d8d44: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1d8d44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8d48: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1d8d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1d8d4c: 0x4b020041  vaddy.x     $vf1, $vf0, $vf2y
    ctx->pc = 0x1d8d4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d8d50: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x1d8d50u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d8d54: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1d8d54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8d58: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x1d8d58u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1d8d5c: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x1d8d5cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x1d8d60: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x1d8d60u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x1d8d64: 0x70e41389  pcpyld      $v0, $a3, $a0
    ctx->pc = 0x1d8d64u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 4)));
    // 0x1d8d68: 0x70432cc8  ppacw       $a1, $v0, $v1
    ctx->pc = 0x1d8d68u;
    SET_GPR_VEC(ctx, 5, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1d8d6c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d8d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8d70: 0x8e02e2a4  lw          $v0, -0x1D5C($s0)
    ctx->pc = 0x1d8d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294959780)));
    // 0x1d8d74: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x1d8d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
    // 0x1d8d78: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D8D78u;
    {
        const bool branch_taken_0x1d8d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8D78u;
            // 0x1d8d7c: 0x7fa50010  sq          $a1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8d78) {
            ctx->pc = 0x1D8D88u;
            goto label_1d8d88;
        }
    }
    ctx->pc = 0x1D8D80u;
    // 0x1d8d80: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1d8d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1d8d84: 0x0  nop
    ctx->pc = 0x1d8d84u;
    // NOP
label_1d8d88:
    // 0x1d8d88: 0xc05a6f8  jal         func_169BE0
    ctx->pc = 0x1D8D88u;
    SET_GPR_U32(ctx, 31, 0x1D8D90u);
    ctx->pc = 0x1D8D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8D88u;
            // 0x1d8d8c: 0xfba20030  sqc2        $vf2, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x169BE0u;
    if (runtime->hasFunction(0x169BE0u)) {
        auto targetFn = runtime->lookupFunction(0x169BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8D90u; }
        if (ctx->pc != 0x1D8D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00169BE0_0x169be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8D90u; }
        if (ctx->pc != 0x1D8D90u) { return; }
    }
    ctx->pc = 0x1D8D90u;
    // 0x1d8d90: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1d8d90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1d8d94: 0x8e03e2a4  lw          $v1, -0x1D5C($s0)
    ctx->pc = 0x1d8d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294959780)));
    // 0x1d8d98: 0xdba20030  lqc2        $vf2, 0x30($sp)
    ctx->pc = 0x1d8d98u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d8d9c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d8d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8da0: 0x4be30b3c  vmove.xyzw  $vf3, $vf1
    ctx->pc = 0x1d8da0u;
    ctx->vu0_vf[3] = ctx->vu0_vf[1];
    // 0x1d8da4: 0x4a23133c  vmove.w     $vf3, $vf2
    ctx->pc = 0x1d8da4u;
    ctx->vu0_vf[3] = ctx->vu0_vf[2];
    // 0x1d8da8: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1d8da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d8dac: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D8DACu;
    {
        const bool branch_taken_0x1d8dac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8DACu;
            // 0x1d8db0: 0xfba30010  sqc2        $vf3, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8dac) {
            ctx->pc = 0x1D8DB8u;
            goto label_1d8db8;
        }
    }
    ctx->pc = 0x1D8DB4u;
    // 0x1d8db4: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x1d8db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1d8db8:
    // 0x1d8db8: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x1d8db8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1d8dbc: 0x4b030043  vaddw.x     $vf1, $vf0, $vf3w
    ctx->pc = 0x1d8dbcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d8dc0: 0x70031789  pexew       $v0, $v1
    ctx->pc = 0x1d8dc0u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1d8dc4: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x1d8dc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1d8dc8: 0xc4850384  lwc1        $f5, 0x384($a0)
    ctx->pc = 0x1d8dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1d8dcc: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1d8dccu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d8dd0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1d8dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d8dd4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1d8dd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1d8dd8: 0x46032081  sub.s       $f2, $f4, $f3
    ctx->pc = 0x1d8dd8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x1d8ddc: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x1d8ddcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1d8de0: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x1d8de0u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1d8de4: 0x44823800  mtc1        $v0, $f7
    ctx->pc = 0x1d8de4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1d8de8: 0x46022836  c.le.s      $f5, $f2
    ctx->pc = 0x1d8de8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d8dec: 0x0  nop
    ctx->pc = 0x1d8decu;
    // NOP
    // 0x1d8df0: 0x4501002d  bc1t        . + 4 + (0x2D << 2)
    ctx->pc = 0x1D8DF0u;
    {
        const bool branch_taken_0x1d8df0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D8DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8DF0u;
            // 0x1d8df4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8df0) {
            ctx->pc = 0x1D8EA8u;
            goto label_1d8ea8;
        }
    }
    ctx->pc = 0x1D8DF8u;
    // 0x1d8df8: 0x46032000  add.s       $f0, $f4, $f3
    ctx->pc = 0x1d8df8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x1d8dfc: 0xc4810388  lwc1        $f1, 0x388($a0)
    ctx->pc = 0x1d8dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d8e00: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1d8e00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d8e04: 0x0  nop
    ctx->pc = 0x1d8e04u;
    // NOP
    // 0x1d8e08: 0x45030036  bc1tl       . + 4 + (0x36 << 2)
    ctx->pc = 0x1D8E08u;
    {
        const bool branch_taken_0x1d8e08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d8e08) {
            ctx->pc = 0x1D8E0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8E08u;
            // 0x1d8e0c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D8EE4u;
            goto label_1d8ee4;
        }
    }
    ctx->pc = 0x1D8E10u;
    // 0x1d8e10: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x1d8e10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d8e14: 0x0  nop
    ctx->pc = 0x1d8e14u;
    // NOP
    // 0x1d8e18: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1D8E18u;
    {
        const bool branch_taken_0x1d8e18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d8e18) {
            ctx->pc = 0x1D8E1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8E18u;
            // 0x1d8e1c: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D8E20u;
            goto label_1d8e20;
        }
    }
    ctx->pc = 0x1D8E20u;
label_1d8e20:
    // 0x1d8e20: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x1d8e20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d8e24: 0x0  nop
    ctx->pc = 0x1d8e24u;
    // NOP
    // 0x1d8e28: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1D8E28u;
    {
        const bool branch_taken_0x1d8e28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d8e28) {
            ctx->pc = 0x1D8E2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8E28u;
            // 0x1d8e2c: 0x34630010  ori         $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D8E30u;
            goto label_1d8e30;
        }
    }
    ctx->pc = 0x1D8E30u;
label_1d8e30:
    // 0x1d8e30: 0xc48002c0  lwc1        $f0, 0x2C0($a0)
    ctx->pc = 0x1d8e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8e34: 0xc48102c8  lwc1        $f1, 0x2C8($a0)
    ctx->pc = 0x1d8e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d8e38: 0x46003082  mul.s       $f2, $f6, $f0
    ctx->pc = 0x1d8e38u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x1d8e3c: 0x46001005  abs.s       $f0, $f2
    ctx->pc = 0x1d8e3cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[2]);
    // 0x1d8e40: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x1d8e40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1d8e44: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1d8e44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1d8e48: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d8e48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d8e4c: 0x0  nop
    ctx->pc = 0x1d8e4cu;
    // NOP
    // 0x1d8e50: 0x45030024  bc1tl       . + 4 + (0x24 << 2)
    ctx->pc = 0x1D8E50u;
    {
        const bool branch_taken_0x1d8e50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d8e50) {
            ctx->pc = 0x1D8E54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8E50u;
            // 0x1d8e54: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D8EE4u;
            goto label_1d8ee4;
        }
    }
    ctx->pc = 0x1D8E58u;
    // 0x1d8e58: 0x46020800  add.s       $f0, $f1, $f2
    ctx->pc = 0x1d8e58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1d8e5c: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x1d8e5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d8e60: 0x0  nop
    ctx->pc = 0x1d8e60u;
    // NOP
    // 0x1d8e64: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1D8E64u;
    {
        const bool branch_taken_0x1d8e64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d8e64) {
            ctx->pc = 0x1D8E68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8E64u;
            // 0x1d8e68: 0x34630001  ori         $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D8E6Cu;
            goto label_1d8e6c;
        }
    }
    ctx->pc = 0x1D8E6Cu;
label_1d8e6c:
    // 0x1d8e6c: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x1d8e6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1d8e70: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x1d8e70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d8e74: 0x0  nop
    ctx->pc = 0x1d8e74u;
    // NOP
    // 0x1d8e78: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1D8E78u;
    {
        const bool branch_taken_0x1d8e78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d8e78) {
            ctx->pc = 0x1D8E7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8E78u;
            // 0x1d8e7c: 0x34630002  ori         $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D8E80u;
            goto label_1d8e80;
        }
    }
    ctx->pc = 0x1D8E80u;
label_1d8e80:
    // 0x1d8e80: 0xc48002d4  lwc1        $f0, 0x2D4($a0)
    ctx->pc = 0x1d8e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8e84: 0xc48102d8  lwc1        $f1, 0x2D8($a0)
    ctx->pc = 0x1d8e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d8e88: 0x46003882  mul.s       $f2, $f7, $f0
    ctx->pc = 0x1d8e88u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x1d8e8c: 0x46001005  abs.s       $f0, $f2
    ctx->pc = 0x1d8e8cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[2]);
    // 0x1d8e90: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x1d8e90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1d8e94: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1d8e94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1d8e98: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d8e98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d8e9c: 0x0  nop
    ctx->pc = 0x1d8e9cu;
    // NOP
    // 0x1d8ea0: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x1D8EA0u;
    {
        const bool branch_taken_0x1d8ea0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d8ea0) {
            ctx->pc = 0x1D8EA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8EA0u;
            // 0x1d8ea4: 0x46020800  add.s       $f0, $f1, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D8EB0u;
            goto label_1d8eb0;
        }
    }
    ctx->pc = 0x1D8EA8u;
label_1d8ea8:
    // 0x1d8ea8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1D8EA8u;
    {
        const bool branch_taken_0x1d8ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8EA8u;
            // 0x1d8eac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8ea8) {
            ctx->pc = 0x1D8EE4u;
            goto label_1d8ee4;
        }
    }
    ctx->pc = 0x1D8EB0u;
label_1d8eb0:
    // 0x1d8eb0: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x1d8eb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d8eb4: 0x0  nop
    ctx->pc = 0x1d8eb4u;
    // NOP
    // 0x1d8eb8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1D8EB8u;
    {
        const bool branch_taken_0x1d8eb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d8eb8) {
            ctx->pc = 0x1D8EBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8EB8u;
            // 0x1d8ebc: 0x34630008  ori         $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D8EC0u;
            goto label_1d8ec0;
        }
    }
    ctx->pc = 0x1D8EC0u;
label_1d8ec0:
    // 0x1d8ec0: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x1d8ec0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1d8ec4: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x1d8ec4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d8ec8: 0x0  nop
    ctx->pc = 0x1d8ec8u;
    // NOP
    // 0x1d8ecc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1D8ECCu;
    {
        const bool branch_taken_0x1d8ecc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d8ecc) {
            ctx->pc = 0x1D8ED0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8ECCu;
            // 0x1d8ed0: 0x34630004  ori         $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D8ED4u;
            goto label_1d8ed4;
        }
    }
    ctx->pc = 0x1D8ED4u;
label_1d8ed4:
    // 0x1d8ed4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1d8ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d8ed8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d8ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8edc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d8edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d8ee0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1d8ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1d8ee4:
    // 0x1d8ee4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1d8ee4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d8ee8: 0x38820001  xori        $v0, $a0, 0x1
    ctx->pc = 0x1d8ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x1d8eec: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1d8eecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d8ef0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8EF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8EF0u;
            // 0x1d8ef4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D8D88u: goto label_1d8d88;
            case 0x1D8DB8u: goto label_1d8db8;
            case 0x1D8E20u: goto label_1d8e20;
            case 0x1D8E30u: goto label_1d8e30;
            case 0x1D8E6Cu: goto label_1d8e6c;
            case 0x1D8E80u: goto label_1d8e80;
            case 0x1D8EA8u: goto label_1d8ea8;
            case 0x1D8EB0u: goto label_1d8eb0;
            case 0x1D8EC0u: goto label_1d8ec0;
            case 0x1D8ED4u: goto label_1d8ed4;
            case 0x1D8EE4u: goto label_1d8ee4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D8EF8u;
}
