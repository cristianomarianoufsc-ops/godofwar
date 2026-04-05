#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EEA68
// Address: 0x1eea68 - 0x1eefd8
void sub_001EEA68_0x1eea68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EEA68_0x1eea68");
#endif

    ctx->pc = 0x1eea68u;

    // 0x1eea68: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x1eea68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x1eea6c: 0x7fb00190  sq          $s0, 0x190($sp)
    ctx->pc = 0x1eea6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 16));
    // 0x1eea70: 0x7fb10180  sq          $s1, 0x180($sp)
    ctx->pc = 0x1eea70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 17));
    // 0x1eea74: 0x7fb20170  sq          $s2, 0x170($sp)
    ctx->pc = 0x1eea74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 18));
    // 0x1eea78: 0xffbf0160  sd          $ra, 0x160($sp)
    ctx->pc = 0x1eea78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 31));
    // 0x1eea7c: 0xc07cdf2  jal         func_1F37C8
    ctx->pc = 0x1EEA7Cu;
    SET_GPR_U32(ctx, 31, 0x1EEA84u);
    ctx->pc = 0x1EEA80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEA7Cu;
            // 0x1eea80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F37C8u;
    if (runtime->hasFunction(0x1F37C8u)) {
        auto targetFn = runtime->lookupFunction(0x1F37C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEA84u; }
        if (ctx->pc != 0x1EEA84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F37C8_0x1f37c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEA84u; }
        if (ctx->pc != 0x1EEA84u) { return; }
    }
    ctx->pc = 0x1EEA84u;
    // 0x1eea84: 0x8e0207b0  lw          $v0, 0x7B0($s0)
    ctx->pc = 0x1eea84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1968)));
    // 0x1eea88: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EEA88u;
    {
        const bool branch_taken_0x1eea88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eea88) {
            ctx->pc = 0x1EEA8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEA88u;
            // 0x1eea8c: 0x8e020750  lw          $v0, 0x750($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EEAA0u;
            goto label_1eeaa0;
        }
    }
    ctx->pc = 0x1EEA90u;
    // 0x1eea90: 0xc07b9d6  jal         func_1EE758
    ctx->pc = 0x1EEA90u;
    SET_GPR_U32(ctx, 31, 0x1EEA98u);
    ctx->pc = 0x1EEA94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEA90u;
            // 0x1eea94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EE758u;
    if (runtime->hasFunction(0x1EE758u)) {
        auto targetFn = runtime->lookupFunction(0x1EE758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEA98u; }
        if (ctx->pc != 0x1EEA98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EE758_0x1ee758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEA98u; }
        if (ctx->pc != 0x1EEA98u) { return; }
    }
    ctx->pc = 0x1EEA98u;
    // 0x1eea98: 0x8e020750  lw          $v0, 0x750($s0)
    ctx->pc = 0x1eea98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
    // 0x1eea9c: 0x0  nop
    ctx->pc = 0x1eea9cu;
    // NOP
