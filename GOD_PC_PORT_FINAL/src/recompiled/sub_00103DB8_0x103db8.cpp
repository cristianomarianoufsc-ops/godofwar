#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00103DB8
// Address: 0x103db8 - 0x104708
void sub_00103DB8_0x103db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00103DB8_0x103db8");
#endif

    ctx->pc = 0x103db8u;

    // 0x103db8: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x103db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x103dbc: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x103dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x103dc0: 0x7fb001b0  sq          $s0, 0x1B0($sp)
    ctx->pc = 0x103dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 16));
    // 0x103dc4: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x103dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x103dc8: 0x7fb101a0  sq          $s1, 0x1A0($sp)
    ctx->pc = 0x103dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 17));
    // 0x103dcc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x103dccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103dd0: 0x7fb40170  sq          $s4, 0x170($sp)
    ctx->pc = 0x103dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 20));
    // 0x103dd4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x103dd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103dd8: 0x7fb70140  sq          $s7, 0x140($sp)
    ctx->pc = 0x103dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 23));
    // 0x103ddc: 0x26230090  addiu       $v1, $s1, 0x90
    ctx->pc = 0x103ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x103de0: 0x7fbe0130  sq          $fp, 0x130($sp)
    ctx->pc = 0x103de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 30));
    // 0x103de4: 0x7fb20190  sq          $s2, 0x190($sp)
    ctx->pc = 0x103de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 18));
    // 0x103de8: 0x7fb30180  sq          $s3, 0x180($sp)
    ctx->pc = 0x103de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 19));
    // 0x103dec: 0x7fb50160  sq          $s5, 0x160($sp)
    ctx->pc = 0x103decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 21));
    // 0x103df0: 0x7fb60150  sq          $s6, 0x150($sp)
    ctx->pc = 0x103df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 22));
    // 0x103df4: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x103df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x103df8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x103df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x103dfc: 0xafa3008c  sw          $v1, 0x8C($sp)
    ctx->pc = 0x103dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 3));
    // 0x103e00: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x103e00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    // 0x103e04: 0x245effff  addiu       $fp, $v0, -0x1
    ctx->pc = 0x103e04u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x103e08: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x103e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x103e0c: 0x8e240690  lw          $a0, 0x690($s1)
    ctx->pc = 0x103e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
    // 0x103e10: 0xafa40088  sw          $a0, 0x88($sp)
    ctx->pc = 0x103e10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 4));
    // 0x103e14: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x103e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x103e18: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x103e18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x103e1c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x103e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x103e20: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x103e20u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x103e24: 0xac44c300  sw          $a0, -0x3D00($v0)
    ctx->pc = 0x103e24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294951680), GPR_U32(ctx, 4));
    // 0x103e28: 0xc5a021  addu        $s4, $a2, $a1
    ctx->pc = 0x103e28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x103e2c: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x103e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x103e30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x103e30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103e34: 0xc0a250f  jal         func_28943C
    ctx->pc = 0x103E34u;
    SET_GPR_U32(ctx, 31, 0x103E3Cu);
    ctx->pc = 0x103E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103E34u;
            // 0x103e38: 0x2477ffff  addiu       $s7, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28943Cu;
    if (runtime->hasFunction(0x28943Cu)) {
        auto targetFn = runtime->lookupFunction(0x28943Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103E3Cu; }
        if (ctx->pc != 0x103E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28943c_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103E3Cu; }
        if (ctx->pc != 0x103E3Cu) { return; }
    }
    ctx->pc = 0x103E3Cu;
    // 0x103e3c: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x103e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x103e40: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x103e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103e44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x103e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103e48: 0xc0a250f  jal         func_28943C
    ctx->pc = 0x103E48u;
    SET_GPR_U32(ctx, 31, 0x103E50u);
    ctx->pc = 0x103E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103E48u;
            // 0x103e4c: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28943Cu;
    if (runtime->hasFunction(0x28943Cu)) {
        auto targetFn = runtime->lookupFunction(0x28943Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103E50u; }
        if (ctx->pc != 0x103E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28943c_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103E50u; }
        if (ctx->pc != 0x103E50u) { return; }
    }
    ctx->pc = 0x103E50u;
    // 0x103e50: 0x5ae001fd  blezl       $s7, . + 4 + (0x1FD << 2)
    ctx->pc = 0x103E50u;
    {
        const bool branch_taken_0x103e50 = (GPR_S32(ctx, 23) <= 0);
        if (branch_taken_0x103e50) {
            ctx->pc = 0x103E54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x103E50u;
            // 0x103e54: 0xc621005c  lwc1        $f1, 0x5C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x104648u;
            goto label_104648;
        }
    }
    ctx->pc = 0x103E58u;
    // 0x103e58: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x103e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
    // 0x103e5c: 0x0  nop
    ctx->pc = 0x103e5cu;
    // NOP
label_103e60:
    // 0x103e60: 0x26e2ffff  addiu       $v0, $s7, -0x1
    ctx->pc = 0x103e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x103e64: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x103e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x103e68: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x103e68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x103e6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x103e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x103e70: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x103e70u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x103e74: 0x8fa800d4  lw          $t0, 0xD4($sp)
    ctx->pc = 0x103e74u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x103e78: 0x2051021  addu        $v0, $s0, $a1
    ctx->pc = 0x103e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x103e7c: 0xafa50094  sw          $a1, 0x94($sp)
    ctx->pc = 0x103e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 5));
    // 0x103e80: 0x8fa50084  lw          $a1, 0x84($sp)
    ctx->pc = 0x103e80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x103e84: 0x81940  sll         $v1, $t0, 5
    ctx->pc = 0x103e84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x103e88: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x103e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x103e8c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x103e8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103e90: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x103e90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x103e94: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x103e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x103e98: 0xafa30090  sw          $v1, 0x90($sp)
    ctx->pc = 0x103e98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
    // 0x103e9c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x103e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x103ea0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x103ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x103ea4: 0x1bc001df  blez        $fp, . + 4 + (0x1DF << 2)
    ctx->pc = 0x103EA4u;
    {
        const bool branch_taken_0x103ea4 = (GPR_S32(ctx, 30) <= 0);
        ctx->pc = 0x103EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103EA4u;
            // 0x103ea8: 0xafa20098  sw          $v0, 0x98($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103ea4) {
            ctx->pc = 0x104624u;
            goto label_104624;
        }
    }
    ctx->pc = 0x103EACu;
    // 0x103eac: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x103eacu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103eb0: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x103eb0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103eb4: 0x0  nop
    ctx->pc = 0x103eb4u;
    // NOP
