#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00103AF0
// Address: 0x103af0 - 0x103db8
void sub_00103AF0_0x103af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00103AF0_0x103af0");
#endif

    ctx->pc = 0x103af0u;

    // 0x103af0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x103af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x103af4: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x103af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x103af8: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x103af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x103afc: 0x160982d  daddu       $s3, $t3, $zero
    ctx->pc = 0x103afcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103b00: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x103b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x103b04: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x103b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x103b08: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x103b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x103b0c: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x103b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x103b10: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x103b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x103b14: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x103b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x103b18: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x103b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x103b1c: 0xafa40024  sw          $a0, 0x24($sp)
    ctx->pc = 0x103b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
    // 0x103b20: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x103b20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x103b24: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x103b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
    // 0x103b28: 0x8c9e000c  lw          $fp, 0xC($a0)
    ctx->pc = 0x103b28u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x103b2c: 0x8c970000  lw          $s7, 0x0($a0)
    ctx->pc = 0x103b2cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x103b30: 0xbea018  mult        $s4, $a1, $fp
    ctx->pc = 0x103b30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 20, (int32_t)result); }
    // 0x103b34: 0xafa8002c  sw          $t0, 0x2C($sp)
    ctx->pc = 0x103b34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 8));
    // 0x103b38: 0xafa90030  sw          $t1, 0x30($sp)
    ctx->pc = 0x103b38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 9));
    // 0x103b3c: 0xafaa0034  sw          $t2, 0x34($sp)
    ctx->pc = 0x103b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 10));
    // 0x103b40: 0x18e00090  blez        $a3, . + 4 + (0x90 << 2)
    ctx->pc = 0x103B40u;
    {
        const bool branch_taken_0x103b40 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x103B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103B40u;
            // 0x103b44: 0x29eb021  addu        $s6, $s4, $fp (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103b40) {
            ctx->pc = 0x103D84u;
            goto label_103d84;
        }
    }
    ctx->pc = 0x103B48u;
    // 0x103b48: 0xafa70038  sw          $a3, 0x38($sp)
    ctx->pc = 0x103b48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 7));
    // 0x103b4c: 0x0  nop
    ctx->pc = 0x103b4cu;
    // NOP