label_1eeaa0:
    // 0x1eeaa0: 0x24030170  addiu       $v1, $zero, 0x170
    ctx->pc = 0x1eeaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 368));
    // 0x1eeaa4: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1eeaa4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1eeaa8: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1eeaa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1eeaac: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x1eeaacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1eeab0: 0x8cc3e2a8  lw          $v1, -0x1D58($a2)
    ctx->pc = 0x1eeab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294959784)));
    // 0x1eeab4: 0xaca3e2ac  sw          $v1, -0x1D54($a1)
    ctx->pc = 0x1eeab4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294959788), GPR_U32(ctx, 3));
    // 0x1eeab8: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x1eeab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1eeabc: 0x8c4201d0  lw          $v0, 0x1D0($v0)
    ctx->pc = 0x1eeabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 464)));
    // 0x1eeac0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1eeac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eeac4: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x1eeac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1eeac8: 0x24510010  addiu       $s1, $v0, 0x10
    ctx->pc = 0x1eeac8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1eeacc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1eeaccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1eead0: 0xc07ba0e  jal         func_1EE838
    ctx->pc = 0x1EEAD0u;
    SET_GPR_U32(ctx, 31, 0x1EEAD8u);
    ctx->pc = 0x1EEAD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEAD0u;
            // 0x1eead4: 0xacc2e2a8  sw          $v0, -0x1D58($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4294959784), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EE838u;
    if (runtime->hasFunction(0x1EE838u)) {
        auto targetFn = runtime->lookupFunction(0x1EE838u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEAD8u; }
        if (ctx->pc != 0x1EEAD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EE838_0x1ee838(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEAD8u; }
        if (ctx->pc != 0x1EEAD8u) { return; }
    }
    ctx->pc = 0x1EEAD8u;
    // 0x1eead8: 0x4be2033c  vmove.xyzw  $vf2, $vf0
    ctx->pc = 0x1eead8u;
    ctx->vu0_vf[2] = ctx->vu0_vf[0];
    // 0x1eeadc: 0x4be3133d  vmr32.xyzw  $vf3, $vf2
    ctx->pc = 0x1eeadcu;
    ctx->vu0_vf[3] = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,1));
    // 0x1eeae0: 0x86030004  lh          $v1, 0x4($s0)
    ctx->pc = 0x1eeae0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1eeae4: 0x4be11b3d  vmr32.xyzw  $vf1, $vf3
    ctx->pc = 0x1eeae4u;
    ctx->vu0_vf[1] = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,1));
    // 0x1eeae8: 0xfba30020  sqc2        $vf3, 0x20($sp)
    ctx->pc = 0x1eeae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1eeaec: 0x4be40b3d  vmr32.xyzw  $vf4, $vf1
    ctx->pc = 0x1eeaecu;
    ctx->vu0_vf[4] = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,1));
    // 0x1eeaf0: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1eeaf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1eeaf4: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1eeaf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1eeaf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1eeaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eeafc: 0xfba20030  sqc2        $vf2, 0x30($sp)
    ctx->pc = 0x1eeafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1eeb00: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x1eeb00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1eeb04: 0xfba30050  sqc2        $vf3, 0x50($sp)
    ctx->pc = 0x1eeb04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1eeb08: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1eeb08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1eeb0c: 0x10620036  beq         $v1, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1EEB0Cu;
    {
        const bool branch_taken_0x1eeb0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EEB10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEB0Cu;
            // 0x1eeb10: 0xfba40070  sqc2        $vf4, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eeb0c) {
            ctx->pc = 0x1EEBE8u;
            goto label_1eebe8;
        }
    }
    ctx->pc = 0x1EEB14u;
    // 0x1eeb14: 0x86030006  lh          $v1, 0x6($s0)
    ctx->pc = 0x1eeb14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x1eeb18: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1eeb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1eeb1c: 0x10620032  beq         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1EEB1Cu;
    {
        const bool branch_taken_0x1eeb1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EEB20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEB1Cu;
            // 0x1eeb20: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eeb1c) {
            ctx->pc = 0x1EEBE8u;
            goto label_1eebe8;
        }
    }
    ctx->pc = 0x1EEB24u;
    // 0x1eeb24: 0x2442d9c0  addiu       $v0, $v0, -0x2640
    ctx->pc = 0x1eeb24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957504));
    // 0x1eeb28: 0x24520058  addiu       $s2, $v0, 0x58
    ctx->pc = 0x1eeb28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x1eeb2c: 0x86230008  lh          $v1, 0x8($s1)
    ctx->pc = 0x1eeb2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1eeb30: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EEB30u;
    {
        const bool branch_taken_0x1eeb30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEB34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEB30u;
            // 0x1eeb34: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eeb30) {
            ctx->pc = 0x1EEB48u;
            goto label_1eeb48;
        }
    }
    ctx->pc = 0x1EEB38u;
    // 0x1eeb38: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1eeb38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1eeb3c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EEB3Cu;
    {
        const bool branch_taken_0x1eeb3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1eeb3c) {
            ctx->pc = 0x1EEB4Cu;
            goto label_1eeb4c;
        }
    }
    ctx->pc = 0x1EEB44u;
    // 0x1eeb44: 0x0  nop
    ctx->pc = 0x1eeb44u;
    // NOP
label_1eeb48:
    // 0x1eeb48: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1eeb48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eeb4c:
    // 0x1eeb4c: 0x54800010  bnel        $a0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1EEB4Cu;
    {
        const bool branch_taken_0x1eeb4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eeb4c) {
            ctx->pc = 0x1EEB50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEB4Cu;
            // 0x1eeb50: 0x8623000a  lh          $v1, 0xA($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EEB90u;
            goto label_1eeb90;
        }
    }
    ctx->pc = 0x1EEB54u;
    // 0x1eeb54: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1eeb54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1eeb58: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x1eeb58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x1eeb5c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1eeb5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eeb60: 0xc44ce258  lwc1        $f12, -0x1DA8($v0)
    ctx->pc = 0x1eeb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294959704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1eeb64: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1eeb64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eeb68: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1eeb68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1eeb6c: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x1eeb6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x1eeb70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1eeb70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eeb74: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x1eeb74u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[1];
    // 0x1eeb78: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x1eeb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eeb7c: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x1eeb7cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1eeb80: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x1eeb80u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x1eeb84: 0xc061122  jal         func_184488
    ctx->pc = 0x1EEB84u;
    SET_GPR_U32(ctx, 31, 0x1EEB8Cu);
    ctx->pc = 0x1EEB88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEB84u;
            // 0x1eeb88: 0x460c0b02  mul.s       $f12, $f1, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x184488u;
    if (runtime->hasFunction(0x184488u)) {
        auto targetFn = runtime->lookupFunction(0x184488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEB8Cu; }
        if (ctx->pc != 0x1EEB8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184488_0x184488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEB8Cu; }
        if (ctx->pc != 0x1EEB8Cu) { return; }
    }
    ctx->pc = 0x1EEB8Cu;
    // 0x1eeb8c: 0x8623000a  lh          $v1, 0xA($s1)
    ctx->pc = 0x1eeb8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
label_1eeb90:
    // 0x1eeb90: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EEB90u;
    {
        const bool branch_taken_0x1eeb90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEB94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEB90u;
            // 0x1eeb94: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eeb90) {
            ctx->pc = 0x1EEBA4u;
            goto label_1eeba4;
        }
    }
    ctx->pc = 0x1EEB98u;
    // 0x1eeb98: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1eeb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1eeb9c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EEB9Cu;
    {
        const bool branch_taken_0x1eeb9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1eeb9c) {
            ctx->pc = 0x1EEBA8u;
            goto label_1eeba8;
        }
    }
    ctx->pc = 0x1EEBA4u;