label_103eb8:
    // 0x103eb8: 0x27c2ffff  addiu       $v0, $fp, -0x1
    ctx->pc = 0x103eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x103ebc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x103ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x103ec0: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x103ec0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x103ec4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x103ec4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x103ec8: 0x62400b  movn        $t0, $v1, $v0
    ctx->pc = 0x103ec8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
    // 0x103ecc: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x103eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x103ed0: 0x2481021  addu        $v0, $s2, $t0
    ctx->pc = 0x103ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
    // 0x103ed4: 0xafa8009c  sw          $t0, 0x9C($sp)
    ctx->pc = 0x103ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 8));
    // 0x103ed8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x103ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x103edc: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x103edcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x103ee0: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x103ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x103ee4: 0xdac60000  lqc2        $vf6, 0x0($s6)
    ctx->pc = 0x103ee4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x103ee8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x103ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x103eec: 0xd8680000  lqc2        $vf8, 0x0($v1)
    ctx->pc = 0x103eecu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x103ef0: 0xd8490000  lqc2        $vf9, 0x0($v0)
    ctx->pc = 0x103ef0u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x103ef4: 0x4be640ec  vsub.xyzw   $vf3, $vf8, $vf6
    ctx->pc = 0x103ef4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x103ef8: 0xdaaa0000  lqc2        $vf10, 0x0($s5)
    ctx->pc = 0x103ef8u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x103efc: 0x4be6506c  vsub.xyzw   $vf1, $vf10, $vf6
    ctx->pc = 0x103efcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x103f00: 0x4bc11afe  vopmula.xyz $ACC, $vf3, $vf1
    ctx->pc = 0x103f00u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]);
    // 0x103f04: 0x4bc3086e  vopmsub.xyz $vf1, $vf1, $vf3
    ctx->pc = 0x103f04u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x103f08: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x103f08u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x103f0c: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x103f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x103f10: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x103f10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x103f14: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x103f14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x103f18: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x103f18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x103f1c: 0xdba200a0  lqc2        $vf2, 0xA0($sp)
    ctx->pc = 0x103f1cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x103f20: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x103f20u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x103f24: 0x4a0003bf  vwaitq
    ctx->pc = 0x103f24u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x103f28: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x103f28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x103f2c: 0x4a0002ff  vnop
    ctx->pc = 0x103f2cu;
    // NOP operation, no action needed for VU0
    // 0x103f30: 0x4a0002ff  vnop
    ctx->pc = 0x103f30u;
    // NOP operation, no action needed for VU0
    // 0x103f34: 0x4be1133c  vmove.xyzw  $vf1, $vf2
    ctx->pc = 0x103f34u;
    ctx->vu0_vf[1] = ctx->vu0_vf[2];
    // 0x103f38: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x103f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x103f3c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x103f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x103f40: 0xdba400a0  lqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x103f40u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x103f44: 0x4be620aa  vmul.xyzw   $vf2, $vf4, $vf6
    ctx->pc = 0x103f44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x103f48: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x103f48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x103f4c: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x103f4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x103f50: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x103f50u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x103f54: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x103f54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103f58: 0x4be648ac  vsub.xyzw   $vf2, $vf9, $vf6
    ctx->pc = 0x103f58u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[9], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x103f5c: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x103f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x103f60: 0x4bc312fe  vopmula.xyz $ACC, $vf2, $vf3
    ctx->pc = 0x103f60u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[3]);
    // 0x103f64: 0x4bc218ae  vopmsub.xyz $vf2, $vf3, $vf2
    ctx->pc = 0x103f64u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x103f68: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x103f68u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x103f6c: 0xfba200c0  sqc2        $vf2, 0xC0($sp)
    ctx->pc = 0x103f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x103f70: 0xdba100c0  lqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x103f70u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x103f74: 0x4be110aa  vmul.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x103f74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x103f78: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x103f78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x103f7c: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x103f7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x103f80: 0xdba200c0  lqc2        $vf2, 0xC0($sp)
    ctx->pc = 0x103f80u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x103f84: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x103f84u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x103f88: 0x4a0003bf  vwaitq
    ctx->pc = 0x103f88u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x103f8c: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x103f8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x103f90: 0x4a0002ff  vnop
    ctx->pc = 0x103f90u;
    // NOP operation, no action needed for VU0
    // 0x103f94: 0x4a0002ff  vnop
    ctx->pc = 0x103f94u;
    // NOP operation, no action needed for VU0
    // 0x103f98: 0x4be1133c  vmove.xyzw  $vf1, $vf2
    ctx->pc = 0x103f98u;
    ctx->vu0_vf[1] = ctx->vu0_vf[2];
    // 0x103f9c: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x103f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x103fa0: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x103fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x103fa4: 0xdba300c0  lqc2        $vf3, 0xC0($sp)
    ctx->pc = 0x103fa4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x103fa8: 0x4be618aa  vmul.xyzw   $vf2, $vf3, $vf6
    ctx->pc = 0x103fa8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x103fac: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x103facu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x103fb0: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x103fb0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x103fb4: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x103fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x103fb8: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x103fb8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x103fbc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x103fbcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103fc0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x103fc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103fc4: 0x18800192  blez        $a0, . + 4 + (0x192 << 2)
    ctx->pc = 0x103FC4u;
    {
        const bool branch_taken_0x103fc4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x103FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103FC4u;
            // 0x103fc8: 0xafa300d0  sw          $v1, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103fc4) {
            ctx->pc = 0x104610u;
            goto label_104610;
        }
    }
    ctx->pc = 0x103FCCu;
    // 0x103fcc: 0x8fa5008c  lw          $a1, 0x8C($sp)
    ctx->pc = 0x103fccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_103fd0:
    // 0x103fd0: 0x131180  sll         $v0, $s3, 6
    ctx->pc = 0x103fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x103fd4: 0xdba100a0  lqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x103fd4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x103fd8: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x103fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x103fdc: 0xd8870000  lqc2        $vf7, 0x0($a0)
    ctx->pc = 0x103fdcu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x103fe0: 0xc4810024  lwc1        $f1, 0x24($a0)
    ctx->pc = 0x103fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x103fe4: 0x4be708aa  vmul.xyzw   $vf2, $vf1, $vf7
    ctx->pc = 0x103fe4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x103fe8: 0x8c8a0034  lw          $t2, 0x34($a0)
    ctx->pc = 0x103fe8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x103fec: 0xc48a0028  lwc1        $f10, 0x28($a0)
    ctx->pc = 0x103fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x103ff0: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x103ff0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x103ff4: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x103ff4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x103ff8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x103ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x103ffc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x103ffcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x104000: 0x4b020844  vsubx.x     $vf1, $vf1, $vf2x
    ctx->pc = 0x104000u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104004: 0x4be109fd  vabs.xyzw   $vf1, $vf1
    ctx->pc = 0x104004u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104008: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x104008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10400c: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x10400cu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x104010: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x104010u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x104014: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x104014u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x104018: 0x0  nop
    ctx->pc = 0x104018u;
    // NOP
    // 0x10401c: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x10401Cu;
    {
        const bool branch_taken_0x10401c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10401c) {
            ctx->pc = 0x104020u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10401Cu;
            // 0x104020: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x104028u;
            goto label_104028;
        }
    }
    ctx->pc = 0x104024u;
    // 0x104024: 0x0  nop
    ctx->pc = 0x104024u;
    // NOP
