#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00210E70
// Address: 0x210e70 - 0x211228
void sub_00210E70_0x210e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210E70_0x210e70");
#endif

    ctx->pc = 0x210e70u;

    // 0x210e70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x210e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x210e74: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x210e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x210e78: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x210e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x210e7c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x210e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x210e80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x210e80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210e84: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x210e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x210e88: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x210e88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210e8c: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x210e8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x210e90: 0x700694a9  por         $s2, $zero, $a2
    ctx->pc = 0x210e90u;
    SET_GPR_VEC(ctx, 18, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 6)));
    // 0x210e94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x210e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x210e98: 0xc454c658  lwc1        $f20, -0x39A8($v0)
    ctx->pc = 0x210e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x210e9c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x210e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x210ea0: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x210ea0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
    // 0x210ea4: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x210ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
    // 0x210ea8: 0x40f809  jalr        $v0
    ctx->pc = 0x210EA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x210EB0u);
        ctx->pc = 0x210EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210EA8u;
            // 0x210eac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x210EB0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x210F78u: goto label_210f78;
            case 0x210F7Cu: goto label_210f7c;
            case 0x211008u: goto label_211008;
            case 0x211060u: goto label_211060;
            case 0x211078u: goto label_211078;
            case 0x2110B8u: goto label_2110b8;
            case 0x211130u: goto label_211130;
            case 0x211160u: goto label_211160;
            case 0x2111C0u: goto label_2111c0;
            case 0x2111F8u: goto label_2111f8;
            case 0x2111FCu: goto label_2111fc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x210EB0u; }
            if (ctx->pc != 0x210EB0u) { return; }
        }
        }
    }
    ctx->pc = 0x210EB0u;
    // 0x210eb0: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x210eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x210eb4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x210eb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x210eb8: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x210eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x210ebc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x210ebcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x210ec0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x210ec0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x210ec4: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x210ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x210ec8: 0xc601016c  lwc1        $f1, 0x16C($s0)
    ctx->pc = 0x210ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x210ecc: 0x30420380  andi        $v0, $v0, 0x380
    ctx->pc = 0x210eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)896);
    // 0x210ed0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x210ed0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x210ed4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x210ed4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x210ed8: 0x14400077  bnez        $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x210ED8u;
    {
        const bool branch_taken_0x210ed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210ED8u;
            // 0x210edc: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x210ed8) {
            ctx->pc = 0x2110B8u;
            goto label_2110b8;
        }
    }
    ctx->pc = 0x210EE0u;
    // 0x210ee0: 0x7a0400e0  lq          $a0, 0xE0($s0)
    ctx->pc = 0x210ee0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x210ee4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x210ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x210ee8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x210ee8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x210eec: 0xc077f54  jal         func_1DFD50
    ctx->pc = 0x210EECu;
    SET_GPR_U32(ctx, 31, 0x210EF4u);
    ctx->pc = 0x210EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210EECu;
            // 0x210ef0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFD50u;
    if (runtime->hasFunction(0x1DFD50u)) {
        auto targetFn = runtime->lookupFunction(0x1DFD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210EF4u; }
        if (ctx->pc != 0x210EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFD50_0x1dfd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210EF4u; }
        if (ctx->pc != 0x210EF4u) { return; }
    }
    ctx->pc = 0x210EF4u;
    // 0x210ef4: 0x70021ca9  por         $v1, $zero, $v0
    ctx->pc = 0x210ef4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x210ef8: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x210ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x210efc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x210efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x210f00: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x210F00u;
    {
        const bool branch_taken_0x210f00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210F00u;
            // 0x210f04: 0x7e0300e0  sq          $v1, 0xE0($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 224), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210f00) {
            ctx->pc = 0x210F7Cu;
            goto label_210f7c;
        }
    }
    ctx->pc = 0x210F08u;
    // 0x210f08: 0x8e02024c  lw          $v0, 0x24C($s0)
    ctx->pc = 0x210f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 588)));
    // 0x210f0c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x210F0Cu;
    {
        const bool branch_taken_0x210f0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210F0Cu;
            // 0x210f10: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210f0c) {
            ctx->pc = 0x210F78u;
            goto label_210f78;
        }
    }
    ctx->pc = 0x210F14u;
    // 0x210f14: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x210f14u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x210f18: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x210f18u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x210f1c: 0x724210a8  pceqw       $v0, $s2, $v0
    ctx->pc = 0x210f1cu;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 18), GPR_VEC(ctx, 2)));
    // 0x210f20: 0x700215c8  ppach       $v0, $zero, $v0
    ctx->pc = 0x210f20u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x210f24: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x210f24u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x210f28: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x210f28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x210f2c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x210f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x210f30: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x210f30u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x210f34: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x210F34u;
    {
        const bool branch_taken_0x210f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x210f34) {
            ctx->pc = 0x210F38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x210F34u;
            // 0x210f38: 0xae240000  sw          $a0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x210F7Cu;
            goto label_210f7c;
        }
    }
    ctx->pc = 0x210F3Cu;
    // 0x210f3c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x210f3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x210f40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x210f40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x210f44: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x210f44u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x210f48: 0x0  nop
    ctx->pc = 0x210f48u;
    // NOP
    // 0x210f4c: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
    ctx->pc = 0x210F4Cu;
    {
        const bool branch_taken_0x210f4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x210f4c) {
            ctx->pc = 0x210F50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x210F4Cu;
            // 0x210f50: 0xae240000  sw          $a0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x210F7Cu;
            goto label_210f7c;
        }
    }
    ctx->pc = 0x210F54u;
    // 0x210f54: 0x70031789  pexew       $v0, $v1
    ctx->pc = 0x210f54u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x210f58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x210f58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x210f5c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x210f5cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x210f60: 0x0  nop
    ctx->pc = 0x210f60u;
    // NOP
    // 0x210f64: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x210F64u;
    {
        const bool branch_taken_0x210f64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x210f64) {
            ctx->pc = 0x210F68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x210F64u;
            // 0x210f68: 0xae240000  sw          $a0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x210F7Cu;
            goto label_210f7c;
        }
    }
    ctx->pc = 0x210F6Cu;
    // 0x210f6c: 0x9202029a  lbu         $v0, 0x29A($s0)
    ctx->pc = 0x210f6cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 666)));
    // 0x210f70: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x210f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x210f74: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x210f74u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_210f78:
    // 0x210f78: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x210f78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_210f7c:
    // 0x210f7c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x210f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x210f80: 0x1440009e  bnez        $v0, . + 4 + (0x9E << 2)
    ctx->pc = 0x210F80u;
    {
        const bool branch_taken_0x210f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210F80u;
            // 0x210f84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210f80) {
            ctx->pc = 0x2111FCu;
            goto label_2111fc;
        }
    }
    ctx->pc = 0x210F88u;
    // 0x210f88: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x210f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x210f8c: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x210f8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x210f90: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x210f90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x210f94: 0xc4405e98  lwc1        $f0, 0x5E98($v0)
    ctx->pc = 0x210f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x210f98: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x210f98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x210f9c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x210f9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x210fa0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x210fa0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x210fa4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x210fa4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x210fa8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x210fa8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x210fac: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x210facu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x210fb0: 0x4a820840  vaddx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x210fb0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x210fb4: 0xda0200e0  lqc2        $vf2, 0xE0($s0)
    ctx->pc = 0x210fb4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x210fb8: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x210fb8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x210fbc: 0xfa0200e0  sqc2        $vf2, 0xE0($s0)
    ctx->pc = 0x210fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 224), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x210fc0: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x210fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x210fc4: 0x3042004c  andi        $v0, $v0, 0x4C
    ctx->pc = 0x210fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)76);
    // 0x210fc8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x210FC8u;
    {
        const bool branch_taken_0x210fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210FC8u;
            // 0x210fcc: 0x48241000  qmfc2.ni    $a0, $vf2 (Delay Slot)
        SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210fc8) {
            ctx->pc = 0x211008u;
            goto label_211008;
        }
    }
    ctx->pc = 0x210FD0u;
    // 0x210fd0: 0x3c01c448  lui         $at, 0xC448
    ctx->pc = 0x210fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50248 << 16));
    // 0x210fd4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x210fd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x210fd8: 0x700417c9  prot3w      $v0, $a0
    ctx->pc = 0x210fd8u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x210fdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x210fdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x210fe0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x210fe0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x210fe4: 0x0  nop
    ctx->pc = 0x210fe4u;
    // NOP
    // 0x210fe8: 0x45000084  bc1f        . + 4 + (0x84 << 2)
    ctx->pc = 0x210FE8u;
    {
        const bool branch_taken_0x210fe8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x210FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210FE8u;
            // 0x210fec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210fe8) {
            ctx->pc = 0x2111FCu;
            goto label_2111fc;
        }
    }
    ctx->pc = 0x210FF0u;
    // 0x210ff0: 0x3c02c448  lui         $v0, 0xC448
    ctx->pc = 0x210ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50248 << 16));
    // 0x210ff4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x210ff4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x210ff8: 0x4a810080  vaddx.y     $vf2, $vf0, $vf1x
    ctx->pc = 0x210ff8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x210ffc: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x210FFCu;
    {
        const bool branch_taken_0x210ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210FFCu;
            // 0x211000: 0xfa0200e0  sqc2        $vf2, 0xE0($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 224), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210ffc) {
            ctx->pc = 0x2111FCu;
            goto label_2111fc;
        }
    }
    ctx->pc = 0x211004u;
    // 0x211004: 0x0  nop
    ctx->pc = 0x211004u;
    // NOP