label_1eeba4:
    // 0x1eeba4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1eeba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eeba8:
    // 0x1eeba8: 0x54800010  bnel        $a0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1EEBA8u;
    {
        const bool branch_taken_0x1eeba8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eeba8) {
            ctx->pc = 0x1EEBACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEBA8u;
            // 0x1eebac: 0x7ba50000  lq          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EEBECu;
            goto label_1eebec;
        }
    }
    ctx->pc = 0x1EEBB0u;
    // 0x1eebb0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1eebb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1eebb4: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x1eebb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x1eebb8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1eebb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eebbc: 0xc44ce25c  lwc1        $f12, -0x1DA4($v0)
    ctx->pc = 0x1eebbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294959708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1eebc0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1eebc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eebc4: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1eebc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1eebc8: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x1eebc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x1eebcc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1eebccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eebd0: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x1eebd0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[1];
    // 0x1eebd4: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x1eebd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eebd8: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x1eebd8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1eebdc: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x1eebdcu;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x1eebe0: 0xc06115e  jal         func_184578
    ctx->pc = 0x1EEBE0u;
    SET_GPR_U32(ctx, 31, 0x1EEBE8u);
    ctx->pc = 0x1EEBE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEBE0u;
            // 0x1eebe4: 0x460c0b02  mul.s       $f12, $f1, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x184578u;
    if (runtime->hasFunction(0x184578u)) {
        auto targetFn = runtime->lookupFunction(0x184578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEBE8u; }
        if (ctx->pc != 0x1EEBE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184578_0x184578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEBE8u; }
        if (ctx->pc != 0x1EEBE8u) { return; }
    }
    ctx->pc = 0x1EEBE8u;