label_104028:
    // 0x104028: 0x106000a9  beqz        $v1, . + 4 + (0xA9 << 2)
    ctx->pc = 0x104028u;
    {
        const bool branch_taken_0x104028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10402Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104028u;
            // 0x10402c: 0xdba100c0  lqc2        $vf1, 0xC0($sp) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104028) {
            ctx->pc = 0x1042D0u;
            goto label_1042d0;
        }
    }
    ctx->pc = 0x104030u;
    // 0x104030: 0x4bea306c  vsub.xyzw   $vf1, $vf6, $vf10
    ctx->pc = 0x104030u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[10]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104034: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x104034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x104038: 0x4bea412c  vsub.xyzw   $vf4, $vf8, $vf10
    ctx->pc = 0x104038u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[10]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x10403c: 0x4bea38ec  vsub.xyzw   $vf3, $vf7, $vf10
    ctx->pc = 0x10403cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[10]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x104040: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x104040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x104044: 0x4be50b3c  vmove.xyzw  $vf5, $vf1
    ctx->pc = 0x104044u;
    ctx->vu0_vf[5] = ctx->vu0_vf[1];
    // 0x104048: 0x4be328aa  vmul.xyzw   $vf2, $vf5, $vf3
    ctx->pc = 0x104048u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10404c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x10404cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104050: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x104050u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104054: 0x4be320ea  vmul.xyzw   $vf3, $vf4, $vf3
    ctx->pc = 0x104054u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x104058: 0x48280800  qmfc2.ni    $t0, $vf1
    ctx->pc = 0x104058u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10405c: 0x44881800  mtc1        $t0, $f3
    ctx->pc = 0x10405cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x104060: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x104060u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104064: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x104064u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x104068: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x104068u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10406c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x10406cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x104070: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x104070u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x104074: 0x44833800  mtc1        $v1, $f7
    ctx->pc = 0x104074u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x104078: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x104078u;
    {
        const bool branch_taken_0x104078 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x104078) {
            ctx->pc = 0x104090u;
            goto label_104090;
        }
    }
    ctx->pc = 0x104080u;
    // 0x104080: 0x46003836  c.le.s      $f7, $f0
    ctx->pc = 0x104080u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x104084: 0x0  nop
    ctx->pc = 0x104084u;
    // NOP
    // 0x104088: 0x45010081  bc1t        . + 4 + (0x81 << 2)
    ctx->pc = 0x104088u;
    {
        const bool branch_taken_0x104088 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x10408Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104088u;
            // 0x10408c: 0x4be1533c  vmove.xyzw  $vf1, $vf10 (Delay Slot)
        ctx->vu0_vf[1] = ctx->vu0_vf[10];
        ctx->in_delay_slot = false;
        if (branch_taken_0x104088) {
            ctx->pc = 0x104290u;
            goto label_104290;
        }
    }
    ctx->pc = 0x104090u;
label_104090:
    // 0x104090: 0x4be638ac  vsub.xyzw   $vf2, $vf7, $vf6
    ctx->pc = 0x104090u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x104094: 0x4be228ea  vmul.xyzw   $vf3, $vf5, $vf2
    ctx->pc = 0x104094u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x104098: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x104098u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10409c: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x10409cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1040a0: 0x4be220aa  vmul.xyzw   $vf2, $vf4, $vf2
    ctx->pc = 0x1040a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1040a4: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x1040a4u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1040a8: 0x44852000  mtc1        $a1, $f4
    ctx->pc = 0x1040a8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1040ac: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1040acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1040b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1040b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1040b4: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1040b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1040b8: 0x48280800  qmfc2.ni    $t0, $vf1
    ctx->pc = 0x1040b8u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1040bc: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x1040bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1040c0: 0x44884000  mtc1        $t0, $f8
    ctx->pc = 0x1040c0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x1040c4: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x1040C4u;
    {
        const bool branch_taken_0x1040c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1040c4) {
            ctx->pc = 0x1040C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1040C4u;
            // 0x1040c8: 0x46081842  mul.s       $f1, $f3, $f8 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[8]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1040E0u;
            goto label_1040e0;
        }
    }
    ctx->pc = 0x1040CCu;
    // 0x1040cc: 0x46044036  c.le.s      $f8, $f4
    ctx->pc = 0x1040ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[8], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1040d0: 0x0  nop
    ctx->pc = 0x1040d0u;
    // NOP
    // 0x1040d4: 0x4501006e  bc1t        . + 4 + (0x6E << 2)
    ctx->pc = 0x1040D4u;
    {
        const bool branch_taken_0x1040d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1040D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1040D4u;
            // 0x1040d8: 0x4be1333c  vmove.xyzw  $vf1, $vf6 (Delay Slot)
        ctx->vu0_vf[1] = ctx->vu0_vf[6];
        ctx->in_delay_slot = false;
        if (branch_taken_0x1040d4) {
            ctx->pc = 0x104290u;
            goto label_104290;
        }
    }
    ctx->pc = 0x1040DCu;
    // 0x1040dc: 0x46081842  mul.s       $f1, $f3, $f8
    ctx->pc = 0x1040dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[8]);
label_1040e0:
    // 0x1040e0: 0x46072002  mul.s       $f0, $f4, $f7
    ctx->pc = 0x1040e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x1040e4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1040e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1040e8: 0x46000a41  sub.s       $f9, $f1, $f0
    ctx->pc = 0x1040e8u;
    ctx->f[9] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1040ec: 0x46024836  c.le.s      $f9, $f2
    ctx->pc = 0x1040ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[9], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1040f0: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x1040F0u;
    {
        const bool branch_taken_0x1040f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1040f0) {
            ctx->pc = 0x104130u;
            goto label_104130;
        }
    }
    ctx->pc = 0x1040F8u;
    // 0x1040f8: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x1040f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1040fc: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1040FCu;
    {
        const bool branch_taken_0x1040fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1040fc) {
            ctx->pc = 0x104130u;
            goto label_104130;
        }
    }
    ctx->pc = 0x104104u;
    // 0x104104: 0x46022036  c.le.s      $f4, $f2
    ctx->pc = 0x104104u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x104108: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x104108u;
    {
        const bool branch_taken_0x104108 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x104108) {
            ctx->pc = 0x104130u;
            goto label_104130;
        }
    }
    ctx->pc = 0x104110u;
    // 0x104110: 0x46041801  sub.s       $f0, $f3, $f4
    ctx->pc = 0x104110u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x104114: 0x46001803  div.s       $f0, $f3, $f0
    ctx->pc = 0x104114u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[0] = ctx->f[3] / ctx->f[0];
    // 0x104118: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x104118u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x10411c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x10411cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x104120: 0x4be12858  vmulx.xyzw  $vf1, $vf5, $vf1x
    ctx->pc = 0x104120u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104124: 0x4be15068  vadd.xyzw   $vf1, $vf10, $vf1
    ctx->pc = 0x104124u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104128: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x104128u;
    {
        const bool branch_taken_0x104128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x104128) {
            ctx->pc = 0x104290u;
            goto label_104290;
        }
    }
    ctx->pc = 0x104130u;
label_104130:
    // 0x104130: 0x4be838ac  vsub.xyzw   $vf2, $vf7, $vf8
    ctx->pc = 0x104130u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x104134: 0x4be228ea  vmul.xyzw   $vf3, $vf5, $vf2
    ctx->pc = 0x104134u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x104138: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x104138u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10413c: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x10413cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104140: 0x4be220aa  vmul.xyzw   $vf2, $vf4, $vf2
    ctx->pc = 0x104140u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x104144: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x104144u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x104148: 0x44852800  mtc1        $a1, $f5
    ctx->pc = 0x104148u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x10414c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x10414cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104150: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x104150u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104154: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x104154u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x104158: 0x48280800  qmfc2.ni    $t0, $vf1
    ctx->pc = 0x104158u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10415c: 0x44881000  mtc1        $t0, $f2
    ctx->pc = 0x10415cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x104160: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x104160u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x104164: 0x0  nop
    ctx->pc = 0x104164u;
    // NOP
    // 0x104168: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x104168u;
    {
        const bool branch_taken_0x104168 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x104168) {
            ctx->pc = 0x10416Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x104168u;
            // 0x10416c: 0x46021842  mul.s       $f1, $f3, $f2 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x104188u;
            goto label_104188;
        }
    }
    ctx->pc = 0x104170u;
    // 0x104170: 0x46022836  c.le.s      $f5, $f2
    ctx->pc = 0x104170u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x104174: 0x0  nop
    ctx->pc = 0x104174u;
    // NOP
    // 0x104178: 0x45010045  bc1t        . + 4 + (0x45 << 2)
    ctx->pc = 0x104178u;
    {
        const bool branch_taken_0x104178 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x10417Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104178u;
            // 0x10417c: 0x4be1433c  vmove.xyzw  $vf1, $vf8 (Delay Slot)
        ctx->vu0_vf[1] = ctx->vu0_vf[8];
        ctx->in_delay_slot = false;
        if (branch_taken_0x104178) {
            ctx->pc = 0x104290u;
            goto label_104290;
        }
    }
    ctx->pc = 0x104180u;
    // 0x104180: 0x46021842  mul.s       $f1, $f3, $f2
    ctx->pc = 0x104180u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x104184: 0x0  nop
    ctx->pc = 0x104184u;
    // NOP
