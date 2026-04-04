#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00130D28
// Address: 0x130d28 - 0x130e60
void sub_00130D28_0x130d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130D28_0x130d28");
#endif

    ctx->pc = 0x130d28u;

    // 0x130d28: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x130d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x130d2c: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x130d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
    // 0x130d30: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x130d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x130d34: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x130d34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130d38: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x130d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x130d3c: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x130d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x130d40: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x130d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x130d44: 0x8c46002c  lw          $a2, 0x2C($v0)
    ctx->pc = 0x130d44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x130d48: 0x8c470028  lw          $a3, 0x28($v0)
    ctx->pc = 0x130d48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x130d4c: 0x70c71b89  pcpyld      $v1, $a2, $a3
    ctx->pc = 0x130d4cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 7)));
    // 0x130d50: 0x8c480034  lw          $t0, 0x34($v0)
    ctx->pc = 0x130d50u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x130d54: 0x8c460030  lw          $a2, 0x30($v0)
    ctx->pc = 0x130d54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x130d58: 0x71068b89  pcpyld      $s1, $t0, $a2
    ctx->pc = 0x130d58u;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 6)));
    // 0x130d5c: 0x72238cc8  ppacw       $s1, $s1, $v1
    ctx->pc = 0x130d5cu;
    SET_GPR_VEC(ctx, 17, PS2_PPACW(GPR_VEC(ctx, 17), GPR_VEC(ctx, 3)));
    // 0x130d60: 0x7fb10000  sq          $s1, 0x0($sp)
    ctx->pc = 0x130d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 17));
    // 0x130d64: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x130d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x130d68: 0x8c47003c  lw          $a3, 0x3C($v0)
    ctx->pc = 0x130d68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x130d6c: 0x8c480038  lw          $t0, 0x38($v0)
    ctx->pc = 0x130d6cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x130d70: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x130d70u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x130d74: 0x8c480040  lw          $t0, 0x40($v0)
    ctx->pc = 0x130d74u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x130d78: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x130d78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130d7c: 0x70e81b89  pcpyld      $v1, $a3, $t0
    ctx->pc = 0x130d7cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x130d80: 0x8c500044  lw          $s0, 0x44($v0)
    ctx->pc = 0x130d80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x130d84: 0x70641cc8  ppacw       $v1, $v1, $a0
    ctx->pc = 0x130d84u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x130d88: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x130d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x130d8c: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x130d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
    // 0x130d90: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x130d90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x130d94: 0x70031789  pexew       $v0, $v1
    ctx->pc = 0x130d94u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x130d98: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x130d98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x130d9c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x130d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x130da0: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x130da0u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x130da4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x130da4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x130da8: 0xc061248  jal         func_184920
    ctx->pc = 0x130DA8u;
    SET_GPR_U32(ctx, 31, 0x130DB0u);
    ctx->pc = 0x184920u;
    if (runtime->hasFunction(0x184920u)) {
        auto targetFn = runtime->lookupFunction(0x184920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130DB0u; }
        if (ctx->pc != 0x130DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184920_0x184920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130DB0u; }
        if (ctx->pc != 0x130DB0u) { return; }
    }
    ctx->pc = 0x130DB0u;
    // 0x130db0: 0x72101b89  pcpyld      $v1, $s0, $s0
    ctx->pc = 0x130db0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 16), GPR_VEC(ctx, 16)));
    // 0x130db4: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x130db4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x130db8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x130db8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130dbc: 0x70d01389  pcpyld      $v0, $a2, $s0
    ctx->pc = 0x130dbcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 16)));
    // 0x130dc0: 0xdba30020  lqc2        $vf3, 0x20($sp)
    ctx->pc = 0x130dc0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x130dc4: 0x70433cc8  ppacw       $a3, $v0, $v1
    ctx->pc = 0x130dc4u;
    SET_GPR_VEC(ctx, 7, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x130dc8: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x130dc8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x130dcc: 0xdba50040  lqc2        $vf5, 0x40($sp)
    ctx->pc = 0x130dccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x130dd0: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x130dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x130dd4: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x130dd4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x130dd8: 0x86420060  lh          $v0, 0x60($s2)
    ctx->pc = 0x130dd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x130ddc: 0xdc83bdf8  ld          $v1, -0x4208($a0)
    ctx->pc = 0x130ddcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 4294950392)));
    // 0x130de0: 0x4be218ea  vmul.xyzw   $vf3, $vf3, $vf2
    ctx->pc = 0x130de0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x130de4: 0x4be2212a  vmul.xyzw   $vf4, $vf4, $vf2
    ctx->pc = 0x130de4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x130de8: 0x4be2296a  vmul.xyzw   $vf5, $vf5, $vf2
    ctx->pc = 0x130de8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x130dec: 0xfa430020  sqc2        $vf3, 0x20($s2)
    ctx->pc = 0x130decu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x130df0: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x130df0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x130df4: 0xfa440030  sqc2        $vf4, 0x30($s2)
    ctx->pc = 0x130df4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x130df8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x130df8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x130dfc: 0xfa450040  sqc2        $vf5, 0x40($s2)
    ctx->pc = 0x130dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 64), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x130e00: 0x62400a  movz        $t0, $v1, $v0
    ctx->pc = 0x130e00u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
    // 0x130e04: 0x7e510050  sq          $s1, 0x50($s2)
    ctx->pc = 0x130e04u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 80), GPR_VEC(ctx, 17));
    // 0x130e08: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x130e08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130e0c: 0xfc83bdf8  sd          $v1, -0x4208($a0)
    ctx->pc = 0x130e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 4294950392), GPR_U64(ctx, 3));
    // 0x130e10: 0xdba10050  lqc2        $vf1, 0x50($sp)
    ctx->pc = 0x130e10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x130e14: 0xfe420068  sd          $v0, 0x68($s2)
    ctx->pc = 0x130e14u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 104), GPR_U64(ctx, 2));
    // 0x130e18: 0x4be2086a  vmul.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x130e18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x130e1c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x130e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x130e20: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x130e20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x130e24: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x130e24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x130e28: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x130e28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x130e2c: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x130e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x130e30: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x130e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x130e34: 0xfba20060  sqc2        $vf2, 0x60($sp)
    ctx->pc = 0x130e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x130e38: 0xfba200d0  sqc2        $vf2, 0xD0($sp)
    ctx->pc = 0x130e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x130e3c: 0xfba30070  sqc2        $vf3, 0x70($sp)
    ctx->pc = 0x130e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x130e40: 0xfba30020  sqc2        $vf3, 0x20($sp)
    ctx->pc = 0x130e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x130e44: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x130e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x130e48: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x130e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x130e4c: 0xfba50090  sqc2        $vf5, 0x90($sp)
    ctx->pc = 0x130e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x130e50: 0xfba50040  sqc2        $vf5, 0x40($sp)
    ctx->pc = 0x130e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x130e54: 0x3e00008  jr          $ra
    ctx->pc = 0x130E54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130E54u;
            // 0x130e58: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x130E5Cu;
    // 0x130e5c: 0x0  nop
    ctx->pc = 0x130e5cu;
    // NOP
}