label_1eebe8:
    // 0x1eebe8: 0x7ba50000  lq          $a1, 0x0($sp)
    ctx->pc = 0x1eebe8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1eebec:
    // 0x1eebec: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1eebecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1eebf0: 0x7ba60010  lq          $a2, 0x10($sp)
    ctx->pc = 0x1eebf0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eebf4: 0xc060fd8  jal         func_183F60
    ctx->pc = 0x1EEBF4u;
    SET_GPR_U32(ctx, 31, 0x1EEBFCu);
    ctx->pc = 0x1EEBF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEBF4u;
            // 0x1eebf8: 0x7ba70020  lq          $a3, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183F60u;
    if (runtime->hasFunction(0x183F60u)) {
        auto targetFn = runtime->lookupFunction(0x183F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEBFCu; }
        if (ctx->pc != 0x1EEBFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183f60_0x184210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEBFCu; }
        if (ctx->pc != 0x1EEBFCu) { return; }
    }
    ctx->pc = 0x1EEBFCu;
    // 0x1eebfc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1eebfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1eec00: 0x7a040760  lq          $a0, 0x760($s0)
    ctx->pc = 0x1eec00u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 1888)));
    // 0x1eec04: 0xc44ce260  lwc1        $f12, -0x1DA0($v0)
    ctx->pc = 0x1eec04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294959712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1eec08: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1eec08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1eec0c: 0xc061084  jal         func_184210
    ctx->pc = 0x1EEC0Cu;
    SET_GPR_U32(ctx, 31, 0x1EEC14u);
    ctx->pc = 0x1EEC10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEC0Cu;
            // 0x1eec10: 0x7ba50140  lq          $a1, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184210u;
    if (runtime->hasFunction(0x184210u)) {
        auto targetFn = runtime->lookupFunction(0x184210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEC14u; }
        if (ctx->pc != 0x1EEC14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184210_0x184210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEC14u; }
        if (ctx->pc != 0x1EEC14u) { return; }
    }
    ctx->pc = 0x1EEC14u;
    // 0x1eec14: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x1eec14u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1eec18: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1eec18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1eec1c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1eec1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1eec20: 0xfa040760  sqc2        $vf4, 0x760($s0)
    ctx->pc = 0x1eec20u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1888), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1eec24: 0x4be12058  vmulx.xyzw  $vf1, $vf4, $vf1x
    ctx->pc = 0x1eec24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1eec28: 0x4be120da  vmulz.xyzw  $vf3, $vf4, $vf1z
    ctx->pc = 0x1eec28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1eec2c: 0x4be121d9  vmuly.xyzw  $vf7, $vf4, $vf1y
    ctx->pc = 0x1eec2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1eec30: 0x4be12118  vmulx.xyzw  $vf4, $vf4, $vf1x
    ctx->pc = 0x1eec30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1eec34: 0x4a833842  vaddz.y     $vf1, $vf7, $vf3z
    ctx->pc = 0x1eec34u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1eec38: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1eec38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1eec3c: 0x48a24000  qmtc2.ni    $v0, $vf8
    ctx->pc = 0x1eec3cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1eec40: 0x4b014045  vsuby.x     $vf1, $vf8, $vf1y
    ctx->pc = 0x1eec40u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1eec44: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1eec44u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1eec48: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1eec48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eec4c: 0x4b033883  vaddw.x     $vf2, $vf7, $vf3w
    ctx->pc = 0x1eec4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1eec50: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x1eec50u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1eec54: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1eec54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eec58: 0x4b071847  vsubw.x     $vf1, $vf3, $vf7w
    ctx->pc = 0x1eec58u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1eec5c: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x1eec5cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1eec60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1eec60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eec64: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1eec64u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1eec68: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1eec68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eec6c: 0x70c21389  pcpyld      $v0, $a2, $v0
    ctx->pc = 0x1eec6cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x1eec70: 0x4b033847  vsubw.x     $vf1, $vf7, $vf3w
    ctx->pc = 0x1eec70u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1eec74: 0x70434cc8  ppacw       $t1, $v0, $v1
    ctx->pc = 0x1eec74u;
    SET_GPR_VEC(ctx, 9, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1eec78: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1eec78u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1eec7c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1eec7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eec80: 0x48a93000  qmtc2.ni    $t1, $vf6
    ctx->pc = 0x1eec80u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x1eec84: 0xfba60080  sqc2        $vf6, 0x80($sp)
    ctx->pc = 0x1eec84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1eec88: 0x4b032042  vaddz.x     $vf1, $vf4, $vf3z
    ctx->pc = 0x1eec88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1eec8c: 0x4b014044  vsubx.x     $vf1, $vf8, $vf1x
    ctx->pc = 0x1eec8cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1eec90: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1eec90u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1eec94: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1eec94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eec98: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x1eec98u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1eec9c: 0x4a841843  vaddw.y     $vf1, $vf3, $vf4w
    ctx->pc = 0x1eec9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1eeca0: 0x4b010041  vaddy.x     $vf1, $vf0, $vf1y
    ctx->pc = 0x1eeca0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1eeca4: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1eeca4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1eeca8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1eeca8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eecac: 0x4a841847  vsubw.y     $vf1, $vf3, $vf4w
    ctx->pc = 0x1eecacu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1eecb0: 0x70c21389  pcpyld      $v0, $a2, $v0
    ctx->pc = 0x1eecb0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x1eecb4: 0x704324c8  ppacw       $a0, $v0, $v1
    ctx->pc = 0x1eecb4u;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1eecb8: 0x4b0718c3  vaddw.x     $vf3, $vf3, $vf7w
    ctx->pc = 0x1eecb8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1eecbc: 0x48a42800  qmtc2.ni    $a0, $vf5
    ctx->pc = 0x1eecbcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1eecc0: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x1eecc0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1eecc4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1eecc4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eecc8: 0x4b010041  vaddy.x     $vf1, $vf0, $vf1y
    ctx->pc = 0x1eecc8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1eeccc: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1eecccu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1eecd0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1eecd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eecd4: 0x4b072101  vaddy.x     $vf4, $vf4, $vf7y
    ctx->pc = 0x1eecd4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1eecd8: 0xfba50090  sqc2        $vf5, 0x90($sp)
    ctx->pc = 0x1eecd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1eecdc: 0x4b044204  vsubx.x     $vf8, $vf8, $vf4x
    ctx->pc = 0x1eecdcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1eece0: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x1eece0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1eece4: 0xfba60000  sqc2        $vf6, 0x0($sp)
    ctx->pc = 0x1eece4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1eece8: 0x48244000  qmfc2.ni    $a0, $vf8
    ctx->pc = 0x1eece8u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x1eecec: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1eececu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eecf0: 0xfba50010  sqc2        $vf5, 0x10($sp)
    ctx->pc = 0x1eecf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1eecf4: 0x70c21389  pcpyld      $v0, $a2, $v0
    ctx->pc = 0x1eecf4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x1eecf8: 0x704334c8  ppacw       $a2, $v0, $v1
    ctx->pc = 0x1eecf8u;
    SET_GPR_VEC(ctx, 6, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1eecfc: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x1eecfcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1eed00: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1eed00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1eed04: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x1eed04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x1eed08: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x1eed08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1eed0c: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x1eed0cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1eed10: 0xd8470010  lqc2        $vf7, 0x10($v0)
    ctx->pc = 0x1eed10u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1eed14: 0xd8480020  lqc2        $vf8, 0x20($v0)
    ctx->pc = 0x1eed14u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1eed18: 0xd8420030  lqc2        $vf2, 0x30($v0)
    ctx->pc = 0x1eed18u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1eed1c: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1eed1cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1eed20: 0x4be619bc  vmulax.xyzw $ACC, $vf3, $vf6x
    ctx->pc = 0x1eed20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1eed24: 0x4be638bd  vmadday.xyzw $ACC, $vf7, $vf6y
    ctx->pc = 0x1eed24u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1eed28: 0x4be640be  vmaddaz.xyzw $ACC, $vf8, $vf6z
    ctx->pc = 0x1eed28u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1eed2c: 0x4be6118b  vmaddw.xyzw $vf6, $vf2, $vf6w
    ctx->pc = 0x1eed2cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1eed30: 0x4be519bc  vmulax.xyzw $ACC, $vf3, $vf5x
    ctx->pc = 0x1eed30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1eed34: 0xfba600f0  sqc2        $vf6, 0xF0($sp)
    ctx->pc = 0x1eed34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1eed38: 0x4be538bd  vmadday.xyzw $ACC, $vf7, $vf5y
    ctx->pc = 0x1eed38u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1eed3c: 0x4be540be  vmaddaz.xyzw $ACC, $vf8, $vf5z
    ctx->pc = 0x1eed3cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1eed40: 0x4be5114b  vmaddw.xyzw $vf5, $vf2, $vf5w
    ctx->pc = 0x1eed40u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1eed44: 0x4be119bc  vmulax.xyzw $ACC, $vf3, $vf1x
    ctx->pc = 0x1eed44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1eed48: 0xfba50100  sqc2        $vf5, 0x100($sp)
    ctx->pc = 0x1eed48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1eed4c: 0x4be138bd  vmadday.xyzw $ACC, $vf7, $vf1y
    ctx->pc = 0x1eed4cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1eed50: 0x4be140be  vmaddaz.xyzw $ACC, $vf8, $vf1z
    ctx->pc = 0x1eed50u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1eed54: 0x4be1104b  vmaddw.xyzw $vf1, $vf2, $vf1w
    ctx->pc = 0x1eed54u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1eed58: 0x4be419bc  vmulax.xyzw $ACC, $vf3, $vf4x
    ctx->pc = 0x1eed58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1eed5c: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x1eed5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1eed60: 0x4be438bd  vmadday.xyzw $ACC, $vf7, $vf4y
    ctx->pc = 0x1eed60u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1eed64: 0x4be440be  vmaddaz.xyzw $ACC, $vf8, $vf4z
    ctx->pc = 0x1eed64u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1eed68: 0x4be4108b  vmaddw.xyzw $vf2, $vf2, $vf4w
    ctx->pc = 0x1eed68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1eed6c: 0xfba20120  sqc2        $vf2, 0x120($sp)
    ctx->pc = 0x1eed6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1eed70: 0xfba600b0  sqc2        $vf6, 0xB0($sp)
    ctx->pc = 0x1eed70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1eed74: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1eed74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1eed78: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1eed78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1eed7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1eed7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eed80: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1eed80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eed84: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1eed84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1eed88: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1eed88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1eed8c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1eed8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1eed90: 0xc60307a0  lwc1        $f3, 0x7A0($s0)
    ctx->pc = 0x1eed90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1eed94: 0xc60107a4  lwc1        $f1, 0x7A4($s0)
    ctx->pc = 0x1eed94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eed98: 0xfba500c0  sqc2        $vf5, 0xC0($sp)
    ctx->pc = 0x1eed98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1eed9c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1eed9cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x1eeda0: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x1eeda0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1eeda4: 0xfba200e0  sqc2        $vf2, 0xE0($sp)
    ctx->pc = 0x1eeda4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1eeda8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1eeda8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1eedac: 0xc44000d0  lwc1        $f0, 0xD0($v0)
    ctx->pc = 0x1eedacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eedb0: 0x46011b00  add.s       $f12, $f3, $f1
    ctx->pc = 0x1eedb0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x1eedb4: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x1eedb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x1eedb8: 0x460c1034  c.lt.s      $f2, $f12
    ctx->pc = 0x1eedb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1eedbc: 0x0  nop
    ctx->pc = 0x1eedbcu;
    // NOP
    // 0x1eedc0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1EEDC0u;
    {
        const bool branch_taken_0x1eedc0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EEDC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEDC0u;
            // 0x1eedc4: 0xe60c07a0  swc1        $f12, 0x7A0($s0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1952), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eedc0) {
            ctx->pc = 0x1EEDE8u;
            goto label_1eede8;
        }
    }
    ctx->pc = 0x1EEDC8u;
    // 0x1eedc8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1eedc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1eedcc: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x1eedccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x1eedd0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EEDD0u;
    {
        const bool branch_taken_0x1eedd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEDD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEDD0u;
            // 0x1eedd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eedd0) {
            ctx->pc = 0x1EEDE8u;
            goto label_1eede8;
        }
    }
    ctx->pc = 0x1EEDD8u;
    // 0x1eedd8: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1eedd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1eeddc: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x1eeddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1eede0: 0xc07b930  jal         func_1EE4C0
    ctx->pc = 0x1EEDE0u;
    SET_GPR_U32(ctx, 31, 0x1EEDE8u);
    ctx->pc = 0x1EEDE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEDE0u;
            // 0x1eede4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EE4C0u;
    if (runtime->hasFunction(0x1EE4C0u)) {
        auto targetFn = runtime->lookupFunction(0x1EE4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEDE8u; }
        if (ctx->pc != 0x1EEDE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EE4C0_0x1ee4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEDE8u; }
        if (ctx->pc != 0x1EEDE8u) { return; }
    }
    ctx->pc = 0x1EEDE8u;