label_104188:
    // 0x104188: 0x46072802  mul.s       $f0, $f5, $f7
    ctx->pc = 0x104188u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
    // 0x10418c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x10418cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x104190: 0x46010181  sub.s       $f6, $f0, $f1
    ctx->pc = 0x104190u;
    ctx->f[6] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x104194: 0x46033036  c.le.s      $f6, $f3
    ctx->pc = 0x104194u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x104198: 0x0  nop
    ctx->pc = 0x104198u;
    // NOP
    // 0x10419c: 0x45020012  bc1fl       . + 4 + (0x12 << 2)
    ctx->pc = 0x10419Cu;
    {
        const bool branch_taken_0x10419c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10419c) {
            ctx->pc = 0x1041A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10419Cu;
            // 0x1041a0: 0x46022042  mul.s       $f1, $f4, $f2 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1041E8u;
            goto label_1041e8;
        }
    }
    ctx->pc = 0x1041A4u;
    // 0x1041a4: 0x46071836  c.le.s      $f3, $f7
    ctx->pc = 0x1041a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1041a8: 0x0  nop
    ctx->pc = 0x1041a8u;
    // NOP
    // 0x1041ac: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
    ctx->pc = 0x1041ACu;
    {
        const bool branch_taken_0x1041ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1041ac) {
            ctx->pc = 0x1041B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1041ACu;
            // 0x1041b0: 0x46022042  mul.s       $f1, $f4, $f2 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1041E8u;
            goto label_1041e8;
        }
    }
    ctx->pc = 0x1041B4u;
    // 0x1041b4: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x1041b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1041b8: 0x0  nop
    ctx->pc = 0x1041b8u;
    // NOP
    // 0x1041bc: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x1041BCu;
    {
        const bool branch_taken_0x1041bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1041bc) {
            ctx->pc = 0x1041C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1041BCu;
            // 0x1041c0: 0x46022042  mul.s       $f1, $f4, $f2 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1041E8u;
            goto label_1041e8;
        }
    }
    ctx->pc = 0x1041C4u;
    // 0x1041c4: 0x46023801  sub.s       $f0, $f7, $f2
    ctx->pc = 0x1041c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[7], ctx->f[2]);
    // 0x1041c8: 0x46003803  div.s       $f0, $f7, $f0
    ctx->pc = 0x1041c8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[7] * 0.0f); } else ctx->f[0] = ctx->f[7] / ctx->f[0];
    // 0x1041cc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1041ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1041d0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1041d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1041d4: 0x4be12058  vmulx.xyzw  $vf1, $vf4, $vf1x
    ctx->pc = 0x1041d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1041d8: 0x4be15068  vadd.xyzw   $vf1, $vf10, $vf1
    ctx->pc = 0x1041d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1041dc: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1041DCu;
    {
        const bool branch_taken_0x1041dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1041dc) {
            ctx->pc = 0x104290u;
            goto label_104290;
        }
    }
    ctx->pc = 0x1041E4u;
    // 0x1041e4: 0x0  nop
    ctx->pc = 0x1041e4u;
    // NOP
label_1041e8:
    // 0x1041e8: 0x46082802  mul.s       $f0, $f5, $f8
    ctx->pc = 0x1041e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[8]);
    // 0x1041ec: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1041ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1041f0: 0x460009c1  sub.s       $f7, $f1, $f0
    ctx->pc = 0x1041f0u;
    ctx->f[7] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1041f4: 0x46033836  c.le.s      $f7, $f3
    ctx->pc = 0x1041f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1041f8: 0x0  nop
    ctx->pc = 0x1041f8u;
    // NOP
    // 0x1041fc: 0x45020014  bc1fl       . + 4 + (0x14 << 2)
    ctx->pc = 0x1041FCu;
    {
        const bool branch_taken_0x1041fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1041fc) {
            ctx->pc = 0x104200u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1041FCu;
            // 0x104200: 0x46063840  add.s       $f1, $f7, $f6 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x104250u;
            goto label_104250;
        }
    }
    ctx->pc = 0x104204u;
    // 0x104204: 0x46044041  sub.s       $f1, $f8, $f4
    ctx->pc = 0x104204u;
    ctx->f[1] = FPU_SUB_S(ctx->f[8], ctx->f[4]);
    // 0x104208: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x104208u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10420c: 0x0  nop
    ctx->pc = 0x10420cu;
    // NOP
    // 0x104210: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
    ctx->pc = 0x104210u;
    {
        const bool branch_taken_0x104210 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x104210) {
            ctx->pc = 0x104214u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x104210u;
            // 0x104214: 0x46063840  add.s       $f1, $f7, $f6 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x104250u;
            goto label_104250;
        }
    }
    ctx->pc = 0x104218u;
    // 0x104218: 0x46022801  sub.s       $f0, $f5, $f2
    ctx->pc = 0x104218u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
    // 0x10421c: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x10421cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x104220: 0x0  nop
    ctx->pc = 0x104220u;
    // NOP
    // 0x104224: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x104224u;
    {
        const bool branch_taken_0x104224 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x104224) {
            ctx->pc = 0x104228u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x104224u;
            // 0x104228: 0x46063840  add.s       $f1, $f7, $f6 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x104250u;
            goto label_104250;
        }
    }
    ctx->pc = 0x10422Cu;
    // 0x10422c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x10422cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x104230: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x104230u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x104234: 0x4be6406c  vsub.xyzw   $vf1, $vf8, $vf6
    ctx->pc = 0x104234u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104238: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x104238u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x10423c: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x10423cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x104240: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x104240u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104244: 0x4be13068  vadd.xyzw   $vf1, $vf6, $vf1
    ctx->pc = 0x104244u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104248: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x104248u;
    {
        const bool branch_taken_0x104248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x104248) {
            ctx->pc = 0x104290u;
            goto label_104290;
        }
    }
    ctx->pc = 0x104250u;
label_104250:
    // 0x104250: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x104250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x104254: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x104254u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x104258: 0x46090840  add.s       $f1, $f1, $f9
    ctx->pc = 0x104258u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[9]);
    // 0x10425c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x10425cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x104260: 0x46004842  mul.s       $f1, $f9, $f0
    ctx->pc = 0x104260u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x104264: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x104264u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x104268: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x104268u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x10426c: 0x48a80800  qmtc2.ni    $t0, $vf1
    ctx->pc = 0x10426cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x104270: 0xdba20030  lqc2        $vf2, 0x30($sp)
    ctx->pc = 0x104270u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x104274: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x104274u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x104278: 0x4be250a8  vadd.xyzw   $vf2, $vf10, $vf2
    ctx->pc = 0x104278u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10427c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x10427cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x104280: 0x48a31800  qmtc2.ni    $v1, $vf3
    ctx->pc = 0x104280u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x104284: 0xdba10040  lqc2        $vf1, 0x40($sp)
    ctx->pc = 0x104284u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x104288: 0x4be30858  vmulx.xyzw  $vf1, $vf1, $vf3x
    ctx->pc = 0x104288u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10428c: 0x4be11068  vadd.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x10428cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_104290:
    // 0x104290: 0x4be1386c  vsub.xyzw   $vf1, $vf7, $vf1
    ctx->pc = 0x104290u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104294: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x104294u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104298: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x104298u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10429c: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x10429cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1042a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1042a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1042a4: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x1042a4u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1042a8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1042a8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1042ac: 0x460a0034  c.lt.s      $f0, $f10
    ctx->pc = 0x1042acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1042b0: 0x0  nop
    ctx->pc = 0x1042b0u;
    // NOP
    // 0x1042b4: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x1042B4u;
    {
        const bool branch_taken_0x1042b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1042b4) {
            ctx->pc = 0x1042B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1042B4u;
            // 0x1042b8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1042C0u;
            goto label_1042c0;
        }
    }
    ctx->pc = 0x1042BCu;
    // 0x1042bc: 0x0  nop
    ctx->pc = 0x1042bcu;
    // NOP