label_211008:
    // 0x211008: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x211008u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x21100c: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x21100cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x211010: 0x8e020260  lw          $v0, 0x260($s0)
    ctx->pc = 0x211010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x211014: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x211014u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x211018: 0x9204029a  lbu         $a0, 0x29A($s0)
    ctx->pc = 0x211018u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 666)));
    // 0x21101c: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x21101cu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x211020: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x211020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211024: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x211024u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211028: 0x46000004  c1          0x4
    ctx->pc = 0x211028u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x21102c: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x21102cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x211030: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x211030u;
    {
        const bool branch_taken_0x211030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211030u;
            // 0x211034: 0x46020842  mul.s       $f1, $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x211030) {
            ctx->pc = 0x211078u;
            goto label_211078;
        }
    }
    ctx->pc = 0x211038u;
    // 0x211038: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x211038u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21103c: 0x0  nop
    ctx->pc = 0x21103cu;
    // NOP
    // 0x211040: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x211040u;
    {
        const bool branch_taken_0x211040 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x211044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211040u;
            // 0x211044: 0x308200fd  andi        $v0, $a0, 0xFD (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)253);
        ctx->in_delay_slot = false;
        if (branch_taken_0x211040) {
            ctx->pc = 0x211060u;
            goto label_211060;
        }
    }
    ctx->pc = 0x211048u;
    // 0x211048: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x211048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21104c: 0xa202029a  sb          $v0, 0x29A($s0)
    ctx->pc = 0x21104cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 666), (uint8_t)GPR_U32(ctx, 2));
    // 0x211050: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x211050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
    // 0x211054: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x211054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x211058: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x211058u;
    {
        const bool branch_taken_0x211058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21105Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211058u;
            // 0x21105c: 0xac6200f4  sw          $v0, 0xF4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211058) {
            ctx->pc = 0x2111F8u;
            goto label_2111f8;
        }
    }
    ctx->pc = 0x211060u;
