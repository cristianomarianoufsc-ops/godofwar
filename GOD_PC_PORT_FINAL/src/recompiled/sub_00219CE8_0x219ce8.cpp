#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00219CE8
// Address: 0x219ce8 - 0x21a1a8
void sub_00219CE8_0x219ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219CE8_0x219ce8");
#endif

    ctx->pc = 0x219ce8u;

    // 0x219ce8: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x219ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x219cec: 0x7fb700d0  sq          $s7, 0xD0($sp)
    ctx->pc = 0x219cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 23));
    // 0x219cf0: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x219cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
    // 0x219cf4: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x219cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
    // 0x219cf8: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x219cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
    // 0x219cfc: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x219cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
    // 0x219d00: 0x7fb40100  sq          $s4, 0x100($sp)
    ctx->pc = 0x219d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 20));
    // 0x219d04: 0x7fb500f0  sq          $s5, 0xF0($sp)
    ctx->pc = 0x219d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 21));
    // 0x219d08: 0x7fb600e0  sq          $s6, 0xE0($sp)
    ctx->pc = 0x219d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 22));
    // 0x219d0c: 0x7fbe00c0  sq          $fp, 0xC0($sp)
    ctx->pc = 0x219d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 30));
    // 0x219d10: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x219d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x219d14: 0xc08648a  jal         func_219228
    ctx->pc = 0x219D14u;
    SET_GPR_U32(ctx, 31, 0x219D1Cu);
    ctx->pc = 0x219D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219D14u;
            // 0x219d18: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x219228u;
    if (runtime->hasFunction(0x219228u)) {
        auto targetFn = runtime->lookupFunction(0x219228u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219D1Cu; }
        if (ctx->pc != 0x219D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_219228_0x219248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219D1Cu; }
        if (ctx->pc != 0x219D1Cu) { return; }
    }
    ctx->pc = 0x219D1Cu;
    // 0x219d1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x219d1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219d20: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x219d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x219d24: 0x86020060  lh          $v0, 0x60($s0)
    ctx->pc = 0x219d24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x219d28: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x219D28u;
    {
        const bool branch_taken_0x219d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x219D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219D28u;
            // 0x219d2c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219d28) {
            ctx->pc = 0x219D38u;
            goto label_219d38;
        }
    }
    ctx->pc = 0x219D30u;
    // 0x219d30: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x219D30u;
    {
        const bool branch_taken_0x219d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219D30u;
            // 0x219d34: 0x26030020  addiu       $v1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219d30) {
            ctx->pc = 0x219D54u;
            goto label_219d54;
        }
    }
    ctx->pc = 0x219D38u;