label_1042c0:
    // 0x1042c0: 0x106000cf  beqz        $v1, . + 4 + (0xCF << 2)
    ctx->pc = 0x1042C0u;
    {
        const bool branch_taken_0x1042c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1042C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1042C0u;
            // 0x1042c4: 0x8fa80088  lw          $t0, 0x88($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1042c0) {
            ctx->pc = 0x104600u;
            goto label_104600;
        }
    }
    ctx->pc = 0x1042C8u;
    // 0x1042c8: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x1042C8u;
    {
        const bool branch_taken_0x1042c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1042c8) {
            ctx->pc = 0x1045A8u;
            goto label_1045a8;
        }
    }
    ctx->pc = 0x1042D0u;
label_1042d0:
    // 0x1042d0: 0x4be708aa  vmul.xyzw   $vf2, $vf1, $vf7
    ctx->pc = 0x1042d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1042d4: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1042d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1042d8: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1042d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1042dc: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x1042dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1042e0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1042e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1042e4: 0x4b020844  vsubx.x     $vf1, $vf1, $vf2x
    ctx->pc = 0x1042e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1042e8: 0x4be109fd  vabs.xyzw   $vf1, $vf1
    ctx->pc = 0x1042e8u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1042ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1042ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1042f0: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x1042f0u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1042f4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1042f4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1042f8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1042f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1042fc: 0x0  nop
    ctx->pc = 0x1042fcu;
    // NOP
    // 0x104300: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x104300u;
    {
        const bool branch_taken_0x104300 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x104300) {
            ctx->pc = 0x104304u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x104300u;
            // 0x104304: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x104308u;
            goto label_104308;
        }
    }
    ctx->pc = 0x104308u;
label_104308:
    // 0x104308: 0x106000ba  beqz        $v1, . + 4 + (0xBA << 2)
    ctx->pc = 0x104308u;
    {
        const bool branch_taken_0x104308 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x104308) {
            ctx->pc = 0x1045F4u;
            goto label_1045f4;
        }
    }
    ctx->pc = 0x104310u;
    // 0x104310: 0x4be9406c  vsub.xyzw   $vf1, $vf8, $vf9
    ctx->pc = 0x104310u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104314: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x104314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x104318: 0x4be9312c  vsub.xyzw   $vf4, $vf6, $vf9
    ctx->pc = 0x104318u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x10431c: 0x4be938ec  vsub.xyzw   $vf3, $vf7, $vf9
    ctx->pc = 0x10431cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x104320: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x104320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x104324: 0x4be50b3c  vmove.xyzw  $vf5, $vf1
    ctx->pc = 0x104324u;
    ctx->vu0_vf[5] = ctx->vu0_vf[1];
    // 0x104328: 0x4be328aa  vmul.xyzw   $vf2, $vf5, $vf3
    ctx->pc = 0x104328u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10432c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x10432cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104330: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x104330u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104334: 0x4be320ea  vmul.xyzw   $vf3, $vf4, $vf3
    ctx->pc = 0x104334u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x104338: 0x48280800  qmfc2.ni    $t0, $vf1
    ctx->pc = 0x104338u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10433c: 0x44881800  mtc1        $t0, $f3
    ctx->pc = 0x10433cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x104340: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x104340u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104344: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x104344u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x104348: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x104348u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10434c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x10434cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x104350: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x104350u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x104354: 0x44833800  mtc1        $v1, $f7
    ctx->pc = 0x104354u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x104358: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x104358u;
    {
        const bool branch_taken_0x104358 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x104358) {
            ctx->pc = 0x104370u;
            goto label_104370;
        }
    }
    ctx->pc = 0x104360u;
    // 0x104360: 0x46003836  c.le.s      $f7, $f0
    ctx->pc = 0x104360u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x104364: 0x0  nop
    ctx->pc = 0x104364u;
    // NOP
    // 0x104368: 0x45010081  bc1t        . + 4 + (0x81 << 2)
    ctx->pc = 0x104368u;
    {
        const bool branch_taken_0x104368 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x10436Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104368u;
            // 0x10436c: 0x4be14b3c  vmove.xyzw  $vf1, $vf9 (Delay Slot)
        ctx->vu0_vf[1] = ctx->vu0_vf[9];
        ctx->in_delay_slot = false;
        if (branch_taken_0x104368) {
            ctx->pc = 0x104570u;
            goto label_104570;
        }
    }
    ctx->pc = 0x104370u;
label_104370:
    // 0x104370: 0x4be838ac  vsub.xyzw   $vf2, $vf7, $vf8
    ctx->pc = 0x104370u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x104374: 0x4be228ea  vmul.xyzw   $vf3, $vf5, $vf2
    ctx->pc = 0x104374u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x104378: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x104378u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10437c: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x10437cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104380: 0x4be220aa  vmul.xyzw   $vf2, $vf4, $vf2
    ctx->pc = 0x104380u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x104384: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x104384u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x104388: 0x44852000  mtc1        $a1, $f4
    ctx->pc = 0x104388u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x10438c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x10438cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104390: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x104390u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x104394: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x104394u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104398: 0x48280800  qmfc2.ni    $t0, $vf1
    ctx->pc = 0x104398u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10439c: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x10439cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1043a0: 0x44884000  mtc1        $t0, $f8
    ctx->pc = 0x1043a0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x1043a4: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x1043A4u;
    {
        const bool branch_taken_0x1043a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1043a4) {
            ctx->pc = 0x1043A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1043A4u;
            // 0x1043a8: 0x46081842  mul.s       $f1, $f3, $f8 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[8]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1043C0u;
            goto label_1043c0;
        }
    }
    ctx->pc = 0x1043ACu;
    // 0x1043ac: 0x46044036  c.le.s      $f8, $f4
    ctx->pc = 0x1043acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[8], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1043b0: 0x0  nop
    ctx->pc = 0x1043b0u;
    // NOP
    // 0x1043b4: 0x4501006e  bc1t        . + 4 + (0x6E << 2)
    ctx->pc = 0x1043B4u;
    {
        const bool branch_taken_0x1043b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1043B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1043B4u;
            // 0x1043b8: 0x4be1433c  vmove.xyzw  $vf1, $vf8 (Delay Slot)
        ctx->vu0_vf[1] = ctx->vu0_vf[8];
        ctx->in_delay_slot = false;
        if (branch_taken_0x1043b4) {
            ctx->pc = 0x104570u;
            goto label_104570;
        }
    }
    ctx->pc = 0x1043BCu;
    // 0x1043bc: 0x46081842  mul.s       $f1, $f3, $f8
    ctx->pc = 0x1043bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[8]);