label_1eede8:
    // 0x1eede8: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x1eede8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1eedec: 0xae0007a4  sw          $zero, 0x7A4($s0)
    ctx->pc = 0x1eedecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1956), GPR_U32(ctx, 0));
    // 0x1eedf0: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x1eedf0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1eedf4: 0x3c08002a  lui         $t0, 0x2A
    ctx->pc = 0x1eedf4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)42 << 16));
    // 0x1eedf8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1eedf8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eedfc: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x1eedfcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
    // 0x1eee00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1eee00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eee04: 0xdd07bdf8  ld          $a3, -0x4208($t0)
    ctx->pc = 0x1eee04u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 4294950392)));
    // 0x1eee08: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1eee08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eee0c: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x1eee0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1eee10: 0x84c30060  lh          $v1, 0x60($a2)
    ctx->pc = 0x1eee10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 96)));
    // 0x1eee14: 0x64e70001  daddiu      $a3, $a3, 0x1
    ctx->pc = 0x1eee14u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)1);
    // 0x1eee18: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x1eee18u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
    // 0x1eee1c: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x1eee1cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x1eee20: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x1eee20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1eee24: 0xe3480a  movz        $t1, $a3, $v1
    ctx->pc = 0x1eee24u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 7));
    // 0x1eee28: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x1eee28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eee2c: 0x7cc20040  sq          $v0, 0x40($a2)
    ctx->pc = 0x1eee2cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 2));
    // 0x1eee30: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x1eee30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1eee34: 0x7cc20050  sq          $v0, 0x50($a2)
    ctx->pc = 0x1eee34u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 80), GPR_VEC(ctx, 2));
    // 0x1eee38: 0xfd07bdf8  sd          $a3, -0x4208($t0)
    ctx->pc = 0x1eee38u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 4294950392), GPR_U64(ctx, 7));
    // 0x1eee3c: 0xfcc30068  sd          $v1, 0x68($a2)
    ctx->pc = 0x1eee3cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 104), GPR_U64(ctx, 3));
    // 0x1eee40: 0xc08ed6e  jal         func_23B5B8
    ctx->pc = 0x1EEE40u;
    SET_GPR_U32(ctx, 31, 0x1EEE48u);
    ctx->pc = 0x1EEE44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEE40u;
            // 0x1eee44: 0xfcc000f0  sd          $zero, 0xF0($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 240), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B5B8u;
    if (runtime->hasFunction(0x23B5B8u)) {
        auto targetFn = runtime->lookupFunction(0x23B5B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEE48u; }
        if (ctx->pc != 0x1EEE48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23b5b8_0x23b5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEE48u; }
        if (ctx->pc != 0x1EEE48u) { return; }
    }
    ctx->pc = 0x1EEE48u;
    // 0x1eee48: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1eee48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1eee4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1eee4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eee50: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x1eee50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eee54: 0xac620100  sw          $v0, 0x100($v1)
    ctx->pc = 0x1eee54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 2));
    // 0x1eee58: 0xe46000f8  swc1        $f0, 0xF8($v1)
    ctx->pc = 0x1eee58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 248), bits); }
    // 0x1eee5c: 0x8e050910  lw          $a1, 0x910($s0)
    ctx->pc = 0x1eee5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2320)));
    // 0x1eee60: 0x4a00013  bltz        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1EEE60u;
    {
        const bool branch_taken_0x1eee60 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1EEE64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEE60u;
            // 0x1eee64: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eee60) {
            ctx->pc = 0x1EEEB0u;
            goto label_1eeeb0;
        }
    }
    ctx->pc = 0x1EEE68u;
    // 0x1eee68: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1eee68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eee6c: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x1EEE6Cu;
    SET_GPR_U32(ctx, 31, 0x1EEE74u);
    ctx->pc = 0x1EEE70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEE6Cu;
            // 0x1eee70: 0x8c446274  lw          $a0, 0x6274($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25204)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEE74u; }
        if (ctx->pc != 0x1EEE74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEE74u; }
        if (ctx->pc != 0x1EEE74u) { return; }
    }
    ctx->pc = 0x1EEE74u;
    // 0x1eee74: 0x8443005c  lh          $v1, 0x5C($v0)
    ctx->pc = 0x1eee74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x1eee78: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1eee78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1eee7c: 0x24a5e278  addiu       $a1, $a1, -0x1D88
    ctx->pc = 0x1eee7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959736));
    // 0x1eee80: 0xc44e0058  lwc1        $f14, 0x58($v0)
    ctx->pc = 0x1eee80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1eee84: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1eee84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1eee88: 0x78440020  lq          $a0, 0x20($v0)
    ctx->pc = 0x1eee88u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1eee8c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1eee8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1eee90: 0x78460040  lq          $a2, 0x40($v0)
    ctx->pc = 0x1eee90u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1eee94: 0x78450030  lq          $a1, 0x30($v0)
    ctx->pc = 0x1eee94u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1eee98: 0xdc670000  ld          $a3, 0x0($v1)
    ctx->pc = 0x1eee98u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1eee9c: 0xc44c0050  lwc1        $f12, 0x50($v0)
    ctx->pc = 0x1eee9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1eeea0: 0xc0587da  jal         func_161F68
    ctx->pc = 0x1EEEA0u;
    SET_GPR_U32(ctx, 31, 0x1EEEA8u);
    ctx->pc = 0x1EEEA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEEA0u;
            // 0x1eeea4: 0xc44d0054  lwc1        $f13, 0x54($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x161F68u;
    if (runtime->hasFunction(0x161F68u)) {
        auto targetFn = runtime->lookupFunction(0x161F68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEEA8u; }
        if (ctx->pc != 0x1EEEA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_161f68_0x1620a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEEA8u; }
        if (ctx->pc != 0x1EEEA8u) { return; }
    }
    ctx->pc = 0x1EEEA8u;
    // 0x1eeea8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1EEEA8u;
    {
        const bool branch_taken_0x1eeea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEEACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEEA8u;
            // 0x1eeeac: 0x8e020180  lw          $v0, 0x180($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eeea8) {
            ctx->pc = 0x1EEF08u;
            goto label_1eef08;
        }
    }
    ctx->pc = 0x1EEEB0u;