label_219d38:
    // 0x219d38: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x219d38u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x219d3c: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x219d3cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x219d40: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x219D40u;
    {
        const bool branch_taken_0x219d40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x219D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219D40u;
            // 0x219d44: 0x26030070  addiu       $v1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219d40) {
            ctx->pc = 0x219D54u;
            goto label_219d54;
        }
    }
    ctx->pc = 0x219D48u;
    // 0x219d48: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x219D48u;
    SET_GPR_U32(ctx, 31, 0x219D50u);
    ctx->pc = 0x219D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219D48u;
            // 0x219d4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219D50u; }
        if (ctx->pc != 0x219D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219D50u; }
        if (ctx->pc != 0x219D50u) { return; }
    }
    ctx->pc = 0x219D50u;
    // 0x219d50: 0x26030070  addiu       $v1, $s0, 0x70
    ctx->pc = 0x219d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_219d54:
    // 0x219d54: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x219d54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x219d58: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x219d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219d5c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x219d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x219d60: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x219d60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x219d64: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x219d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x219d68: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x219d68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x219d6c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x219d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x219d70: 0x78630030  lq          $v1, 0x30($v1)
    ctx->pc = 0x219d70u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x219d74: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x219d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
    // 0x219d78: 0xc08647a  jal         func_2191E8
    ctx->pc = 0x219D78u;
    SET_GPR_U32(ctx, 31, 0x219D80u);
    ctx->pc = 0x219D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219D78u;
            // 0x219d7c: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2191E8u;
    if (runtime->hasFunction(0x2191E8u)) {
        auto targetFn = runtime->lookupFunction(0x2191E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219D80u; }
        if (ctx->pc != 0x219D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002191E8_0x2191e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219D80u; }
        if (ctx->pc != 0x219D80u) { return; }
    }
    ctx->pc = 0x219D80u;
    // 0x219d80: 0x8ef50010  lw          $s5, 0x10($s7)
    ctx->pc = 0x219d80u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x219d84: 0x70023ca9  por         $a3, $zero, $v0
    ctx->pc = 0x219d84u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x219d88: 0x8eea0014  lw          $t2, 0x14($s7)
    ctx->pc = 0x219d88u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
    // 0x219d8c: 0x24030065  addiu       $v1, $zero, 0x65
    ctx->pc = 0x219d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x219d90: 0x151040  sll         $v0, $s5, 1
    ctx->pc = 0x219d90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x219d94: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x219d94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x219d98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x219d98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x219d9c: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x219d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x219da0: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x219da0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219da4: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x219da4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x219da8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x219da8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x219dac: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x219dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x219db0: 0xc6e2000c  lwc1        $f2, 0xC($s7)
    ctx->pc = 0x219db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x219db4: 0x255effff  addiu       $fp, $t2, -0x1
    ctx->pc = 0x219db4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x219db8: 0x8eed0038  lw          $t5, 0x38($s7)
    ctx->pc = 0x219db8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 56)));
    // 0x219dbc: 0x46001242  mul.s       $f9, $f2, $f0
    ctx->pc = 0x219dbcu;
    ctx->f[9] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x219dc0: 0xac43c300  sw          $v1, -0x3D00($v0)
    ctx->pc = 0x219dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294951680), GPR_U32(ctx, 3));
    // 0x219dc4: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x219dc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x219dc8: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x219dc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x219dcc: 0x8ee60018  lw          $a2, 0x18($s7)
    ctx->pc = 0x219dccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 24)));
    // 0x219dd0: 0x3c147000  lui         $s4, 0x7000
    ctx->pc = 0x219dd0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)28672 << 16));
    // 0x219dd4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x219dd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219dd8: 0x1940007f  blez        $t2, . + 4 + (0x7F << 2)
    ctx->pc = 0x219DD8u;
    {
        const bool branch_taken_0x219dd8 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x219DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219DD8u;
            // 0x219ddc: 0x7fa70050  sq          $a3, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219dd8) {
            ctx->pc = 0x219FD8u;
            goto label_219fd8;
        }
    }
    ctx->pc = 0x219DE0u;