label_1043c0:
    // 0x1043c0: 0x46072002  mul.s       $f0, $f4, $f7
    ctx->pc = 0x1043c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x1043c4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1043c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1043c8: 0x46000a41  sub.s       $f9, $f1, $f0
    ctx->pc = 0x1043c8u;
    ctx->f[9] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1043cc: 0x46024836  c.le.s      $f9, $f2
    ctx->pc = 0x1043ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[9], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1043d0: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x1043D0u;
    {
        const bool branch_taken_0x1043d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1043d0) {
            ctx->pc = 0x104410u;
            goto label_104410;
        }
    }
    ctx->pc = 0x1043D8u;
    // 0x1043d8: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x1043d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1043dc: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1043DCu;
    {
        const bool branch_taken_0x1043dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1043dc) {
            ctx->pc = 0x104410u;
            goto label_104410;
        }
    }
    ctx->pc = 0x1043E4u;
    // 0x1043e4: 0x46022036  c.le.s      $f4, $f2
    ctx->pc = 0x1043e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1043e8: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1043E8u;
    {
        const bool branch_taken_0x1043e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1043e8) {
            ctx->pc = 0x104410u;
            goto label_104410;
        }
    }
    ctx->pc = 0x1043F0u;
    // 0x1043f0: 0x46041801  sub.s       $f0, $f3, $f4
    ctx->pc = 0x1043f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x1043f4: 0x46001803  div.s       $f0, $f3, $f0
    ctx->pc = 0x1043f4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[0] = ctx->f[3] / ctx->f[0];
    // 0x1043f8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1043f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1043fc: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1043fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x104400: 0x4be12858  vmulx.xyzw  $vf1, $vf5, $vf1x
    ctx->pc = 0x104400u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104404: 0x4be14868  vadd.xyzw   $vf1, $vf9, $vf1
    ctx->pc = 0x104404u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104408: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x104408u;
    {
        const bool branch_taken_0x104408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x104408) {
            ctx->pc = 0x104570u;
            goto label_104570;
        }
    }
    ctx->pc = 0x104410u;
label_104410:
    // 0x104410: 0x4be638ac  vsub.xyzw   $vf2, $vf7, $vf6
    ctx->pc = 0x104410u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x104414: 0x4be228ea  vmul.xyzw   $vf3, $vf5, $vf2
    ctx->pc = 0x104414u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x104418: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x104418u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10441c: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x10441cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104420: 0x4be220aa  vmul.xyzw   $vf2, $vf4, $vf2
    ctx->pc = 0x104420u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x104424: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x104424u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x104428: 0x44852800  mtc1        $a1, $f5
    ctx->pc = 0x104428u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x10442c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x10442cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104430: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x104430u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104434: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x104434u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x104438: 0x48280800  qmfc2.ni    $t0, $vf1
    ctx->pc = 0x104438u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10443c: 0x44881000  mtc1        $t0, $f2
    ctx->pc = 0x10443cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x104440: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x104440u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x104444: 0x0  nop
    ctx->pc = 0x104444u;
    // NOP
    // 0x104448: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x104448u;
    {
        const bool branch_taken_0x104448 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x104448) {
            ctx->pc = 0x10444Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x104448u;
            // 0x10444c: 0x46021842  mul.s       $f1, $f3, $f2 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x104468u;
            goto label_104468;
        }
    }
    ctx->pc = 0x104450u;
    // 0x104450: 0x46022836  c.le.s      $f5, $f2
    ctx->pc = 0x104450u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x104454: 0x0  nop
    ctx->pc = 0x104454u;
    // NOP
    // 0x104458: 0x45010045  bc1t        . + 4 + (0x45 << 2)
    ctx->pc = 0x104458u;
    {
        const bool branch_taken_0x104458 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x10445Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104458u;
            // 0x10445c: 0x4be1333c  vmove.xyzw  $vf1, $vf6 (Delay Slot)
        ctx->vu0_vf[1] = ctx->vu0_vf[6];
        ctx->in_delay_slot = false;
        if (branch_taken_0x104458) {
            ctx->pc = 0x104570u;
            goto label_104570;
        }
    }
    ctx->pc = 0x104460u;
    // 0x104460: 0x46021842  mul.s       $f1, $f3, $f2
    ctx->pc = 0x104460u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x104464: 0x0  nop
    ctx->pc = 0x104464u;
    // NOP
label_104468:
    // 0x104468: 0x46072802  mul.s       $f0, $f5, $f7
    ctx->pc = 0x104468u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
    // 0x10446c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x10446cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x104470: 0x46010181  sub.s       $f6, $f0, $f1
    ctx->pc = 0x104470u;
    ctx->f[6] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x104474: 0x46033036  c.le.s      $f6, $f3
    ctx->pc = 0x104474u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x104478: 0x0  nop
    ctx->pc = 0x104478u;
    // NOP
    // 0x10447c: 0x45020012  bc1fl       . + 4 + (0x12 << 2)
    ctx->pc = 0x10447Cu;
    {
        const bool branch_taken_0x10447c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10447c) {
            ctx->pc = 0x104480u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10447Cu;
            // 0x104480: 0x46022042  mul.s       $f1, $f4, $f2 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1044C8u;
            goto label_1044c8;
        }
    }
    ctx->pc = 0x104484u;
    // 0x104484: 0x46071836  c.le.s      $f3, $f7
    ctx->pc = 0x104484u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x104488: 0x0  nop
    ctx->pc = 0x104488u;
    // NOP
    // 0x10448c: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
    ctx->pc = 0x10448Cu;
    {
        const bool branch_taken_0x10448c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10448c) {
            ctx->pc = 0x104490u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10448Cu;
            // 0x104490: 0x46022042  mul.s       $f1, $f4, $f2 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1044C8u;
            goto label_1044c8;
        }
    }
    ctx->pc = 0x104494u;
    // 0x104494: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x104494u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x104498: 0x0  nop
    ctx->pc = 0x104498u;
    // NOP
    // 0x10449c: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x10449Cu;
    {
        const bool branch_taken_0x10449c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10449c) {
            ctx->pc = 0x1044A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10449Cu;
            // 0x1044a0: 0x46022042  mul.s       $f1, $f4, $f2 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1044C8u;
            goto label_1044c8;
        }
    }
    ctx->pc = 0x1044A4u;
    // 0x1044a4: 0x46023801  sub.s       $f0, $f7, $f2
    ctx->pc = 0x1044a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[7], ctx->f[2]);
    // 0x1044a8: 0x46003803  div.s       $f0, $f7, $f0
    ctx->pc = 0x1044a8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[7] * 0.0f); } else ctx->f[0] = ctx->f[7] / ctx->f[0];
    // 0x1044ac: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1044acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1044b0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1044b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1044b4: 0x4be12058  vmulx.xyzw  $vf1, $vf4, $vf1x
    ctx->pc = 0x1044b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1044b8: 0x4be14868  vadd.xyzw   $vf1, $vf9, $vf1
    ctx->pc = 0x1044b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1044bc: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1044BCu;
    {
        const bool branch_taken_0x1044bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1044bc) {
            ctx->pc = 0x104570u;
            goto label_104570;
        }
    }
    ctx->pc = 0x1044C4u;
    // 0x1044c4: 0x0  nop
    ctx->pc = 0x1044c4u;
    // NOP