label_211060:
    // 0x211060: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x211060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x211064: 0x2403f7ff  addiu       $v1, $zero, -0x801
    ctx->pc = 0x211064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x211068: 0x8c8200f4  lw          $v0, 0xF4($a0)
    ctx->pc = 0x211068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x21106c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x21106cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x211070: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x211070u;
    {
        const bool branch_taken_0x211070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211070u;
            // 0x211074: 0xac8200f4  sw          $v0, 0xF4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211070) {
            ctx->pc = 0x2111F8u;
            goto label_2111f8;
        }
    }
    ctx->pc = 0x211078u;
label_211078:
    // 0x211078: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x211078u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x21107c: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x21107cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x211080: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x211080u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x211084: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x211084u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211088: 0x46000004  c1          0x4
    ctx->pc = 0x211088u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x21108c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x21108cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x211090: 0x0  nop
    ctx->pc = 0x211090u;
    // NOP
    // 0x211094: 0x45000059  bc1f        . + 4 + (0x59 << 2)
    ctx->pc = 0x211094u;
    {
        const bool branch_taken_0x211094 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x211098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211094u;
            // 0x211098: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211094) {
            ctx->pc = 0x2111FCu;
            goto label_2111fc;
        }
    }
    ctx->pc = 0x21109Cu;
    // 0x21109c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x21109cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x2110a0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2110a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2110a4: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x2110a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2110a8: 0x4be11058  vmulx.xyzw  $vf1, $vf2, $vf1x
    ctx->pc = 0x2110a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2110ac: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x2110ACu;
    {
        const bool branch_taken_0x2110ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2110B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2110ACu;
            // 0x2110b0: 0xfa0100e0  sqc2        $vf1, 0xE0($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 224), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2110ac) {
            ctx->pc = 0x2111F8u;
            goto label_2111f8;
        }
    }
    ctx->pc = 0x2110B4u;
    // 0x2110b4: 0x0  nop
    ctx->pc = 0x2110b4u;
    // NOP