label_219de0:
    // 0x219de0: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x219de0u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x219de4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x219de4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x219de8: 0x70071789  pexew       $v0, $a3
    ctx->pc = 0x219de8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x219dec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x219decu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x219df0: 0x7fa70050  sq          $a3, 0x50($sp)
    ctx->pc = 0x219df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 7));
    // 0x219df4: 0x27ab0050  addiu       $t3, $sp, 0x50
    ctx->pc = 0x219df4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x219df8: 0x46090842  mul.s       $f1, $f1, $f9
    ctx->pc = 0x219df8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
    // 0x219dfc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x219dfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x219e00: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x219e00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x219e04: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x219e04u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x219e08: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x219e08u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x219e0c: 0x4a420040  vaddx.z     $vf1, $vf0, $vf2x
    ctx->pc = 0x219e0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x219e10: 0xc4c0fffc  lwc1        $f0, -0x4($a2)
    ctx->pc = 0x219e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x219e14: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x219e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x219e18: 0xc4c80000  lwc1        $f8, 0x0($a2)
    ctx->pc = 0x219e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x219e1c: 0x1aa0006a  blez        $s5, . + 4 + (0x6A << 2)
    ctx->pc = 0x219E1Cu;
    {
        const bool branch_taken_0x219e1c = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x219E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219E1Cu;
            // 0x219e20: 0xc4c70004  lwc1        $f7, 0x4($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x219e1c) {
            ctx->pc = 0x219FC8u;
            goto label_219fc8;
        }
    }
    ctx->pc = 0x219E24u;
    // 0x219e24: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x219e24u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_219e28:
    // 0x219e28: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x219e28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x219e2c: 0x46070001  sub.s       $f0, $f0, $f7
    ctx->pc = 0x219e2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
    // 0x219e30: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x219e30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219e34: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x219e34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x219e38: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x219e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x219e3c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x219e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x219e40: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x219e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x219e44: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x219e44u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x219e48: 0x440e0000  mfc1        $t6, $f0
    ctx->pc = 0x219e48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
    // 0x219e4c: 0x710e1b89  pcpyld      $v1, $t0, $t6
    ctx->pc = 0x219e4cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 14)));
    // 0x219e50: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x219e50u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219e54: 0x440e0800  mfc1        $t6, $f1
    ctx->pc = 0x219e54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
    // 0x219e58: 0x71ee1389  pcpyld      $v0, $t7, $t6
    ctx->pc = 0x219e58u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 15), GPR_VEC(ctx, 14)));
    // 0x219e5c: 0xdba60050  lqc2        $vf6, 0x50($sp)
    ctx->pc = 0x219e5cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x219e60: 0x70437cc8  ppacw       $t7, $v0, $v1
    ctx->pc = 0x219e60u;
    SET_GPR_VEC(ctx, 15, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x219e64: 0xdba10090  lqc2        $vf1, 0x90($sp)
    ctx->pc = 0x219e64u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x219e68: 0x48af2000  qmtc2.ni    $t7, $vf4
    ctx->pc = 0x219e68u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 15));
    // 0x219e6c: 0x4be130ac  vsub.xyzw   $vf2, $vf6, $vf1
    ctx->pc = 0x219e6cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x219e70: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x219e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x219e74: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x219e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x219e78: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x219e78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x219e7c: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x219e7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x219e80: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x219e80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x219e84: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x219e84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x219e88: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x219e88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x219e8c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x219e8cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x219e90: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x219e90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x219e94: 0x46043116  rsqrt.s     $f4, $f6, $f4
    ctx->pc = 0x219e94u;
    ctx->f[4] = 1.0f / sqrtf(ctx->f[6]);
    // 0x219e98: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x219e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x219e9c: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x219e9cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x219ea0: 0x4be320d8  vmulx.xyzw  $vf3, $vf4, $vf3x
    ctx->pc = 0x219ea0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x219ea4: 0x4be4116a  vmul.xyzw   $vf5, $vf2, $vf4
    ctx->pc = 0x219ea4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x219ea8: 0x4b052841  vaddy.x     $vf1, $vf5, $vf5y
    ctx->pc = 0x219ea8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x219eac: 0x4b050842  vaddz.x     $vf1, $vf1, $vf5z
    ctx->pc = 0x219eacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x219eb0: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x219eb0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x219eb4: 0xfba30070  sqc2        $vf3, 0x70($sp)
    ctx->pc = 0x219eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x219eb8: 0x4be4212a  vmul.xyzw   $vf4, $vf4, $vf4
    ctx->pc = 0x219eb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x219ebc: 0x4b042041  vaddy.x     $vf1, $vf4, $vf4y
    ctx->pc = 0x219ebcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x219ec0: 0x4b040842  vaddz.x     $vf1, $vf1, $vf4z
    ctx->pc = 0x219ec0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x219ec4: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x219ec4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x219ec8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x219ec8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x219ecc: 0x46003003  div.s       $f0, $f6, $f0
    ctx->pc = 0x219eccu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[6] * 0.0f); } else ctx->f[0] = ctx->f[6] / ctx->f[0];
    // 0x219ed0: 0x440e0000  mfc1        $t6, $f0
    ctx->pc = 0x219ed0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
    // 0x219ed4: 0x48ae0800  qmtc2.ni    $t6, $vf1
    ctx->pc = 0x219ed4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 14));
    // 0x219ed8: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x219ed8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x219edc: 0x4be310ac  vsub.xyzw   $vf2, $vf2, $vf3
    ctx->pc = 0x219edcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x219ee0: 0xfba20080  sqc2        $vf2, 0x80($sp)
    ctx->pc = 0x219ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x219ee4: 0x440f2000  mfc1        $t7, $f4
    ctx->pc = 0x219ee4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x219ee8: 0x48af1800  qmtc2.ni    $t7, $vf3
    ctx->pc = 0x219ee8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 15));
    // 0x219eec: 0x4be310d8  vmulx.xyzw  $vf3, $vf2, $vf3x
    ctx->pc = 0x219eecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x219ef0: 0x46043103  div.s       $f4, $f6, $f4
    ctx->pc = 0x219ef0u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[6] * 0.0f); } else ctx->f[4] = ctx->f[6] / ctx->f[4];
    // 0x219ef4: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x219ef4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x219ef8: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x219ef8u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x219efc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x219efcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x219f00: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x219f00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x219f04: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x219f04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x219f08: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x219f08u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x219f0c: 0x4a810080  vaddx.y     $vf2, $vf0, $vf1x
    ctx->pc = 0x219f0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x219f10: 0x4be2112a  vmul.xyzw   $vf4, $vf2, $vf2
    ctx->pc = 0x219f10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x219f14: 0xfba20080  sqc2        $vf2, 0x80($sp)
    ctx->pc = 0x219f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x219f18: 0x4b042041  vaddy.x     $vf1, $vf4, $vf4y
    ctx->pc = 0x219f18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x219f1c: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x219f1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x219f20: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x219f20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x219f24: 0x4b040842  vaddz.x     $vf1, $vf1, $vf4z
    ctx->pc = 0x219f24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x219f28: 0x482e0800  qmfc2.ni    $t6, $vf1
    ctx->pc = 0x219f28u;
    SET_GPR_VEC(ctx, 14, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x219f2c: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x219f2cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x219f30: 0x448e0000  mtc1        $t6, $f0
    ctx->pc = 0x219f30u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x219f34: 0x482f1800  qmfc2.ni    $t7, $vf3
    ctx->pc = 0x219f34u;
    SET_GPR_VEC(ctx, 15, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x219f38: 0x46003196  rsqrt.s     $f6, $f6, $f0
    ctx->pc = 0x219f38u;
    ctx->f[6] = 1.0f / sqrtf(ctx->f[6]);
    // 0x219f3c: 0x700f1789  pexew       $v0, $t7
    ctx->pc = 0x219f3cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x219f40: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x219f40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x219f44: 0x48233000  qmfc2.ni    $v1, $vf6
    ctx->pc = 0x219f44u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x219f48: 0x46062102  mul.s       $f4, $f4, $f6
    ctx->pc = 0x219f48u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x219f4c: 0x448f0800  mtc1        $t7, $f1
    ctx->pc = 0x219f4cu;
    { uint32_t bits = GPR_U32(ctx, 15); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x219f50: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x219f50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x219f54: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x219f54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x219f58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x219f58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x219f5c: 0x460918c0  add.s       $f3, $f3, $f9
    ctx->pc = 0x219f5cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[9]);
    // 0x219f60: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x219f60u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x219f64: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x219f64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x219f68: 0x46004002  mul.s       $f0, $f8, $f0
    ctx->pc = 0x219f68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x219f6c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x219f6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x219f70: 0x44041800  mfc1        $a0, $f3
    ctx->pc = 0x219f70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x219f74: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x219f74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x219f78: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x219f78u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x219f7c: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x219f7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x219f80: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x219f80u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x219f84: 0xa6820004  sh          $v0, 0x4($s4)
    ctx->pc = 0x219f84u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x219f88: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x219f88u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x219f8c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x219f8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x219f90: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x219f90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x219f94: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x219f94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x219f98: 0xa6820002  sh          $v0, 0x2($s4)
    ctx->pc = 0x219f98u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x219f9c: 0xa6830000  sh          $v1, 0x0($s4)
    ctx->pc = 0x219f9cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x219fa0: 0xd9610000  lqc2        $vf1, 0x0($t3)
    ctx->pc = 0x219fa0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x219fa4: 0x4b020040  vaddx.x     $vf1, $vf0, $vf2x
    ctx->pc = 0x219fa4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x219fa8: 0x46004006  mov.s       $f0, $f8
    ctx->pc = 0x219fa8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[8]);
    // 0x219fac: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x219facu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x219fb0: 0x46003a06  mov.s       $f8, $f7
    ctx->pc = 0x219fb0u;
    ctx->f[8] = FPU_MOV_S(ctx->f[7]);
    // 0x219fb4: 0xf9610000  sqc2        $vf1, 0x0($t3)
    ctx->pc = 0x219fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x219fb8: 0x26940006  addiu       $s4, $s4, 0x6
    ctx->pc = 0x219fb8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 6));
    // 0x219fbc: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x219fbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x219fc0: 0x1520ff99  bnez        $t1, . + 4 + (-0x67 << 2)
    ctx->pc = 0x219FC0u;
    {
        const bool branch_taken_0x219fc0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x219FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219FC0u;
            // 0x219fc4: 0xc4c70004  lwc1        $f7, 0x4($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x219fc0) {
            ctx->pc = 0x219E28u;
            runtime->cooperativeGuestYield();
            goto label_219e28;
        }
    }
    ctx->pc = 0x219FC8u;