label_1044c8:
    // 0x1044c8: 0x46082802  mul.s       $f0, $f5, $f8
    ctx->pc = 0x1044c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[8]);
    // 0x1044cc: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1044ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1044d0: 0x460009c1  sub.s       $f7, $f1, $f0
    ctx->pc = 0x1044d0u;
    ctx->f[7] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1044d4: 0x46033836  c.le.s      $f7, $f3
    ctx->pc = 0x1044d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1044d8: 0x0  nop
    ctx->pc = 0x1044d8u;
    // NOP
    // 0x1044dc: 0x45020014  bc1fl       . + 4 + (0x14 << 2)
    ctx->pc = 0x1044DCu;
    {
        const bool branch_taken_0x1044dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1044dc) {
            ctx->pc = 0x1044E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1044DCu;
            // 0x1044e0: 0x46063840  add.s       $f1, $f7, $f6 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x104530u;
            goto label_104530;
        }
    }
    ctx->pc = 0x1044E4u;
    // 0x1044e4: 0x46044041  sub.s       $f1, $f8, $f4
    ctx->pc = 0x1044e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[8], ctx->f[4]);
    // 0x1044e8: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x1044e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1044ec: 0x0  nop
    ctx->pc = 0x1044ecu;
    // NOP
    // 0x1044f0: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
    ctx->pc = 0x1044F0u;
    {
        const bool branch_taken_0x1044f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1044f0) {
            ctx->pc = 0x1044F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1044F0u;
            // 0x1044f4: 0x46063840  add.s       $f1, $f7, $f6 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x104530u;
            goto label_104530;
        }
    }
    ctx->pc = 0x1044F8u;
    // 0x1044f8: 0x46022801  sub.s       $f0, $f5, $f2
    ctx->pc = 0x1044f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
    // 0x1044fc: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x1044fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x104500: 0x0  nop
    ctx->pc = 0x104500u;
    // NOP
    // 0x104504: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x104504u;
    {
        const bool branch_taken_0x104504 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x104504) {
            ctx->pc = 0x104508u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x104504u;
            // 0x104508: 0x46063840  add.s       $f1, $f7, $f6 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x104530u;
            goto label_104530;
        }
    }
    ctx->pc = 0x10450Cu;
    // 0x10450c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x10450cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x104510: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x104510u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x104514: 0x4be8306c  vsub.xyzw   $vf1, $vf6, $vf8
    ctx->pc = 0x104514u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104518: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x104518u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x10451c: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x10451cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x104520: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x104520u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104524: 0x4be14068  vadd.xyzw   $vf1, $vf8, $vf1
    ctx->pc = 0x104524u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104528: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x104528u;
    {
        const bool branch_taken_0x104528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x104528) {
            ctx->pc = 0x104570u;
            goto label_104570;
        }
    }
    ctx->pc = 0x104530u;
label_104530:
    // 0x104530: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x104530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x104534: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x104534u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x104538: 0x46090840  add.s       $f1, $f1, $f9
    ctx->pc = 0x104538u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[9]);
    // 0x10453c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x10453cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x104540: 0x46004842  mul.s       $f1, $f9, $f0
    ctx->pc = 0x104540u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x104544: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x104544u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x104548: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x104548u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x10454c: 0x48a80800  qmtc2.ni    $t0, $vf1
    ctx->pc = 0x10454cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x104550: 0xdba20050  lqc2        $vf2, 0x50($sp)
    ctx->pc = 0x104550u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x104554: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x104554u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x104558: 0x4be248a8  vadd.xyzw   $vf2, $vf9, $vf2
    ctx->pc = 0x104558u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10455c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x10455cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x104560: 0x48a31800  qmtc2.ni    $v1, $vf3
    ctx->pc = 0x104560u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x104564: 0xdba10060  lqc2        $vf1, 0x60($sp)
    ctx->pc = 0x104564u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x104568: 0x4be30858  vmulx.xyzw  $vf1, $vf1, $vf3x
    ctx->pc = 0x104568u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10456c: 0x4be11068  vadd.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x10456cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_104570:
    // 0x104570: 0x4be1386c  vsub.xyzw   $vf1, $vf7, $vf1
    ctx->pc = 0x104570u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104574: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x104574u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x104578: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x104578u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10457c: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x10457cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x104580: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x104580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x104584: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x104584u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x104588: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x104588u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10458c: 0x460a0034  c.lt.s      $f0, $f10
    ctx->pc = 0x10458cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x104590: 0x0  nop
    ctx->pc = 0x104590u;
    // NOP
    // 0x104594: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x104594u;
    {
        const bool branch_taken_0x104594 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x104594) {
            ctx->pc = 0x104598u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x104594u;
            // 0x104598: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1045A0u;
            goto label_1045a0;
        }
    }
    ctx->pc = 0x10459Cu;
    // 0x10459c: 0x0  nop
    ctx->pc = 0x10459cu;
    // NOP
label_1045a0:
    // 0x1045a0: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1045A0u;
    {
        const bool branch_taken_0x1045a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1045a0) {
            ctx->pc = 0x1045F4u;
            goto label_1045f4;
        }
    }
    ctx->pc = 0x1045A8u;
label_1045a8:
    // 0x1045a8: 0x19400014  blez        $t2, . + 4 + (0x14 << 2)
    ctx->pc = 0x1045A8u;
    {
        const bool branch_taken_0x1045a8 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x1045ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1045A8u;
            // 0x1045ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1045a8) {
            ctx->pc = 0x1045FCu;
            goto label_1045fc;
        }
    }
    ctx->pc = 0x1045B0u;
    // 0x1045b0: 0x8c890030  lw          $t1, 0x30($a0)
    ctx->pc = 0x1045b0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1045b4: 0x8fa70094  lw          $a3, 0x94($sp)
    ctx->pc = 0x1045b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x1045b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1045b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1045bc: 0x8fa8009c  lw          $t0, 0x9C($sp)
    ctx->pc = 0x1045bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x1045c0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1045c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1045c4: 0xfba600e0  sqc2        $vf6, 0xE0($sp)
    ctx->pc = 0x1045c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1045c8: 0x3c0b7000  lui         $t3, 0x7000
    ctx->pc = 0x1045c8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)28672 << 16));
    // 0x1045cc: 0xfba800f0  sqc2        $vf8, 0xF0($sp)
    ctx->pc = 0x1045ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x1045d0: 0xfba90100  sqc2        $vf9, 0x100($sp)
    ctx->pc = 0x1045d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x1045d4: 0xfbaa0110  sqc2        $vf10, 0x110($sp)
    ctx->pc = 0x1045d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x1045d8: 0xc040ebc  jal         func_103AF0
    ctx->pc = 0x1045D8u;
    SET_GPR_U32(ctx, 31, 0x1045E0u);
    ctx->pc = 0x1045DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1045D8u;
            // 0x1045dc: 0xafb40000  sw          $s4, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103AF0u;
    if (runtime->hasFunction(0x103AF0u)) {
        auto targetFn = runtime->lookupFunction(0x103AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1045E0u; }
        if (ctx->pc != 0x1045E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103AF0_0x103af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1045E0u; }
        if (ctx->pc != 0x1045E0u) { return; }
    }
    ctx->pc = 0x1045E0u;
    // 0x1045e0: 0xdba600e0  lqc2        $vf6, 0xE0($sp)
    ctx->pc = 0x1045e0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1045e4: 0xdba800f0  lqc2        $vf8, 0xF0($sp)
    ctx->pc = 0x1045e4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1045e8: 0xdba90100  lqc2        $vf9, 0x100($sp)
    ctx->pc = 0x1045e8u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1045ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1045ECu;
    {
        const bool branch_taken_0x1045ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1045F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1045ECu;
            // 0x1045f0: 0xdbaa0110  lqc2        $vf10, 0x110($sp) (Delay Slot)
        ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1045ec) {
            ctx->pc = 0x1045FCu;
            goto label_1045fc;
        }
    }
    ctx->pc = 0x1045F4u;
label_1045f4:
    // 0x1045f4: 0x5420001  bltzl       $t2, . + 4 + (0x1 << 2)
    ctx->pc = 0x1045F4u;
    {
        const bool branch_taken_0x1045f4 = (GPR_S32(ctx, 10) < 0);
        if (branch_taken_0x1045f4) {
            ctx->pc = 0x1045F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1045F4u;
            // 0x1045f8: 0x8c930030  lw          $s3, 0x30($a0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1045FCu;
            goto label_1045fc;
        }
    }
    ctx->pc = 0x1045FCu;