label_1eeeb0:
    // 0x1eeeb0: 0x8e030180  lw          $v1, 0x180($s0)
    ctx->pc = 0x1eeeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x1eeeb4: 0x8c446274  lw          $a0, 0x6274($v0)
    ctx->pc = 0x1eeeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25204)));
    // 0x1eeeb8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1eeeb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eeebc: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x1eeebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x1eeec0: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x1eeec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1eeec4: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x1EEEC4u;
    SET_GPR_U32(ctx, 31, 0x1EEECCu);
    ctx->pc = 0x1EEEC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEEC4u;
            // 0x1eeec8: 0x8c450050  lw          $a1, 0x50($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEECCu; }
        if (ctx->pc != 0x1EEECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEECCu; }
        if (ctx->pc != 0x1EEECCu) { return; }
    }
    ctx->pc = 0x1EEECCu;
    // 0x1eeecc: 0x8443005c  lh          $v1, 0x5C($v0)
    ctx->pc = 0x1eeeccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x1eeed0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1eeed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1eeed4: 0x8e080180  lw          $t0, 0x180($s0)
    ctx->pc = 0x1eeed4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x1eeed8: 0x2442e278  addiu       $v0, $v0, -0x1D88
    ctx->pc = 0x1eeed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959736));
    // 0x1eeedc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1eeedcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1eeee0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1eeee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1eeee4: 0xc50e00e0  lwc1        $f14, 0xE0($t0)
    ctx->pc = 0x1eeee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1eeee8: 0xdc670000  ld          $a3, 0x0($v1)
    ctx->pc = 0x1eeee8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1eeeec: 0x790400a0  lq          $a0, 0xA0($t0)
    ctx->pc = 0x1eeeecu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 8), 160)));
    // 0x1eeef0: 0x790500b0  lq          $a1, 0xB0($t0)
    ctx->pc = 0x1eeef0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 8), 176)));
    // 0x1eeef4: 0x790600c0  lq          $a2, 0xC0($t0)
    ctx->pc = 0x1eeef4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 8), 192)));
    // 0x1eeef8: 0xc50c00d8  lwc1        $f12, 0xD8($t0)
    ctx->pc = 0x1eeef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1eeefc: 0xc0587da  jal         func_161F68
    ctx->pc = 0x1EEEFCu;
    SET_GPR_U32(ctx, 31, 0x1EEF04u);
    ctx->pc = 0x1EEF00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEEFCu;
            // 0x1eef00: 0xc50d00dc  lwc1        $f13, 0xDC($t0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x161F68u;
    if (runtime->hasFunction(0x161F68u)) {
        auto targetFn = runtime->lookupFunction(0x161F68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEF04u; }
        if (ctx->pc != 0x1EEF04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_161f68_0x1620a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEF04u; }
        if (ctx->pc != 0x1EEF04u) { return; }
    }
    ctx->pc = 0x1EEF04u;
    // 0x1eef04: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x1eef04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