label_219fc8:
    // 0x219fc8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x219fc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x219fcc: 0x26a102a  slt         $v0, $s3, $t2
    ctx->pc = 0x219fccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x219fd0: 0x1440ff83  bnez        $v0, . + 4 + (-0x7D << 2)
    ctx->pc = 0x219FD0u;
    {
        const bool branch_taken_0x219fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x219fd0) {
            ctx->pc = 0x219DE0u;
            runtime->cooperativeGuestYield();
            goto label_219de0;
        }
    }
    ctx->pc = 0x219FD8u;
label_219fd8:
    // 0x219fd8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x219fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x219fdc: 0x18d7018  mult        $t6, $t4, $t5
    ctx->pc = 0x219fdcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x219fe0: 0x2a21018  mult        $v0, $s5, $v0
    ctx->pc = 0x219fe0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x219fe4: 0x3c147000  lui         $s4, 0x7000
    ctx->pc = 0x219fe4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)28672 << 16));
    // 0x219fe8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x219fe8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219fec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x219fecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219ff0: 0xafae00a4  sw          $t6, 0xA4($sp)
    ctx->pc = 0x219ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 14));
    // 0x219ff4: 0x1bc00034  blez        $fp, . + 4 + (0x34 << 2)
    ctx->pc = 0x219FF4u;
    {
        const bool branch_taken_0x219ff4 = (GPR_S32(ctx, 30) <= 0);
        ctx->pc = 0x219FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219FF4u;
            // 0x219ff8: 0x548821  addu        $s1, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219ff4) {
            ctx->pc = 0x21A0C8u;
            goto label_21a0c8;
        }
    }
    ctx->pc = 0x219FFCu;
    // 0x219ffc: 0x3c0982d  daddu       $s3, $fp, $zero
    ctx->pc = 0x219ffcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a000: 0x8ee40028  lw          $a0, 0x28($s7)
    ctx->pc = 0x21a000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 40)));
    // 0x21a004: 0x0  nop
    ctx->pc = 0x21a004u;
    // NOP