label_1045fc:
    // 0x1045fc: 0x8fa80088  lw          $t0, 0x88($sp)
    ctx->pc = 0x1045fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_104600:
    // 0x104600: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x104600u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x104604: 0x268102a  slt         $v0, $s3, $t0
    ctx->pc = 0x104604u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x104608: 0x1440fe71  bnez        $v0, . + 4 + (-0x18F << 2)
    ctx->pc = 0x104608u;
    {
        const bool branch_taken_0x104608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10460Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104608u;
            // 0x10460c: 0x8fa5008c  lw          $a1, 0x8C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104608) {
            ctx->pc = 0x103FD0u;
            runtime->cooperativeGuestYield();
            goto label_103fd0;
        }
    }
    ctx->pc = 0x104610u;
label_104610:
    // 0x104610: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x104610u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x104614: 0x26b50040  addiu       $s5, $s5, 0x40
    ctx->pc = 0x104614u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x104618: 0x25e102a  slt         $v0, $s2, $fp
    ctx->pc = 0x104618u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x10461c: 0x1440fe26  bnez        $v0, . + 4 + (-0x1DA << 2)
    ctx->pc = 0x10461Cu;
    {
        const bool branch_taken_0x10461c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x104620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10461Cu;
            // 0x104620: 0x26d60040  addiu       $s6, $s6, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10461c) {
            ctx->pc = 0x103EB8u;
            runtime->cooperativeGuestYield();
            goto label_103eb8;
        }
    }
    ctx->pc = 0x104624u;
label_104624:
    // 0x104624: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x104624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x104628: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x104628u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x10462c: 0x8fa400d4  lw          $a0, 0xD4($sp)
    ctx->pc = 0x10462cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x104630: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x104630u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x104634: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x104634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x104638: 0x217102a  slt         $v0, $s0, $s7
    ctx->pc = 0x104638u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x10463c: 0x1440fe08  bnez        $v0, . + 4 + (-0x1F8 << 2)
    ctx->pc = 0x10463Cu;
    {
        const bool branch_taken_0x10463c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x104640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10463Cu;
            // 0x104640: 0xafa400d4  sw          $a0, 0xD4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10463c) {
            ctx->pc = 0x103E60u;
            runtime->cooperativeGuestYield();
            goto label_103e60;
        }
    }
    ctx->pc = 0x104644u;
    // 0x104644: 0xc621005c  lwc1        $f1, 0x5C($s1)
    ctx->pc = 0x104644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_104648:
    // 0x104648: 0xc6201140  lwc1        $f0, 0x1140($s1)
    ctx->pc = 0x104648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10464c: 0x8e270008  lw          $a3, 0x8($s1)
    ctx->pc = 0x10464cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x104650: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x104650u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x104654: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x104654u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x104658: 0x18e0001e  blez        $a3, . + 4 + (0x1E << 2)
    ctx->pc = 0x104658u;
    {
        const bool branch_taken_0x104658 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x10465Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104658u;
            // 0x10465c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104658) {
            ctx->pc = 0x1046D4u;
            goto label_1046d4;
        }
    }
    ctx->pc = 0x104660u;
    // 0x104660: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x104660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x104664: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x104664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_104668:
    // 0x104668: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x104668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10466c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x10466Cu;
    {
        const bool branch_taken_0x10466c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10466Cu;
            // 0x104670: 0x101900  sll         $v1, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10466c) {
            ctx->pc = 0x1046C0u;
            goto label_1046c0;
        }
    }
    ctx->pc = 0x104674u;
    // 0x104674: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x104674u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x104678: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x104678u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x10467c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10467cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x104680: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x104680u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x104684: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x104684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x104688: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x104688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10468c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x10468cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x104690: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x104690u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x104694: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x104694u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x104698: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x104698u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10469c: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x10469cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1046a0: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1046a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1046a4: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1046a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1046a8: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1046a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1046ac: 0xf8a20000  sqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1046acu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1046b0: 0x48a61800  qmtc2.ni    $a2, $vf3
    ctx->pc = 0x1046b0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1046b4: 0x4be30858  vmulx.xyzw  $vf1, $vf1, $vf3x
    ctx->pc = 0x1046b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1046b8: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1046b8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1046bc: 0xf8a20010  sqc2        $vf2, 0x10($a1)
    ctx->pc = 0x1046bcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[2]));
label_1046c0:
    // 0x1046c0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1046c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1046c4: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x1046c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x1046c8: 0x207102a  slt         $v0, $s0, $a3
    ctx->pc = 0x1046c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1046cc: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1046CCu;
    {
        const bool branch_taken_0x1046cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1046D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1046CCu;
            // 0x1046d0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1046cc) {
            ctx->pc = 0x104668u;
            runtime->cooperativeGuestYield();
            goto label_104668;
        }
    }
    ctx->pc = 0x1046D4u;
label_1046d4:
    // 0x1046d4: 0x7bb001b0  lq          $s0, 0x1B0($sp)
    ctx->pc = 0x1046d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1046d8: 0x7bb101a0  lq          $s1, 0x1A0($sp)
    ctx->pc = 0x1046d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1046dc: 0x7bb20190  lq          $s2, 0x190($sp)
    ctx->pc = 0x1046dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1046e0: 0x7bb30180  lq          $s3, 0x180($sp)
    ctx->pc = 0x1046e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1046e4: 0x7bb40170  lq          $s4, 0x170($sp)
    ctx->pc = 0x1046e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1046e8: 0x7bb50160  lq          $s5, 0x160($sp)
    ctx->pc = 0x1046e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1046ec: 0x7bb60150  lq          $s6, 0x150($sp)
    ctx->pc = 0x1046ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1046f0: 0x7bb70140  lq          $s7, 0x140($sp)
    ctx->pc = 0x1046f0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1046f4: 0x7bbe0130  lq          $fp, 0x130($sp)
    ctx->pc = 0x1046f4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1046f8: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x1046f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1046fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1046FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1046FCu;
            // 0x104700: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x103E60u: goto label_103e60;
            case 0x103EB8u: goto label_103eb8;
            case 0x103FD0u: goto label_103fd0;
            case 0x104028u: goto label_104028;
            case 0x104090u: goto label_104090;
            case 0x1040E0u: goto label_1040e0;
            case 0x104130u: goto label_104130;
            case 0x104188u: goto label_104188;
            case 0x1041E8u: goto label_1041e8;
            case 0x104250u: goto label_104250;
            case 0x104290u: goto label_104290;
            case 0x1042C0u: goto label_1042c0;
            case 0x1042D0u: goto label_1042d0;
            case 0x104308u: goto label_104308;
            case 0x104370u: goto label_104370;
            case 0x1043C0u: goto label_1043c0;
            case 0x104410u: goto label_104410;
            case 0x104468u: goto label_104468;
            case 0x1044C8u: goto label_1044c8;
            case 0x104530u: goto label_104530;
            case 0x104570u: goto label_104570;
            case 0x1045A0u: goto label_1045a0;
            case 0x1045A8u: goto label_1045a8;
            case 0x1045F4u: goto label_1045f4;
            case 0x1045FCu: goto label_1045fc;
            case 0x104600u: goto label_104600;
            case 0x104610u: goto label_104610;
            case 0x104624u: goto label_104624;
            case 0x104648u: goto label_104648;
            case 0x104668u: goto label_104668;
            case 0x1046C0u: goto label_1046c0;
            case 0x1046D4u: goto label_1046d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x104704u;
    // 0x104704: 0x0  nop
    ctx->pc = 0x104704u;
    // NOP
}