label_2110b8:
    // 0x2110b8: 0x7a0400e0  lq          $a0, 0xE0($s0)
    ctx->pc = 0x2110b8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x2110bc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2110bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2110c0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2110c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2110c4: 0xc077f54  jal         func_1DFD50
    ctx->pc = 0x2110C4u;
    SET_GPR_U32(ctx, 31, 0x2110CCu);
    ctx->pc = 0x2110C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2110C4u;
            // 0x2110c8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFD50u;
    if (runtime->hasFunction(0x1DFD50u)) {
        auto targetFn = runtime->lookupFunction(0x1DFD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2110CCu; }
        if (ctx->pc != 0x2110CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFD50_0x1dfd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2110CCu; }
        if (ctx->pc != 0x2110CCu) { return; }
    }
    ctx->pc = 0x2110CCu;
    // 0x2110cc: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x2110ccu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2110d0: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x2110d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x2110d4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x2110d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x2110d8: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x2110D8u;
    {
        const bool branch_taken_0x2110d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2110DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2110D8u;
            // 0x2110dc: 0xfa0300e0  sqc2        $vf3, 0xE0($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 224), _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2110d8) {
            ctx->pc = 0x2111F8u;
            goto label_2111f8;
        }
    }
    ctx->pc = 0x2110E0u;
    // 0x2110e0: 0x8e020260  lw          $v0, 0x260($s0)
    ctx->pc = 0x2110e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x2110e4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2110e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2110e8: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x2110e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2110ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2110ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2110f0: 0x0  nop
    ctx->pc = 0x2110f0u;
    // NOP
    // 0x2110f4: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x2110F4u;
    {
        const bool branch_taken_0x2110f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2110F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2110F4u;
            // 0x2110f8: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2110f4) {
            ctx->pc = 0x211130u;
            goto label_211130;
        }
    }
    ctx->pc = 0x2110FCu;
    // 0x2110fc: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x2110fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x211100: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x211100u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x211104: 0xc4405e98  lwc1        $f0, 0x5E98($v0)
    ctx->pc = 0x211104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211108: 0x3c013ccc  lui         $at, 0x3CCC
    ctx->pc = 0x211108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15564 << 16));
    // 0x21110c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x21110cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x211110: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x211110u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x211114: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x211114u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x211118: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x211118u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x21111c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x21111cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x211120: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x211120u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x211124: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x211124u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x211128: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x211128u;
    {
        const bool branch_taken_0x211128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x211128) {
            ctx->pc = 0x211160u;
            goto label_211160;
        }
    }
    ctx->pc = 0x211130u;