label_21a008:
    // 0x21a008: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x21a008u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a00c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21a00cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a010: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x21a010u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a014: 0x80880147  lb          $t0, 0x147($a0)
    ctx->pc = 0x21a014u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 327)));
    // 0x21a018: 0xc0505f6  jal         func_1417D8
    ctx->pc = 0x21A018u;
    SET_GPR_U32(ctx, 31, 0x21A020u);
    ctx->pc = 0x21A01Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A018u;
            // 0x21a01c: 0x2d080001  sltiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1417D8u;
    if (runtime->hasFunction(0x1417D8u)) {
        auto targetFn = runtime->lookupFunction(0x1417D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A020u; }
        if (ctx->pc != 0x21A020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001417D8_0x1417d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A020u; }
        if (ctx->pc != 0x21A020u) { return; }
    }
    ctx->pc = 0x21A020u;
    // 0x21a020: 0x8ee40028  lw          $a0, 0x28($s7)
    ctx->pc = 0x21a020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 40)));
    // 0x21a024: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x21a024u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a028: 0x8faf00a0  lw          $t7, 0xA0($sp)
    ctx->pc = 0x21a028u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x21a02c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21a02cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a030: 0x80880147  lb          $t0, 0x147($a0)
    ctx->pc = 0x21a030u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 327)));
    // 0x21a034: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x21a034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21a038: 0x24f9021  addu        $s2, $s2, $t7
    ctx->pc = 0x21a038u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 15)));
    // 0x21a03c: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x21a03cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a040: 0xc0505f6  jal         func_1417D8
    ctx->pc = 0x21A040u;
    SET_GPR_U32(ctx, 31, 0x21A048u);
    ctx->pc = 0x21A044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A040u;
            // 0x21a044: 0x2d080001  sltiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1417D8u;
    if (runtime->hasFunction(0x1417D8u)) {
        auto targetFn = runtime->lookupFunction(0x1417D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A048u; }
        if (ctx->pc != 0x21A048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001417D8_0x1417d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A048u; }
        if (ctx->pc != 0x21A048u) { return; }
    }
    ctx->pc = 0x21A048u;
    // 0x21a048: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x21a048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x21a04c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x21a04cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a050: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x21a050u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x21a054: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21A054u;
    {
        const bool branch_taken_0x21a054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21a054) {
            ctx->pc = 0x21A064u;
            goto label_21a064;
        }
    }
    ctx->pc = 0x21A05Cu;
    // 0x21a05c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x21a05cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a060: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x21a060u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_21a064:
    // 0x21a064: 0x5aa00016  blezl       $s5, . + 4 + (0x16 << 2)
    ctx->pc = 0x21A064u;
    {
        const bool branch_taken_0x21a064 = (GPR_S32(ctx, 21) <= 0);
        if (branch_taken_0x21a064) {
            ctx->pc = 0x21A068u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21A064u;
            // 0x21a068: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21A0C0u;
            goto label_21a0c0;
        }
    }
    ctx->pc = 0x21A06Cu;
    // 0x21a06c: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x21a06cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_21a070:
    // 0x21a070: 0xcd000040  pref        0x00, 0x40($t0)
    ctx->pc = 0x21a070u;
    // PREF instruction (ignored)
    // 0x21a074: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x21a074u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x21a078: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x21a078u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x21a07c: 0x86830002  lh          $v1, 0x2($s4)
    ctx->pc = 0x21a07cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x21a080: 0x86240000  lh          $a0, 0x0($s1)
    ctx->pc = 0x21a080u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21a084: 0x86250002  lh          $a1, 0x2($s1)
    ctx->pc = 0x21a084u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x21a088: 0x86860004  lh          $a2, 0x4($s4)
    ctx->pc = 0x21a088u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x21a08c: 0x86270004  lh          $a3, 0x4($s1)
    ctx->pc = 0x21a08cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x21a090: 0x26940006  addiu       $s4, $s4, 0x6
    ctx->pc = 0x21a090u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 6));
    // 0x21a094: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x21a094u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x21a098: 0x26310006  addiu       $s1, $s1, 0x6
    ctx->pc = 0x21a098u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 6));
    // 0x21a09c: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x21a09cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
    // 0x21a0a0: 0xad040010  sw          $a0, 0x10($t0)
    ctx->pc = 0x21a0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 4));
    // 0x21a0a4: 0xad050014  sw          $a1, 0x14($t0)
    ctx->pc = 0x21a0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 5));
    // 0x21a0a8: 0xae060004  sw          $a2, 0x4($s0)
    ctx->pc = 0x21a0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 6));
    // 0x21a0ac: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x21a0acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x21a0b0: 0xae070014  sw          $a3, 0x14($s0)
    ctx->pc = 0x21a0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 7));
    // 0x21a0b4: 0x1520ffee  bnez        $t1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x21A0B4u;
    {
        const bool branch_taken_0x21a0b4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A0B4u;
            // 0x21a0b8: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a0b4) {
            ctx->pc = 0x21A070u;
            runtime->cooperativeGuestYield();
            goto label_21a070;
        }
    }
    ctx->pc = 0x21A0BCu;
    // 0x21a0bc: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x21a0bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_21a0c0:
    // 0x21a0c0: 0x5660ffd1  bnel        $s3, $zero, . + 4 + (-0x2F << 2)
    ctx->pc = 0x21A0C0u;
    {
        const bool branch_taken_0x21a0c0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x21a0c0) {
            ctx->pc = 0x21A0C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21A0C0u;
            // 0x21a0c4: 0x8ee40028  lw          $a0, 0x28($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21A008u;
            runtime->cooperativeGuestYield();
            goto label_21a008;
        }
    }
    ctx->pc = 0x21A0C8u;