label_103b50:
    // 0x103b50: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x103b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x103b54: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x103b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x103b58: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x103b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x103b5c: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x103b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x103b60: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x103b60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x103b64: 0x10400082  beqz        $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x103B64u;
    {
        const bool branch_taken_0x103b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103B64u;
            // 0x103b68: 0x8fa50038  lw          $a1, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103b64) {
            ctx->pc = 0x103D70u;
            goto label_103d70;
        }
    }
    ctx->pc = 0x103B6Cu;
    // 0x103b6c: 0x2838821  addu        $s1, $s4, $v1
    ctx->pc = 0x103b6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_103b70:
    // 0x103b70: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x103b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x103b74: 0x111140  sll         $v0, $s1, 5
    ctx->pc = 0x103b74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x103b78: 0x2c49021  addu        $s2, $s6, $a0
    ctx->pc = 0x103b78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x103b7c: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x103b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x103b80: 0x284a821  addu        $s5, $s4, $a0
    ctx->pc = 0x103b80u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x103b84: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x103b84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x103b88: 0x2c38021  addu        $s0, $s6, $v1
    ctx->pc = 0x103b88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x103b8c: 0x121140  sll         $v0, $s2, 5
    ctx->pc = 0x103b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x103b90: 0x102940  sll         $a1, $s0, 5
    ctx->pc = 0x103b90u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x103b94: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x103b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x103b98: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x103b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x103b9c: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x103b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x103ba0: 0x151140  sll         $v0, $s5, 5
    ctx->pc = 0x103ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 5));
    // 0x103ba4: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x103ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x103ba8: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x103ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x103bac: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x103bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x103bb0: 0x24060000  addiu       $a2, $zero, 0x0
    ctx->pc = 0x103bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x103bb4: 0x70861b89  pcpyld      $v1, $a0, $a2
    ctx->pc = 0x103bb4u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
    // 0x103bb8: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x103bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x103bbc: 0x24060000  addiu       $a2, $zero, 0x0
    ctx->pc = 0x103bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x103bc0: 0x70861389  pcpyld      $v0, $a0, $a2
    ctx->pc = 0x103bc0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
    // 0x103bc4: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x103bc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x103bc8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x103bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x103bcc: 0xafa70054  sw          $a3, 0x54($sp)
    ctx->pc = 0x103bccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 7));
    // 0x103bd0: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x103bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x103bd4: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x103bd4u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x103bd8: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x103bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x103bdc: 0x2e52821  addu        $a1, $s7, $a1
    ctx->pc = 0x103bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 5)));
    // 0x103be0: 0x8fa60044  lw          $a2, 0x44($sp)
    ctx->pc = 0x103be0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x103be4: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x103be4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x103be8: 0x8fa80030  lw          $t0, 0x30($sp)
    ctx->pc = 0x103be8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x103bec: 0x8fa90034  lw          $t1, 0x34($sp)
    ctx->pc = 0x103becu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x103bf0: 0x8faa0050  lw          $t2, 0x50($sp)
    ctx->pc = 0x103bf0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x103bf4: 0x8fab0054  lw          $t3, 0x54($sp)
    ctx->pc = 0x103bf4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x103bf8: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x103bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x103bfc: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x103bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x103c00: 0xc040d94  jal         func_103650
    ctx->pc = 0x103C00u;
    SET_GPR_U32(ctx, 31, 0x103C08u);
    ctx->pc = 0x103C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103C00u;
            // 0x103c04: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103650u;
    if (runtime->hasFunction(0x103650u)) {
        auto targetFn = runtime->lookupFunction(0x103650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103C08u; }
        if (ctx->pc != 0x103C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_103650_0x103af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103C08u; }
        if (ctx->pc != 0x103C08u) { return; }
    }
    ctx->pc = 0x103C08u;
    // 0x103c08: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x103c08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x103c0c: 0x10a00026  beqz        $a1, . + 4 + (0x26 << 2)
    ctx->pc = 0x103C0Cu;
    {
        const bool branch_taken_0x103c0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x103C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103C0Cu;
            // 0x103c10: 0x111100  sll         $v0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103c0c) {
            ctx->pc = 0x103CA8u;
            goto label_103ca8;
        }
    }
    ctx->pc = 0x103C14u;
    // 0x103c14: 0xdba20010  lqc2        $vf2, 0x10($sp)
    ctx->pc = 0x103c14u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103c18: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x103c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x103c1c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x103c1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x103c20: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x103c20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x103c24: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x103c24u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x103c28: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x103c28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x103c2c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x103c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x103c30: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x103c30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x103c34: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x103c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x103c38: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x103c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x103c3c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x103c3cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x103c40: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x103c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x103c44: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x103c44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x103c48: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x103c48u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x103c4c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x103c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x103c50: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x103c50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x103c54: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x103c54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x103c58: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x103c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x103c5c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x103c5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x103c60: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x103c60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x103c64: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x103c64u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x103c68: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x103c68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x103c6c: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x103c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x103c70: 0x8fa60100  lw          $a2, 0x100($sp)
    ctx->pc = 0x103c70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x103c74: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x103c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x103c78: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x103c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x103c7c: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x103c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x103c80: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x103c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x103c84: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x103c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x103c88: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x103c88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x103c8c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x103c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x103c90: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x103c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x103c94: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x103c94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x103c98: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x103c98u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x103c9c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x103c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x103ca0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x103ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x103ca4: 0x0  nop
    ctx->pc = 0x103ca4u;
    // NOP