label_211130:
    // 0x211130: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x211130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x211134: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x211134u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x211138: 0xc4405e98  lwc1        $f0, 0x5E98($v0)
    ctx->pc = 0x211138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21113c: 0x3c013ccc  lui         $at, 0x3CCC
    ctx->pc = 0x21113cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15564 << 16));
    // 0x211140: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x211140u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x211144: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x211144u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x211148: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x211148u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x21114c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x21114cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x211150: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x211150u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x211154: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x211154u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x211158: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x211158u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x21115c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x21115cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_211160:
    // 0x211160: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x211160u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x211164: 0x4a820840  vaddx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x211164u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x211168: 0x4be11868  vadd.xyzw   $vf1, $vf3, $vf1
    ctx->pc = 0x211168u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x21116c: 0xfa0100e0  sqc2        $vf1, 0xE0($s0)
    ctx->pc = 0x21116cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x211170: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x211170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x211174: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x211174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x211178: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x211178u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x21117c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21117cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211180: 0xc4425e98  lwc1        $f2, 0x5E98($v0)
    ctx->pc = 0x211180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x211184: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x211184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x211188: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x211188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x21118c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x21118cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x211190: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x211190u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x211194: 0xda0300e0  lqc2        $vf3, 0xE0($s0)
    ctx->pc = 0x211194u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x211198: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x211198u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x21119c: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x21119cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x2111a0: 0x700417c9  prot3w      $v0, $a0
    ctx->pc = 0x2111a0u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x2111a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2111a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2111a8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2111a8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2111ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2111acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2111b0: 0x0  nop
    ctx->pc = 0x2111b0u;
    // NOP
    // 0x2111b4: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x2111B4u;
    {
        const bool branch_taken_0x2111b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2111b4) {
            ctx->pc = 0x2111B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2111B4u;
            // 0x2111b8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2111C0u;
            goto label_2111c0;
        }
    }
    ctx->pc = 0x2111BCu;
    // 0x2111bc: 0x0  nop
    ctx->pc = 0x2111bcu;
    // NOP
label_2111c0:
    // 0x2111c0: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2111C0u;
    {
        const bool branch_taken_0x2111c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2111C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2111C0u;
            // 0x2111c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2111c0) {
            ctx->pc = 0x2111FCu;
            goto label_2111fc;
        }
    }
    ctx->pc = 0x2111C8u;
    // 0x2111c8: 0x46141002  mul.s       $f0, $f2, $f20
    ctx->pc = 0x2111c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x2111cc: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2111ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x2111d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2111d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2111d4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2111d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2111d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2111d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2111dc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2111dcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2111e0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x2111e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2111e4: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x2111e4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x2111e8: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x2111e8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2111ec: 0x4a820840  vaddx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x2111ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2111f0: 0x4be1186c  vsub.xyzw   $vf1, $vf3, $vf1
    ctx->pc = 0x2111f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2111f4: 0xfa0100e0  sqc2        $vf1, 0xE0($s0)
    ctx->pc = 0x2111f4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 224), _mm_castps_si128(ctx->vu0_vf[1]));
label_2111f8:
    // 0x2111f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2111f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2111fc:
    // 0x2111fc: 0x70122ca9  por         $a1, $zero, $s2
    ctx->pc = 0x2111fcu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 18)));
    // 0x211200: 0xc0794f6  jal         func_1E53D8
    ctx->pc = 0x211200u;
    SET_GPR_U32(ctx, 31, 0x211208u);
    ctx->pc = 0x211204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211200u;
            // 0x211204: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E53D8u;
    if (runtime->hasFunction(0x1E53D8u)) {
        auto targetFn = runtime->lookupFunction(0x1E53D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211208u; }
        if (ctx->pc != 0x211208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1e53d8_0x1e5428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211208u; }
        if (ctx->pc != 0x211208u) { return; }
    }
    ctx->pc = 0x211208u;
    // 0x211208: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x211208u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21120c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x21120cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x211210: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x211210u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211214: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x211214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211218: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x211218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x21121c: 0x3e00008  jr          $ra
    ctx->pc = 0x21121Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21121Cu;
            // 0x211220: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x210F78u: goto label_210f78;
            case 0x210F7Cu: goto label_210f7c;
            case 0x211008u: goto label_211008;
            case 0x211060u: goto label_211060;
            case 0x211078u: goto label_211078;
            case 0x2110B8u: goto label_2110b8;
            case 0x211130u: goto label_211130;
            case 0x211160u: goto label_211160;
            case 0x2111C0u: goto label_2111c0;
            case 0x2111F8u: goto label_2111f8;
            case 0x2111FCu: goto label_2111fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x211224u;
    // 0x211224: 0x0  nop
    ctx->pc = 0x211224u;
    // NOP
}