label_21a0c8:
    // 0x21a0c8: 0x8ee20030  lw          $v0, 0x30($s7)
    ctx->pc = 0x21a0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 48)));
    // 0x21a0cc: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x21A0CCu;
    {
        const bool branch_taken_0x21a0cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A0D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A0CCu;
            // 0x21a0d0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a0cc) {
            ctx->pc = 0x21A174u;
            goto label_21a174;
        }
    }
    ctx->pc = 0x21A0D4u;
    // 0x21a0d4: 0x3c147000  lui         $s4, 0x7000
    ctx->pc = 0x21a0d4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)28672 << 16));
    // 0x21a0d8: 0x2a21018  mult        $v0, $s5, $v0
    ctx->pc = 0x21a0d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x21a0dc: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x21a0dcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a0e0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x21a0e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a0e4: 0x1bc00023  blez        $fp, . + 4 + (0x23 << 2)
    ctx->pc = 0x21A0E4u;
    {
        const bool branch_taken_0x21a0e4 = (GPR_S32(ctx, 30) <= 0);
        ctx->pc = 0x21A0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A0E4u;
            // 0x21a0e8: 0x548021  addu        $s0, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a0e4) {
            ctx->pc = 0x21A174u;
            goto label_21a174;
        }
    }
    ctx->pc = 0x21A0ECu;
    // 0x21a0ec: 0x3c0982d  daddu       $s3, $fp, $zero
    ctx->pc = 0x21a0ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a0f0: 0x8ee40030  lw          $a0, 0x30($s7)
    ctx->pc = 0x21a0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 48)));
    // 0x21a0f4: 0x0  nop
    ctx->pc = 0x21a0f4u;
    // NOP