label_103ca8:
    // 0x103ca8: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x103ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x103cac: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x103cacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x103cb0: 0x8fa70044  lw          $a3, 0x44($sp)
    ctx->pc = 0x103cb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x103cb4: 0x8faa0050  lw          $t2, 0x50($sp)
    ctx->pc = 0x103cb4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x103cb8: 0x8fab0054  lw          $t3, 0x54($sp)
    ctx->pc = 0x103cb8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x103cbc: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x103cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x103cc0: 0x8fa80030  lw          $t0, 0x30($sp)
    ctx->pc = 0x103cc0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x103cc4: 0xc040d94  jal         func_103650
    ctx->pc = 0x103CC4u;
    SET_GPR_U32(ctx, 31, 0x103CCCu);
    ctx->pc = 0x103CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103CC4u;
            // 0x103cc8: 0x8fa90034  lw          $t1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103650u;
    if (runtime->hasFunction(0x103650u)) {
        auto targetFn = runtime->lookupFunction(0x103650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103CCCu; }
        if (ctx->pc != 0x103CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_103650_0x103af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103CCCu; }
        if (ctx->pc != 0x103CCCu) { return; }
    }
    ctx->pc = 0x103CCCu;
    // 0x103ccc: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x103cccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x103cd0: 0x10c00021  beqz        $a2, . + 4 + (0x21 << 2)
    ctx->pc = 0x103CD0u;
    {
        const bool branch_taken_0x103cd0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x103CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103CD0u;
            // 0x103cd4: 0x111100  sll         $v0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103cd0) {
            ctx->pc = 0x103D58u;
            goto label_103d58;
        }
    }
    ctx->pc = 0x103CD8u;
    // 0x103cd8: 0xdba20010  lqc2        $vf2, 0x10($sp)
    ctx->pc = 0x103cd8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103cdc: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x103cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x103ce0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x103ce0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x103ce4: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x103ce4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x103ce8: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x103ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x103cec: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x103cecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x103cf0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x103cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x103cf4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x103cf4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x103cf8: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x103cf8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x103cfc: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x103cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x103d00: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x103d00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x103d04: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x103d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x103d08: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x103d08u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x103d0c: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x103d0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x103d10: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x103d10u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x103d14: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x103d14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x103d18: 0x8fa70100  lw          $a3, 0x100($sp)
    ctx->pc = 0x103d18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x103d1c: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x103d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x103d20: 0x152880  sll         $a1, $s5, 2
    ctx->pc = 0x103d20u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x103d24: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x103d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x103d28: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x103d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x103d2c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x103d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x103d30: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x103d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x103d34: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x103d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x103d38: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x103d38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x103d3c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x103d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x103d40: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x103d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x103d44: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x103d44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x103d48: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x103d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x103d4c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x103d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x103d50: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x103d50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x103d54: 0x0  nop
    ctx->pc = 0x103d54u;
    // NOP
label_103d58:
    // 0x103d58: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x103d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x103d5c: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x103d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x103d60: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x103d60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x103d64: 0x1440ff82  bnez        $v0, . + 4 + (-0x7E << 2)
    ctx->pc = 0x103D64u;
    {
        const bool branch_taken_0x103d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x103D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103D64u;
            // 0x103d68: 0x2838821  addu        $s1, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103d64) {
            ctx->pc = 0x103B70u;
            runtime->cooperativeGuestYield();
            goto label_103b70;
        }
    }
    ctx->pc = 0x103D6Cu;
    // 0x103d6c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x103d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_103d70:
    // 0x103d70: 0x29ea021  addu        $s4, $s4, $fp
    ctx->pc = 0x103d70u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 30)));
    // 0x103d74: 0x2deb021  addu        $s6, $s6, $fp
    ctx->pc = 0x103d74u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 30)));
    // 0x103d78: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x103d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x103d7c: 0x14a0ff74  bnez        $a1, . + 4 + (-0x8C << 2)
    ctx->pc = 0x103D7Cu;
    {
        const bool branch_taken_0x103d7c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x103D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103D7Cu;
            // 0x103d80: 0xafa50038  sw          $a1, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103d7c) {
            ctx->pc = 0x103B50u;
            runtime->cooperativeGuestYield();
            goto label_103b50;
        }
    }
    ctx->pc = 0x103D84u;
label_103d84:
    // 0x103d84: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x103d84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x103d88: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x103d88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x103d8c: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x103d8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x103d90: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x103d90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x103d94: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x103d94u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x103d98: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x103d98u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x103d9c: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x103d9cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x103da0: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x103da0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x103da4: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x103da4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x103da8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x103da8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x103dac: 0x3e00008  jr          $ra
    ctx->pc = 0x103DACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103DACu;
            // 0x103db0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x103B50u: goto label_103b50;
            case 0x103B70u: goto label_103b70;
            case 0x103CA8u: goto label_103ca8;
            case 0x103D58u: goto label_103d58;
            case 0x103D70u: goto label_103d70;
            case 0x103D84u: goto label_103d84;
            default: break;
        }
        return;
    }
    ctx->pc = 0x103DB4u;
    // 0x103db4: 0x0  nop
    ctx->pc = 0x103db4u;
    // NOP
}