label_1eef08:
    // 0x1eef08: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1eef08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1eef0c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1eef0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eef10: 0xc44000e4  lwc1        $f0, 0xE4($v0)
    ctx->pc = 0x1eef10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eef14: 0xd8440070  lqc2        $vf4, 0x70($v0)
    ctx->pc = 0x1eef14u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x1eef18: 0xdba100e0  lqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x1eef18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1eef1c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1eef1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1eef20: 0x4be4086c  vsub.xyzw   $vf1, $vf1, $vf4
    ctx->pc = 0x1eef20u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1eef24: 0x4be108ea  vmul.xyzw   $vf3, $vf1, $vf1
    ctx->pc = 0x1eef24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1eef28: 0x4b031881  vaddy.x     $vf2, $vf3, $vf3y
    ctx->pc = 0x1eef28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1eef2c: 0x4b031082  vaddz.x     $vf2, $vf2, $vf3z
    ctx->pc = 0x1eef2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1eef30: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1eef30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1eef34: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1eef34u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1eef38: 0x4a0003bf  vwaitq
    ctx->pc = 0x1eef38u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1eef3c: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x1eef3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1eef40: 0x4a0002ff  vnop
    ctx->pc = 0x1eef40u;
    // NOP operation, no action needed for VU0
    // 0x1eef44: 0x4a0002ff  vnop
    ctx->pc = 0x1eef44u;
    // NOP operation, no action needed for VU0
    // 0x1eef48: 0x48a31800  qmtc2.ni    $v1, $vf3
    ctx->pc = 0x1eef48u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1eef4c: 0xfba10130  sqc2        $vf1, 0x130($sp)
    ctx->pc = 0x1eef4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1eef50: 0x4be30858  vmulx.xyzw  $vf1, $vf1, $vf3x
    ctx->pc = 0x1eef50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1eef54: 0x4be12128  vadd.xyzw   $vf4, $vf4, $vf1
    ctx->pc = 0x1eef54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1eef58: 0x4a24033c  vmove.w     $vf4, $vf0
    ctx->pc = 0x1eef58u;
    ctx->vu0_vf[4] = ctx->vu0_vf[0];
    // 0x1eef5c: 0xfba400e0  sqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x1eef5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1eef60: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x1eef60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1eef64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1eef64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eef68: 0x8e0308c8  lw          $v1, 0x8C8($s0)
    ctx->pc = 0x1eef68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2248)));
    // 0x1eef6c: 0x7c620010  sq          $v0, 0x10($v1)
    ctx->pc = 0x1eef6cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 2));
    // 0x1eef70: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x1eef70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1eef74: 0x7c620020  sq          $v0, 0x20($v1)
    ctx->pc = 0x1eef74u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 2));
    // 0x1eef78: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x1eef78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1eef7c: 0x7c620030  sq          $v0, 0x30($v1)
    ctx->pc = 0x1eef7cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 2));
    // 0x1eef80: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x1eef80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1eef84: 0x7c620040  sq          $v0, 0x40($v1)
    ctx->pc = 0x1eef84u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), GPR_VEC(ctx, 2));
    // 0x1eef88: 0x8e0208c8  lw          $v0, 0x8C8($s0)
    ctx->pc = 0x1eef88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2248)));
    // 0x1eef8c: 0xc07bbf6  jal         func_1EEFD8
    ctx->pc = 0x1EEF8Cu;
    SET_GPR_U32(ctx, 31, 0x1EEF94u);
    ctx->pc = 0x1EEF90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEF8Cu;
            // 0x1eef90: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EEFD8u;
    if (runtime->hasFunction(0x1EEFD8u)) {
        auto targetFn = runtime->lookupFunction(0x1EEFD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEF94u; }
        if (ctx->pc != 0x1EEF94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EEFD8_0x1eefd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEF94u; }
        if (ctx->pc != 0x1EEF94u) { return; }
    }
    ctx->pc = 0x1EEF94u;
    // 0x1eef94: 0x8e0207b0  lw          $v0, 0x7B0($s0)
    ctx->pc = 0x1eef94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1968)));
    // 0x1eef98: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EEF98u;
    {
        const bool branch_taken_0x1eef98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eef98) {
            ctx->pc = 0x1EEF9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEF98u;
            // 0x1eef9c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EEFB8u;
            goto label_1eefb8;
        }
    }
    ctx->pc = 0x1EEFA0u;
    // 0x1eefa0: 0x56400005  bnel        $s2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EEFA0u;
    {
        const bool branch_taken_0x1eefa0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eefa0) {
            ctx->pc = 0x1EEFA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEFA0u;
            // 0x1eefa4: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EEFB8u;
            goto label_1eefb8;
        }
    }
    ctx->pc = 0x1EEFA8u;
    // 0x1eefa8: 0xc07b9d6  jal         func_1EE758
    ctx->pc = 0x1EEFA8u;
    SET_GPR_U32(ctx, 31, 0x1EEFB0u);
    ctx->pc = 0x1EEFACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEFA8u;
            // 0x1eefac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EE758u;
    if (runtime->hasFunction(0x1EE758u)) {
        auto targetFn = runtime->lookupFunction(0x1EE758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEFB0u; }
        if (ctx->pc != 0x1EEFB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EE758_0x1ee758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEFB0u; }
        if (ctx->pc != 0x1EEFB0u) { return; }
    }
    ctx->pc = 0x1EEFB0u;
    // 0x1eefb0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1eefb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1eefb4: 0x0  nop
    ctx->pc = 0x1eefb4u;
    // NOP