label_21a0f8:
    // 0x21a0f8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x21a0f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a0fc: 0x8fae00a0  lw          $t6, 0xA0($sp)
    ctx->pc = 0x21a0fcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x21a100: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21a100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a104: 0x80880147  lb          $t0, 0x147($a0)
    ctx->pc = 0x21a104u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 327)));
    // 0x21a108: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x21a108u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a10c: 0x24e9021  addu        $s2, $s2, $t6
    ctx->pc = 0x21a10cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 14)));
    // 0x21a110: 0xc0505f6  jal         func_1417D8
    ctx->pc = 0x21A110u;
    SET_GPR_U32(ctx, 31, 0x21A118u);
    ctx->pc = 0x21A114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A110u;
            // 0x21a114: 0x2d080001  sltiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1417D8u;
    if (runtime->hasFunction(0x1417D8u)) {
        auto targetFn = runtime->lookupFunction(0x1417D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A118u; }
        if (ctx->pc != 0x21A118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001417D8_0x1417d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A118u; }
        if (ctx->pc != 0x21A118u) { return; }
    }
    ctx->pc = 0x21A118u;
    // 0x21a118: 0x8faf00a4  lw          $t7, 0xA4($sp)
    ctx->pc = 0x21a118u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x21a11c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x21a11cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a120: 0x24f102a  slt         $v0, $s2, $t7
    ctx->pc = 0x21a120u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x21a124: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21A124u;
    {
        const bool branch_taken_0x21a124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21a124) {
            ctx->pc = 0x21A134u;
            goto label_21a134;
        }
    }
    ctx->pc = 0x21A12Cu;
    // 0x21a12c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x21a12cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a130: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x21a130u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_21a134:
    // 0x21a134: 0x5aa0000d  blezl       $s5, . + 4 + (0xD << 2)
    ctx->pc = 0x21A134u;
    {
        const bool branch_taken_0x21a134 = (GPR_S32(ctx, 21) <= 0);
        if (branch_taken_0x21a134) {
            ctx->pc = 0x21A138u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21A134u;
            // 0x21a138: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21A16Cu;
            goto label_21a16c;
        }
    }
    ctx->pc = 0x21A13Cu;
    // 0x21a13c: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x21a13cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_21a140:
    // 0x21a140: 0xcc600040  pref        0x00, 0x40($v1)
    ctx->pc = 0x21a140u;
    // PREF instruction (ignored)
    // 0x21a144: 0x86820004  lh          $v0, 0x4($s4)
    ctx->pc = 0x21a144u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x21a148: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x21a148u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x21a14c: 0x26940006  addiu       $s4, $s4, 0x6
    ctx->pc = 0x21a14cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 6));
    // 0x21a150: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x21a150u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x21a154: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x21a154u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x21a158: 0x26100006  addiu       $s0, $s0, 0x6
    ctx->pc = 0x21a158u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
    // 0x21a15c: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x21a15cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x21a160: 0x1520fff7  bnez        $t1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x21A160u;
    {
        const bool branch_taken_0x21a160 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A160u;
            // 0x21a164: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a160) {
            ctx->pc = 0x21A140u;
            runtime->cooperativeGuestYield();
            goto label_21a140;
        }
    }
    ctx->pc = 0x21A168u;
    // 0x21a168: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x21a168u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_21a16c:
    // 0x21a16c: 0x5660ffe2  bnel        $s3, $zero, . + 4 + (-0x1E << 2)
    ctx->pc = 0x21A16Cu;
    {
        const bool branch_taken_0x21a16c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x21a16c) {
            ctx->pc = 0x21A170u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21A16Cu;
            // 0x21a170: 0x8ee40030  lw          $a0, 0x30($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21A0F8u;
            runtime->cooperativeGuestYield();
            goto label_21a0f8;
        }
    }
    ctx->pc = 0x21A174u;
