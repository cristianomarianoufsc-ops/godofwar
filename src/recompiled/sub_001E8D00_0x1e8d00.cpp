#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E8D00
// Address: 0x1e8d00 - 0x1e8e08
void sub_001E8D00_0x1e8d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8D00_0x1e8d00");
#endif

    ctx->pc = 0x1e8d00u;

    // 0x1e8d00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e8d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e8d04: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1e8d04u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e8d08: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e8d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e8d0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e8d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e8d10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e8d10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8d14: 0xae000234  sw          $zero, 0x234($s0)
    ctx->pc = 0x1e8d14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 564), GPR_U32(ctx, 0));
    // 0x1e8d18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e8d18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8d1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e8d1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8d20: 0xae000240  sw          $zero, 0x240($s0)
    ctx->pc = 0x1e8d20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 0));
    // 0x1e8d24: 0xc090aa2  jal         func_242A88
    ctx->pc = 0x1E8D24u;
    SET_GPR_U32(ctx, 31, 0x1E8D2Cu);
    ctx->pc = 0x1E8D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8D24u;
            // 0x1e8d28: 0xfa010210  sqc2        $vf1, 0x210($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 528), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A88u;
    if (runtime->hasFunction(0x242A88u)) {
        auto targetFn = runtime->lookupFunction(0x242A88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8D2Cu; }
        if (ctx->pc != 0x1E8D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a88_0x242a98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8D2Cu; }
        if (ctx->pc != 0x1E8D2Cu) { return; }
    }
    ctx->pc = 0x1E8D2Cu;
    // 0x1e8d2c: 0x8e0202dc  lw          $v0, 0x2DC($s0)
    ctx->pc = 0x1e8d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
    // 0x1e8d30: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1e8d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1e8d34: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E8D34u;
    {
        const bool branch_taken_0x1e8d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8d34) {
            ctx->pc = 0x1E8D38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8D34u;
            // 0x1e8d38: 0x8e0402d8  lw          $a0, 0x2D8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E8D50u;
            goto label_1e8d50;
        }
    }
    ctx->pc = 0x1E8D3Cu;
    // 0x1e8d3c: 0xc0728fc  jal         func_1CA3F0
    ctx->pc = 0x1E8D3Cu;
    SET_GPR_U32(ctx, 31, 0x1E8D44u);
    ctx->pc = 0x1E8D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8D3Cu;
            // 0x1e8d40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA3F0u;
    if (runtime->hasFunction(0x1CA3F0u)) {
        auto targetFn = runtime->lookupFunction(0x1CA3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8D44u; }
        if (ctx->pc != 0x1E8D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA3F0_0x1ca3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8D44u; }
        if (ctx->pc != 0x1E8D44u) { return; }
    }
    ctx->pc = 0x1E8D44u;
    // 0x1e8d44: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1E8D44u;
    {
        const bool branch_taken_0x1e8d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8D44u;
            // 0x1e8d48: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8d44) {
            ctx->pc = 0x1E8DF8u;
            goto label_1e8df8;
        }
    }
    ctx->pc = 0x1E8D4Cu;
    // 0x1e8d4c: 0x0  nop
    ctx->pc = 0x1e8d4cu;
    // NOP
label_1e8d50:
    // 0x1e8d50: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1e8d50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1e8d54: 0x7a020260  lq          $v0, 0x260($s0)
    ctx->pc = 0x1e8d54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1e8d58: 0x3463fff7  ori         $v1, $v1, 0xFFF7
    ctx->pc = 0x1e8d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65527);
    // 0x1e8d5c: 0x8e070174  lw          $a3, 0x174($s0)
    ctx->pc = 0x1e8d5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1e8d60: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x1e8d60u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1e8d64: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e8d64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e8d68: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x1e8d68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x1e8d6c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x1e8d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x1e8d70: 0x3c01c180  lui         $at, 0xC180
    ctx->pc = 0x1e8d70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49536 << 16));
    // 0x1e8d74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e8d74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e8d78: 0x34a5ffef  ori         $a1, $a1, 0xFFEF
    ctx->pc = 0x1e8d78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65519);
    // 0x1e8d7c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1e8d7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1e8d80: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1e8d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1e8d84: 0x34c6f800  ori         $a2, $a2, 0xF800
    ctx->pc = 0x1e8d84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)63488);
    // 0x1e8d88: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x1e8d88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x1e8d8c: 0xe63824  and         $a3, $a3, $a2
    ctx->pc = 0x1e8d8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
    // 0x1e8d90: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x1e8d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x1e8d94: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e8d94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8d98: 0x34e70004  ori         $a3, $a3, 0x4
    ctx->pc = 0x1e8d98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)4);
    // 0x1e8d9c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x1e8d9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1e8da0: 0xae070174  sw          $a3, 0x174($s0)
    ctx->pc = 0x1e8da0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 7));
    // 0x1e8da4: 0xae0402d8  sw          $a0, 0x2D8($s0)
    ctx->pc = 0x1e8da4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 4));
    // 0x1e8da8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e8da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8dac: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1E8DACu;
    {
        const bool branch_taken_0x1e8dac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E8DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8DACu;
            // 0x1e8db0: 0xae0002b8  sw          $zero, 0x2B8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 696), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8dac) {
            ctx->pc = 0x1E8DCCu;
            goto label_1e8dcc;
        }
    }
    ctx->pc = 0x1E8DB4u;
    // 0x1e8db4: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1e8db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1e8db8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e8db8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e8dbc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e8dbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8dc0: 0x0  nop
    ctx->pc = 0x1e8dc0u;
    // NOP
    // 0x1e8dc4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1E8DC4u;
    {
        const bool branch_taken_0x1e8dc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e8dc4) {
            ctx->pc = 0x1E8DC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8DC4u;
            // 0x1e8dc8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E8DCCu;
            goto label_1e8dcc;
        }
    }
    ctx->pc = 0x1E8DCCu;
label_1e8dcc:
    // 0x1e8dcc: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1e8dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1e8dd0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1e8dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1e8dd4: 0x8e030328  lw          $v1, 0x328($s0)
    ctx->pc = 0x1e8dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 808)));
    // 0x1e8dd8: 0x85100b  movn        $v0, $a0, $a1
    ctx->pc = 0x1e8dd8u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1e8ddc: 0xa46200e0  sh          $v0, 0xE0($v1)
    ctx->pc = 0x1e8ddcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 224), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e8de0: 0x8e020320  lw          $v0, 0x320($s0)
    ctx->pc = 0x1e8de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x1e8de4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1e8de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e8de8: 0xc44000c4  lwc1        $f0, 0xC4($v0)
    ctx->pc = 0x1e8de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8dec: 0xe6000164  swc1        $f0, 0x164($s0)
    ctx->pc = 0x1e8decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 356), bits); }
    // 0x1e8df0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e8df0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8df4: 0x0  nop
    ctx->pc = 0x1e8df4u;
    // NOP
label_1e8df8:
    // 0x1e8df8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e8df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8dfc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8DFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8DFCu;
            // 0x1e8e00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E8D50u: goto label_1e8d50;
            case 0x1E8DCCu: goto label_1e8dcc;
            case 0x1E8DF8u: goto label_1e8df8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E8E04u;
    // 0x1e8e04: 0x0  nop
    ctx->pc = 0x1e8e04u;
    // NOP
}