label_1eefb8:
    // 0x1eefb8: 0xae0007b0  sw          $zero, 0x7B0($s0)
    ctx->pc = 0x1eefb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1968), GPR_U32(ctx, 0));
    // 0x1eefbc: 0x7bb00190  lq          $s0, 0x190($sp)
    ctx->pc = 0x1eefbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1eefc0: 0x7bb10180  lq          $s1, 0x180($sp)
    ctx->pc = 0x1eefc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1eefc4: 0x7bb20170  lq          $s2, 0x170($sp)
    ctx->pc = 0x1eefc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1eefc8: 0xdfbf0160  ld          $ra, 0x160($sp)
    ctx->pc = 0x1eefc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1eefcc: 0x3e00008  jr          $ra
    ctx->pc = 0x1EEFCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EEFD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEFCCu;
            // 0x1eefd0: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EEAA0u: goto label_1eeaa0;
            case 0x1EEB48u: goto label_1eeb48;
            case 0x1EEB4Cu: goto label_1eeb4c;
            case 0x1EEB90u: goto label_1eeb90;
            case 0x1EEBA4u: goto label_1eeba4;
            case 0x1EEBA8u: goto label_1eeba8;
            case 0x1EEBE8u: goto label_1eebe8;
            case 0x1EEBECu: goto label_1eebec;
            case 0x1EEDE8u: goto label_1eede8;
            case 0x1EEEB0u: goto label_1eeeb0;
            case 0x1EEF08u: goto label_1eef08;
            case 0x1EEFB8u: goto label_1eefb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EEFD4u;
    // 0x1eefd4: 0x0  nop
    ctx->pc = 0x1eefd4u;
    // NOP
}