label_21a174:
    // 0x21a174: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x21a174u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x21a178: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x21a178u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x21a17c: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x21a17cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x21a180: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x21a180u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x21a184: 0x7bb40100  lq          $s4, 0x100($sp)
    ctx->pc = 0x21a184u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x21a188: 0x7bb500f0  lq          $s5, 0xF0($sp)
    ctx->pc = 0x21a188u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x21a18c: 0x7bb600e0  lq          $s6, 0xE0($sp)
    ctx->pc = 0x21a18cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x21a190: 0x7bb700d0  lq          $s7, 0xD0($sp)
    ctx->pc = 0x21a190u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x21a194: 0x7bbe00c0  lq          $fp, 0xC0($sp)
    ctx->pc = 0x21a194u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x21a198: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x21a198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x21a19c: 0x3e00008  jr          $ra
    ctx->pc = 0x21A19Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A1A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A19Cu;
            // 0x21a1a0: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x219D38u: goto label_219d38;
            case 0x219D54u: goto label_219d54;
            case 0x219DE0u: goto label_219de0;
            case 0x219E28u: goto label_219e28;
            case 0x219FC8u: goto label_219fc8;
            case 0x219FD8u: goto label_219fd8;
            case 0x21A008u: goto label_21a008;
            case 0x21A064u: goto label_21a064;
            case 0x21A070u: goto label_21a070;
            case 0x21A0C0u: goto label_21a0c0;
            case 0x21A0C8u: goto label_21a0c8;
            case 0x21A0F8u: goto label_21a0f8;
            case 0x21A134u: goto label_21a134;
            case 0x21A140u: goto label_21a140;
            case 0x21A16Cu: goto label_21a16c;
            case 0x21A174u: goto label_21a174;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21A1A4u;
    // 0x21a1a4: 0x0  nop
    ctx->pc = 0x21a1a4u;
    // NOP
}
