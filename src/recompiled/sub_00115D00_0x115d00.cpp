#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00115D00
// Address: 0x115d00 - 0x116280
void sub_00115D00_0x115d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115D00_0x115d00");
#endif

    ctx->pc = 0x115d00u;

    // 0x115d00: 0x27bdfe00  addiu       $sp, $sp, -0x200
    ctx->pc = 0x115d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966784));
    // 0x115d04: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x115d04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115d08: 0x7fb001e0  sq          $s0, 0x1E0($sp)
    ctx->pc = 0x115d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 16));
    // 0x115d0c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x115d0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115d10: 0x7fb101d0  sq          $s1, 0x1D0($sp)
    ctx->pc = 0x115d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 17));
    // 0x115d14: 0x7fb201c0  sq          $s2, 0x1C0($sp)
    ctx->pc = 0x115d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 18));
    // 0x115d18: 0x7fb301b0  sq          $s3, 0x1B0($sp)
    ctx->pc = 0x115d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 19));
    // 0x115d1c: 0x7fb401a0  sq          $s4, 0x1A0($sp)
    ctx->pc = 0x115d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 20));
    // 0x115d20: 0x7fb50190  sq          $s5, 0x190($sp)
    ctx->pc = 0x115d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 21));
    // 0x115d24: 0x7fb60180  sq          $s6, 0x180($sp)
    ctx->pc = 0x115d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 22));
    // 0x115d28: 0x7fb70170  sq          $s7, 0x170($sp)
    ctx->pc = 0x115d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 23));
    // 0x115d2c: 0x7fbe0160  sq          $fp, 0x160($sp)
    ctx->pc = 0x115d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 30));
    // 0x115d30: 0xffbf0150  sd          $ra, 0x150($sp)
    ctx->pc = 0x115d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 31));
    // 0x115d34: 0xe7b401f0  swc1        $f20, 0x1F0($sp)
    ctx->pc = 0x115d34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
    // 0x115d38: 0x150000f9  bnez        $t0, . + 4 + (0xF9 << 2)
    ctx->pc = 0x115D38u;
    {
        const bool branch_taken_0x115d38 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x115D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115D38u;
            // 0x115d3c: 0xafa600e0  sw          $a2, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115d38) {
            ctx->pc = 0x116120u;
            goto label_116120;
        }
    }
    ctx->pc = 0x115D40u;
    // 0x115d40: 0xc4e0001c  lwc1        $f0, 0x1C($a3)
    ctx->pc = 0x115d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115d44: 0x24044000  addiu       $a0, $zero, 0x4000
    ctx->pc = 0x115d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x115d48: 0xc4e10018  lwc1        $f1, 0x18($a3)
    ctx->pc = 0x115d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x115d4c: 0xc4e20024  lwc1        $f2, 0x24($a3)
    ctx->pc = 0x115d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x115d50: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x115d50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x115d54: 0x8ce2006c  lw          $v0, 0x6C($a3)
    ctx->pc = 0x115d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 108)));
    // 0x115d58: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x115d58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x115d5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x115d5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x115d60: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x115d60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
    // 0x115d64: 0x46020d02  mul.s       $f20, $f1, $f2
    ctx->pc = 0x115d64u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x115d68: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x115d68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x115d6c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x115d6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x115d70: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x115d70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x115d74: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x115d74u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x115d78: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x115d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x115d7c: 0x70421488  pextlw      $v0, $v0, $v0
    ctx->pc = 0x115d7cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x115d80: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x115d80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x115d84: 0x7042ac88  pextlw      $s5, $v0, $v0
    ctx->pc = 0x115d84u;
    SET_GPR_VEC(ctx, 21, PS2_PEXTLW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x115d88: 0x70631c88  pextlw      $v1, $v1, $v1
    ctx->pc = 0x115d88u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 3)));
    // 0x115d8c: 0x7063a488  pextlw      $s4, $v1, $v1
    ctx->pc = 0x115d8cu;
    SET_GPR_VEC(ctx, 20, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 3)));
    // 0x115d90: 0x7fb50000  sq          $s5, 0x0($sp)
    ctx->pc = 0x115d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 21));
    // 0x115d94: 0x7fb40000  sq          $s4, 0x0($sp)
    ctx->pc = 0x115d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 20));
    // 0x115d98: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x115d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x115d9c: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x115d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x115da0: 0x24032000  addiu       $v1, $zero, 0x2000
    ctx->pc = 0x115da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x115da4: 0x70421488  pextlw      $v0, $v0, $v0
    ctx->pc = 0x115da4u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x115da8: 0x70631c88  pextlw      $v1, $v1, $v1
    ctx->pc = 0x115da8u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 3)));
    // 0x115dac: 0x70423488  pextlw      $a2, $v0, $v0
    ctx->pc = 0x115dacu;
    SET_GPR_VEC(ctx, 6, PS2_PEXTLW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x115db0: 0x70638c88  pextlw      $s1, $v1, $v1
    ctx->pc = 0x115db0u;
    SET_GPR_VEC(ctx, 17, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 3)));
    // 0x115db4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x115db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x115db8: 0x7fa60000  sq          $a2, 0x0($sp)
    ctx->pc = 0x115db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 6));
    // 0x115dbc: 0x70451c88  pextlw      $v1, $v0, $a1
    ctx->pc = 0x115dbcu;
    SET_GPR_VEC(ctx, 3, PS2_PEXTLW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x115dc0: 0x7fb10000  sq          $s1, 0x0($sp)
    ctx->pc = 0x115dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 17));
    // 0x115dc4: 0x70441488  pextlw      $v0, $v0, $a0
    ctx->pc = 0x115dc4u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x115dc8: 0x70a52c88  pextlw      $a1, $a1, $a1
    ctx->pc = 0x115dc8u;
    SET_GPR_VEC(ctx, 5, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 5)));
    // 0x115dcc: 0x70655c88  pextlw      $t3, $v1, $a1
    ctx->pc = 0x115dccu;
    SET_GPR_VEC(ctx, 11, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x115dd0: 0x70842488  pextlw      $a0, $a0, $a0
    ctx->pc = 0x115dd0u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 4)));
    // 0x115dd4: 0x70441c88  pextlw      $v1, $v0, $a0
    ctx->pc = 0x115dd4u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTLW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x115dd8: 0x7fab0000  sq          $t3, 0x0($sp)
    ctx->pc = 0x115dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 11));
    // 0x115ddc: 0x7fa600f0  sq          $a2, 0xF0($sp)
    ctx->pc = 0x115ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 6));
    // 0x115de0: 0x7fab0100  sq          $t3, 0x100($sp)
    ctx->pc = 0x115de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 11));
    // 0x115de4: 0x7fa30110  sq          $v1, 0x110($sp)
    ctx->pc = 0x115de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 3));
    // 0x115de8: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x115de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x115dec: 0x3c024c22  lui         $v0, 0x4C22
    ctx->pc = 0x115decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19490 << 16));
    // 0x115df0: 0x3442f986  ori         $v0, $v0, 0xF986
    ctx->pc = 0x115df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63878);
    // 0x115df4: 0x70421488  pextlw      $v0, $v0, $v0
    ctx->pc = 0x115df4u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x115df8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x115df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x115dfc: 0x70421389  pcpyld      $v0, $v0, $v0
    ctx->pc = 0x115dfcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x115e00: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x115e00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x115e04: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x115e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x115e08: 0x3c0239c9  lui         $v0, 0x39C9
    ctx->pc = 0x115e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14793 << 16));
    // 0x115e0c: 0x34420fd8  ori         $v0, $v0, 0xFD8
    ctx->pc = 0x115e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4056);
    // 0x115e10: 0x70421488  pextlw      $v0, $v0, $v0
    ctx->pc = 0x115e10u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x115e14: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x115e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x115e18: 0x70421389  pcpyld      $v0, $v0, $v0
    ctx->pc = 0x115e18u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x115e1c: 0x8ce4005c  lw          $a0, 0x5C($a3)
    ctx->pc = 0x115e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 92)));
    // 0x115e20: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x115e20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x115e24: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x115e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x115e28: 0xafa40120  sw          $a0, 0x120($sp)
    ctx->pc = 0x115e28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 4));
    // 0x115e2c: 0x24e30070  addiu       $v1, $a3, 0x70
    ctx->pc = 0x115e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 112));
    // 0x115e30: 0x8ce701f0  lw          $a3, 0x1F0($a3)
    ctx->pc = 0x115e30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 496)));
    // 0x115e34: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x115e34u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115e38: 0x107102b  sltu        $v0, $t0, $a3
    ctx->pc = 0x115e38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x115e3c: 0x10400103  beqz        $v0, . + 4 + (0x103 << 2)
    ctx->pc = 0x115E3Cu;
    {
        const bool branch_taken_0x115e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115E3Cu;
            // 0x115e40: 0xafa70124  sw          $a3, 0x124($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115e3c) {
            ctx->pc = 0x11624Cu;
            goto label_11624c;
        }
    }
    ctx->pc = 0x115E44u;
    // 0x115e44: 0x60f02d  daddu       $fp, $v1, $zero
    ctx->pc = 0x115e44u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_115e48:
    // 0x115e48: 0x87d30000  lh          $s3, 0x0($fp)
    ctx->pc = 0x115e48u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x115e4c: 0x126000ad  beqz        $s3, . + 4 + (0xAD << 2)
    ctx->pc = 0x115E4Cu;
    {
        const bool branch_taken_0x115e4c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x115E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115E4Cu;
            // 0x115e50: 0x8fa50120  lw          $a1, 0x120($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115e4c) {
            ctx->pc = 0x116104u;
            goto label_116104;
        }
    }
    ctx->pc = 0x115E54u;
    // 0x115e54: 0xb1180  sll         $v0, $t3, 6
    ctx->pc = 0x115e54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 6));
    // 0x115e58: 0x8fa600e0  lw          $a2, 0xE0($sp)
    ctx->pc = 0x115e58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x115e5c: 0x240a000f  addiu       $t2, $zero, 0xF
    ctx->pc = 0x115e5cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x115e60: 0x8fa700e4  lw          $a3, 0xE4($sp)
    ctx->pc = 0x115e60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x115e64: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x115e64u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115e68: 0x459021  addu        $s2, $v0, $a1
    ctx->pc = 0x115e68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x115e6c: 0x468021  addu        $s0, $v0, $a2
    ctx->pc = 0x115e6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x115e70: 0x47b821  addu        $s7, $v0, $a3
    ctx->pc = 0x115e70u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x115e74: 0x0  nop
    ctx->pc = 0x115e74u;
    // NOP
label_115e78:
    // 0x115e78: 0x26a1024  and         $v0, $s3, $t2
    ctx->pc = 0x115e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 10));
    // 0x115e7c: 0x1040009a  beqz        $v0, . + 4 + (0x9A << 2)
    ctx->pc = 0x115E7Cu;
    {
        const bool branch_taken_0x115e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115E7Cu;
            // 0x115e80: 0xa1027  nor         $v0, $zero, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115e7c) {
            ctx->pc = 0x1160E8u;
            goto label_1160e8;
        }
    }
    ctx->pc = 0x115E84u;
    // 0x115e84: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x115e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x115e88: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x115e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x115e8c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x115e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x115e90: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x115e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x115e94: 0x1060006a  beqz        $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x115E94u;
    {
        const bool branch_taken_0x115e94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x115E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115E94u;
            // 0x115e98: 0x29c03  sra         $s3, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115e94) {
            ctx->pc = 0x116040u;
            goto label_116040;
        }
    }
    ctx->pc = 0x115E9Cu;
    // 0x115e9c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x115e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x115ea0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x115ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x115ea4: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x115ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x115ea8: 0x21383  sra         $v0, $v0, 14
    ctx->pc = 0x115ea8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 14));
    // 0x115eac: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x115eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x115eb0: 0x42383  sra         $a0, $a0, 14
    ctx->pc = 0x115eb0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 14));
    // 0x115eb4: 0x52b83  sra         $a1, $a1, 14
    ctx->pc = 0x115eb4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 14));
    // 0x115eb8: 0x3c0139c9  lui         $at, 0x39C9
    ctx->pc = 0x115eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14793 << 16));
    // 0x115ebc: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x115ebcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x115ec0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x115ec0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x115ec4: 0x31b83  sra         $v1, $v1, 14
    ctx->pc = 0x115ec4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 14));
    // 0x115ec8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x115ec8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x115ecc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x115eccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x115ed0: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x115ed0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x115ed4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x115ed4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x115ed8: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x115ed8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x115edc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x115edcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x115ee0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x115ee0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x115ee4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x115ee4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x115ee8: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x115ee8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x115eec: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x115eecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x115ef0: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x115ef0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x115ef4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x115ef4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x115ef8: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x115ef8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x115efc: 0x44041800  mfc1        $a0, $f3
    ctx->pc = 0x115efcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x115f00: 0x71041389  pcpyld      $v0, $t0, $a0
    ctx->pc = 0x115f00u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 4)));
    // 0x115f04: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x115f04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x115f08: 0x44081000  mfc1        $t0, $f2
    ctx->pc = 0x115f08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x115f0c: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x115f0cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x115f10: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x115f10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x115f14: 0x708224c8  ppacw       $a0, $a0, $v0
    ctx->pc = 0x115f14u;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x115f18: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x115f18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x115f1c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x115f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x115f20: 0x52b83  sra         $a1, $a1, 14
    ctx->pc = 0x115f20u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 14));
    // 0x115f24: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x115f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x115f28: 0x63383  sra         $a2, $a2, 14
    ctx->pc = 0x115f28u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 14));
    // 0x115f2c: 0x31b83  sra         $v1, $v1, 14
    ctx->pc = 0x115f2cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 14));
    // 0x115f30: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x115f30u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x115f34: 0x21383  sra         $v0, $v0, 14
    ctx->pc = 0x115f34u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 14));
    // 0x115f38: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x115f38u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x115f3c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x115f3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x115f40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x115f40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x115f44: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x115f44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x115f48: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x115f48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x115f4c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x115f4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x115f50: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x115f50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x115f54: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x115f54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x115f58: 0x7fa40040  sq          $a0, 0x40($sp)
    ctx->pc = 0x115f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 4));
    // 0x115f5c: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x115f5cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x115f60: 0x7fa400c0  sq          $a0, 0xC0($sp)
    ctx->pc = 0x115f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 4));
    // 0x115f64: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x115f64u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x115f68: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x115f68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x115f6c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x115f6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x115f70: 0x44071800  mfc1        $a3, $f3
    ctx->pc = 0x115f70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x115f74: 0x70471b89  pcpyld      $v1, $v0, $a3
    ctx->pc = 0x115f74u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x115f78: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x115f78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x115f7c: 0x44071000  mfc1        $a3, $f2
    ctx->pc = 0x115f7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x115f80: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x115f80u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x115f84: 0x71071389  pcpyld      $v0, $t0, $a3
    ctx->pc = 0x115f84u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 7)));
    // 0x115f88: 0x7faa0130  sq          $t2, 0x130($sp)
    ctx->pc = 0x115f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 10));
    // 0x115f8c: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x115f8cu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x115f90: 0x7fab0140  sq          $t3, 0x140($sp)
    ctx->pc = 0x115f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 11));
    // 0x115f94: 0x70022ca9  por         $a1, $zero, $v0
    ctx->pc = 0x115f94u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x115f98: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x115f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x115f9c: 0xc0429b8  jal         func_10A6E0
    ctx->pc = 0x115F9Cu;
    SET_GPR_U32(ctx, 31, 0x115FA4u);
    ctx->pc = 0x115FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x115F9Cu;
            // 0x115fa0: 0x7fa200d0  sq          $v0, 0xD0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A6E0u;
    if (runtime->hasFunction(0x10A6E0u)) {
        auto targetFn = runtime->lookupFunction(0x10A6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115FA4u; }
        if (ctx->pc != 0x115FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A6E0_0x10a6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115FA4u; }
        if (ctx->pc != 0x115FA4u) { return; }
    }
    ctx->pc = 0x115FA4u;
    // 0x115fa4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x115fa4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x115fa8: 0x3c024c22  lui         $v0, 0x4C22
    ctx->pc = 0x115fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19490 << 16));
    // 0x115fac: 0x3442f986  ori         $v0, $v0, 0xF986
    ctx->pc = 0x115facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63878);
    // 0x115fb0: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x115fb0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x115fb4: 0x4b031058  vmulx.x     $vf1, $vf2, $vf3x
    ctx->pc = 0x115fb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x115fb8: 0x48280800  qmfc2.ni    $t0, $vf1
    ctx->pc = 0x115fb8u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x115fbc: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x115fbcu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x115fc0: 0x4a831058  vmulx.y     $vf1, $vf2, $vf3x
    ctx->pc = 0x115fc0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x115fc4: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x115fc4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x115fc8: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x115fc8u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x115fcc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x115fccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x115fd0: 0x4a431058  vmulx.z     $vf1, $vf2, $vf3x
    ctx->pc = 0x115fd0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x115fd4: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x115fd4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x115fd8: 0x70041789  pexew       $v0, $a0
    ctx->pc = 0x115fd8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x115fdc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x115fdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x115fe0: 0x4a231098  vmulx.w     $vf2, $vf2, $vf3x
    ctx->pc = 0x115fe0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x115fe4: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x115fe4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x115fe8: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x115fe8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x115fec: 0x4b020083  vaddw.x     $vf2, $vf0, $vf2w
    ctx->pc = 0x115fecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x115ff0: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x115ff0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x115ff4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x115ff4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x115ff8: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x115ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x115ffc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x115ffcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x116000: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x116000u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x116004: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x116004u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x116008: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x116008u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x11600c: 0xe7a1006c  swc1        $f1, 0x6C($sp)
    ctx->pc = 0x11600cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x116010: 0x6ba20067  ldl         $v0, 0x67($sp)
    ctx->pc = 0x116010u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x116014: 0x6fa20060  ldr         $v0, 0x60($sp)
    ctx->pc = 0x116014u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x116018: 0x6ba3006f  ldl         $v1, 0x6F($sp)
    ctx->pc = 0x116018u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x11601c: 0x6fa30068  ldr         $v1, 0x68($sp)
    ctx->pc = 0x11601cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x116020: 0xb2020007  sdl         $v0, 0x7($s0)
    ctx->pc = 0x116020u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x116024: 0xb6020000  sdr         $v0, 0x0($s0)
    ctx->pc = 0x116024u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x116028: 0xb203000f  sdl         $v1, 0xF($s0)
    ctx->pc = 0x116028u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11602c: 0xb6030008  sdr         $v1, 0x8($s0)
    ctx->pc = 0x11602cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x116030: 0x7baa0130  lq          $t2, 0x130($sp)
    ctx->pc = 0x116030u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x116034: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x116034u;
    {
        const bool branch_taken_0x116034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116034u;
            // 0x116038: 0x7bab0140  lq          $t3, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116034) {
            ctx->pc = 0x1160E8u;
            goto label_1160e8;
        }
    }
    ctx->pc = 0x11603Cu;
    // 0x11603c: 0x0  nop
    ctx->pc = 0x11603cu;
    // NOP
label_116040:
    // 0x116040: 0x8fa60120  lw          $a2, 0x120($sp)
    ctx->pc = 0x116040u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x116044: 0x8fa700e0  lw          $a3, 0xE0($sp)
    ctx->pc = 0x116044u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x116048: 0x2c61021  addu        $v0, $s6, $a2
    ctx->pc = 0x116048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
    // 0x11604c: 0x7ba800f0  lq          $t0, 0xF0($sp)
    ctx->pc = 0x11604cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x116050: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x116050u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x116054: 0x2c73021  addu        $a2, $s6, $a3
    ctx->pc = 0x116054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 7)));
    // 0x116058: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x116058u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x11605c: 0x70481489  pand        $v0, $v0, $t0
    ctx->pc = 0x11605cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x116060: 0x70432048  psubw       $a0, $v0, $v1
    ctx->pc = 0x116060u;
    SET_GPR_VEC(ctx, 4, PS2_PSUBW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x116064: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x116064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x116068: 0x72842848  psubw       $a1, $s4, $a0
    ctx->pc = 0x116068u;
    SET_GPR_VEC(ctx, 5, PS2_PSUBW(GPR_VEC(ctx, 20), GPR_VEC(ctx, 4)));
    // 0x11606c: 0x70053fff  psraw       $a3, $a1, 31
    ctx->pc = 0x11606cu;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi32(GPR_VEC(ctx, 5), 31));
    // 0x116070: 0x70f52c89  pand        $a1, $a3, $s5
    ctx->pc = 0x116070u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 7), GPR_VEC(ctx, 21)));
    // 0x116074: 0x70454848  psubw       $t1, $v0, $a1
    ctx->pc = 0x116074u;
    SET_GPR_VEC(ctx, 9, PS2_PSUBW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x116078: 0x72842808  paddw       $a1, $s4, $a0
    ctx->pc = 0x116078u;
    SET_GPR_VEC(ctx, 5, PS2_PADDW(GPR_VEC(ctx, 20), GPR_VEC(ctx, 4)));
    // 0x11607c: 0x70053fff  psraw       $a3, $a1, 31
    ctx->pc = 0x11607cu;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi32(GPR_VEC(ctx, 5), 31));
    // 0x116080: 0x70f52c89  pand        $a1, $a3, $s5
    ctx->pc = 0x116080u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 7), GPR_VEC(ctx, 21)));
    // 0x116084: 0x71254808  paddw       $t1, $t1, $a1
    ctx->pc = 0x116084u;
    SET_GPR_VEC(ctx, 9, PS2_PADDW(GPR_VEC(ctx, 9), GPR_VEC(ctx, 5)));
    // 0x116088: 0x70093fff  psraw       $a3, $t1, 31
    ctx->pc = 0x116088u;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi32(GPR_VEC(ctx, 9), 31));
    // 0x11608c: 0x70e044e9  pnor        $t0, $a3, $zero
    ctx->pc = 0x11608cu;
    SET_GPR_VEC(ctx, 8, PS2_PNOR(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x116090: 0x72273c89  pand        $a3, $s1, $a3
    ctx->pc = 0x116090u;
    SET_GPR_VEC(ctx, 7, PS2_PAND(GPR_VEC(ctx, 17), GPR_VEC(ctx, 7)));
    // 0x116094: 0x72284489  pand        $t0, $s1, $t0
    ctx->pc = 0x116094u;
    SET_GPR_VEC(ctx, 8, PS2_PAND(GPR_VEC(ctx, 17), GPR_VEC(ctx, 8)));
    // 0x116098: 0x71271048  psubw       $v0, $t1, $a3
    ctx->pc = 0x116098u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBW(GPR_VEC(ctx, 9), GPR_VEC(ctx, 7)));
    // 0x11609c: 0x70482808  paddw       $a1, $v0, $t0
    ctx->pc = 0x11609cu;
    SET_GPR_VEC(ctx, 5, PS2_PADDW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x1160a0: 0x70033fff  psraw       $a3, $v1, 31
    ctx->pc = 0x1160a0u;
    SET_GPR_VEC(ctx, 7, _mm_srai_epi32(GPR_VEC(ctx, 3), 31));
    // 0x1160a4: 0x70e044e9  pnor        $t0, $a3, $zero
    ctx->pc = 0x1160a4u;
    SET_GPR_VEC(ctx, 8, PS2_PNOR(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1160a8: 0x700523bf  psraw       $a0, $a1, 14
    ctx->pc = 0x1160a8u;
    SET_GPR_VEC(ctx, 4, _mm_srai_epi32(GPR_VEC(ctx, 5), 14));
    // 0x1160ac: 0x72273c89  pand        $a3, $s1, $a3
    ctx->pc = 0x1160acu;
    SET_GPR_VEC(ctx, 7, PS2_PAND(GPR_VEC(ctx, 17), GPR_VEC(ctx, 7)));
    // 0x1160b0: 0x72284489  pand        $t0, $s1, $t0
    ctx->pc = 0x1160b0u;
    SET_GPR_VEC(ctx, 8, PS2_PAND(GPR_VEC(ctx, 17), GPR_VEC(ctx, 8)));
    // 0x1160b4: 0x70671848  psubw       $v1, $v1, $a3
    ctx->pc = 0x1160b4u;
    SET_GPR_VEC(ctx, 3, PS2_PSUBW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 7)));
    // 0x1160b8: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x1160b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x1160bc: 0x70681808  paddw       $v1, $v1, $t0
    ctx->pc = 0x1160bcu;
    SET_GPR_VEC(ctx, 3, PS2_PADDW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 8)));
    // 0x1160c0: 0x7ba70100  lq          $a3, 0x100($sp)
    ctx->pc = 0x1160c0u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1160c4: 0x7ba80110  lq          $t0, 0x110($sp)
    ctx->pc = 0x1160c4u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1160c8: 0x70031bbf  psraw       $v1, $v1, 14
    ctx->pc = 0x1160c8u;
    SET_GPR_VEC(ctx, 3, _mm_srai_epi32(GPR_VEC(ctx, 3), 14));
    // 0x1160cc: 0x70874f09  pmulth      $t1, $a0, $a3
    ctx->pc = 0x1160ccu;
    { __m128i prod = _mm_madd_epi16(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)); 
   int32_t p0 = _mm_cvtsi128_si32(prod); 
   int32_t p1 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 4)); 
   int32_t p2 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 8)); 
   int32_t p3 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 12)); 
   int64_t result = (int64_t)p0 + (int64_t)p1 + (int64_t)p2 + (int64_t)p3; 
   ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); 
   SET_GPR_U64(ctx, 9, result); }
    // 0x1160d0: 0x70681f09  pmulth      $v1, $v1, $t0
    ctx->pc = 0x1160d0u;
    { __m128i prod = _mm_madd_epi16(GPR_VEC(ctx, 3), GPR_VEC(ctx, 8)); 
   int32_t p0 = _mm_cvtsi128_si32(prod); 
   int32_t p1 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 4)); 
   int32_t p2 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 8)); 
   int32_t p3 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 12)); 
   int64_t result = (int64_t)p0 + (int64_t)p1 + (int64_t)p2 + (int64_t)p3; 
   ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); 
   SET_GPR_U64(ctx, 3, result); }
    // 0x1160d4: 0x70691808  paddw       $v1, $v1, $t1
    ctx->pc = 0x1160d4u;
    SET_GPR_VEC(ctx, 3, PS2_PADDW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x1160d8: 0x7fa50090  sq          $a1, 0x90($sp)
    ctx->pc = 0x1160d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 5));
    // 0x1160dc: 0x7fa400a0  sq          $a0, 0xA0($sp)
    ctx->pc = 0x1160dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 4));
    // 0x1160e0: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x1160e0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x1160e4: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x1160e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
label_1160e8:
    // 0x1160e8: 0xa1100  sll         $v0, $t2, 4
    ctx->pc = 0x1160e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x1160ec: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x1160ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1160f0: 0x304afff0  andi        $t2, $v0, 0xFFF0
    ctx->pc = 0x1160f0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65520);
    // 0x1160f4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1160f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1160f8: 0x26f70010  addiu       $s7, $s7, 0x10
    ctx->pc = 0x1160f8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x1160fc: 0x1660ff5e  bnez        $s3, . + 4 + (-0xA2 << 2)
    ctx->pc = 0x1160FCu;
    {
        const bool branch_taken_0x1160fc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x116100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1160FCu;
            // 0x116100: 0x26d60010  addiu       $s6, $s6, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1160fc) {
            ctx->pc = 0x115E78u;
            runtime->cooperativeGuestYield();
            goto label_115e78;
        }
    }
    ctx->pc = 0x116104u;
label_116104:
    // 0x116104: 0x8fa30124  lw          $v1, 0x124($sp)
    ctx->pc = 0x116104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x116108: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x116108u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x11610c: 0x163102b  sltu        $v0, $t3, $v1
    ctx->pc = 0x11610cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x116110: 0x1440ff4d  bnez        $v0, . + 4 + (-0xB3 << 2)
    ctx->pc = 0x116110u;
    {
        const bool branch_taken_0x116110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x116114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116110u;
            // 0x116114: 0x27de0002  addiu       $fp, $fp, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116110) {
            ctx->pc = 0x115E48u;
            runtime->cooperativeGuestYield();
            goto label_115e48;
        }
    }
    ctx->pc = 0x116118u;
    // 0x116118: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x116118u;
    {
        const bool branch_taken_0x116118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11611Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116118u;
            // 0x11611c: 0x7bb001e0  lq          $s0, 0x1E0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116118) {
            ctx->pc = 0x116250u;
            goto label_116250;
        }
    }
    ctx->pc = 0x116120u;
label_116120:
    // 0x116120: 0xc4e1001c  lwc1        $f1, 0x1C($a3)
    ctx->pc = 0x116120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x116124: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x116124u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x116128: 0xc4e00018  lwc1        $f0, 0x18($a3)
    ctx->pc = 0x116128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11612c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x11612cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x116130: 0xc4e20024  lwc1        $f2, 0x24($a3)
    ctx->pc = 0x116130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x116134: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x116134u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x116138: 0x8c4a005c  lw          $t2, 0x5C($v0)
    ctx->pc = 0x116138u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x11613c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11613cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x116140: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x116140u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x116144: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x116144u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x116148: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x116148u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x11614c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x11614cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x116150: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x116150u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x116154: 0x70633488  pextlw      $a2, $v1, $v1
    ctx->pc = 0x116154u;
    SET_GPR_VEC(ctx, 6, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 3)));
    // 0x116158: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x116158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11615c: 0x70842c88  pextlw      $a1, $a0, $a0
    ctx->pc = 0x11615cu;
    SET_GPR_VEC(ctx, 5, PS2_PEXTLW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 4)));
    // 0x116160: 0x70431c88  pextlw      $v1, $v0, $v1
    ctx->pc = 0x116160u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTLW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x116164: 0x70661c88  pextlw      $v1, $v1, $a2
    ctx->pc = 0x116164u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
    // 0x116168: 0x70441488  pextlw      $v0, $v0, $a0
    ctx->pc = 0x116168u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x11616c: 0x70453488  pextlw      $a2, $v0, $a1
    ctx->pc = 0x11616cu;
    SET_GPR_VEC(ctx, 6, PS2_PEXTLW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x116170: 0x48a32800  qmtc2.ni    $v1, $vf5
    ctx->pc = 0x116170u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x116174: 0x48a62000  qmtc2.ni    $a2, $vf4
    ctx->pc = 0x116174u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x116178: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x116178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
    // 0x11617c: 0xfba500a0  sqc2        $vf5, 0xA0($sp)
    ctx->pc = 0x11617cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x116180: 0x7fa600b0  sq          $a2, 0xB0($sp)
    ctx->pc = 0x116180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 6));
    // 0x116184: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x116184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x116188: 0x811c0  sll         $v0, $t0, 7
    ctx->pc = 0x116188u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 7));
    // 0x11618c: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x11618cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x116190: 0x8ce501f0  lw          $a1, 0x1F0($a3)
    ctx->pc = 0x116190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 496)));
    // 0x116194: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x116194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x116198: 0x10a0002c  beqz        $a1, . + 4 + (0x2C << 2)
    ctx->pc = 0x116198u;
    {
        const bool branch_taken_0x116198 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11619Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116198u;
            // 0x11619c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116198) {
            ctx->pc = 0x11624Cu;
            goto label_11624c;
        }
    }
    ctx->pc = 0x1161A0u;
    // 0x1161a0: 0x7ba70090  lq          $a3, 0x90($sp)
    ctx->pc = 0x1161a0u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1161a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1161a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1161a8: 0x48232000  qmfc2.ni    $v1, $vf4
    ctx->pc = 0x1161a8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1161ac: 0x0  nop
    ctx->pc = 0x1161acu;
    // NOP
label_1161b0:
    // 0x1161b0: 0x84880000  lh          $t0, 0x0($a0)
    ctx->pc = 0x1161b0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1161b4: 0x1100001e  beqz        $t0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1161B4u;
    {
        const bool branch_taken_0x1161b4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1161B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1161B4u;
            // 0x1161b8: 0x8fab00e0  lw          $t3, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1161b4) {
            ctx->pc = 0x116230u;
            goto label_116230;
        }
    }
    ctx->pc = 0x1161BCu;
    // 0x1161bc: 0x91180  sll         $v0, $t1, 6
    ctx->pc = 0x1161bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x1161c0: 0x48a61800  qmtc2.ni    $a2, $vf3
    ctx->pc = 0x1161c0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1161c4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1161c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1161c8: 0x4a3021  addu        $a2, $v0, $t2
    ctx->pc = 0x1161c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1161cc: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x1161ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x1161d0: 0x4b1821  addu        $v1, $v0, $t3
    ctx->pc = 0x1161d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1161d4: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x1161d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1161d8:
    // 0x1161d8: 0x1071024  and         $v0, $t0, $a3
    ctx->pc = 0x1161d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
    // 0x1161dc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1161DCu;
    {
        const bool branch_taken_0x1161dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1161E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1161DCu;
            // 0x1161e0: 0x71027  nor         $v0, $zero, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1161dc) {
            ctx->pc = 0x116210u;
            goto label_116210;
        }
    }
    ctx->pc = 0x1161E4u;
    // 0x1161e4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1161e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1161e8: 0x4bc408d8  vmulx.xyz   $vf3, $vf1, $vf4x
    ctx->pc = 0x1161e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1161ec: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x1161ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x1161f0: 0xf8630000  sqc2        $vf3, 0x0($v1)
    ctx->pc = 0x1161f0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1161f4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1161f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1161f8: 0x24403  sra         $t0, $v0, 16
    ctx->pc = 0x1161f8u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1161fc: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1161fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x116200: 0x4bc50898  vmulx.xyz   $vf2, $vf1, $vf5x
    ctx->pc = 0x116200u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x116204: 0x4bc21868  vadd.xyz    $vf1, $vf3, $vf2
    ctx->pc = 0x116204u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x116208: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x116208u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x11620c: 0x0  nop
    ctx->pc = 0x11620cu;
    // NOP
label_116210:
    // 0x116210: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x116210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x116214: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x116214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x116218: 0x3047fff0  andi        $a3, $v0, 0xFFF0
    ctx->pc = 0x116218u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65520);
    // 0x11621c: 0x1500ffee  bnez        $t0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x11621Cu;
    {
        const bool branch_taken_0x11621c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x116220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11621Cu;
            // 0x116220: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11621c) {
            ctx->pc = 0x1161D8u;
            runtime->cooperativeGuestYield();
            goto label_1161d8;
        }
    }
    ctx->pc = 0x116224u;
    // 0x116224: 0x48270800  qmfc2.ni    $a3, $vf1
    ctx->pc = 0x116224u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x116228: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x116228u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x11622c: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x11622cu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
label_116230:
    // 0x116230: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x116230u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x116234: 0x125102b  sltu        $v0, $t1, $a1
    ctx->pc = 0x116234u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x116238: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x116238u;
    {
        const bool branch_taken_0x116238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11623Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116238u;
            // 0x11623c: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116238) {
            ctx->pc = 0x1161B0u;
            runtime->cooperativeGuestYield();
            goto label_1161b0;
        }
    }
    ctx->pc = 0x116240u;
    // 0x116240: 0x7fa70090  sq          $a3, 0x90($sp)
    ctx->pc = 0x116240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 7));
    // 0x116244: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x116244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
    // 0x116248: 0x7fa600b0  sq          $a2, 0xB0($sp)
    ctx->pc = 0x116248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 6));
label_11624c:
    // 0x11624c: 0x7bb001e0  lq          $s0, 0x1E0($sp)
    ctx->pc = 0x11624cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 480)));
label_116250:
    // 0x116250: 0x7bb101d0  lq          $s1, 0x1D0($sp)
    ctx->pc = 0x116250u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x116254: 0x7bb201c0  lq          $s2, 0x1C0($sp)
    ctx->pc = 0x116254u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x116258: 0x7bb301b0  lq          $s3, 0x1B0($sp)
    ctx->pc = 0x116258u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x11625c: 0x7bb401a0  lq          $s4, 0x1A0($sp)
    ctx->pc = 0x11625cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x116260: 0x7bb50190  lq          $s5, 0x190($sp)
    ctx->pc = 0x116260u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x116264: 0x7bb60180  lq          $s6, 0x180($sp)
    ctx->pc = 0x116264u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x116268: 0x7bb70170  lq          $s7, 0x170($sp)
    ctx->pc = 0x116268u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x11626c: 0x7bbe0160  lq          $fp, 0x160($sp)
    ctx->pc = 0x11626cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x116270: 0xdfbf0150  ld          $ra, 0x150($sp)
    ctx->pc = 0x116270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x116274: 0xc7b401f0  lwc1        $f20, 0x1F0($sp)
    ctx->pc = 0x116274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x116278: 0x3e00008  jr          $ra
    ctx->pc = 0x116278u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11627Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116278u;
            // 0x11627c: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x115E48u: goto label_115e48;
            case 0x115E78u: goto label_115e78;
            case 0x116040u: goto label_116040;
            case 0x1160E8u: goto label_1160e8;
            case 0x116104u: goto label_116104;
            case 0x116120u: goto label_116120;
            case 0x1161B0u: goto label_1161b0;
            case 0x1161D8u: goto label_1161d8;
            case 0x116210u: goto label_116210;
            case 0x116230u: goto label_116230;
            case 0x11624Cu: goto label_11624c;
            case 0x116250u: goto label_116250;
            default: break;
        }
        return;
    }
    ctx->pc = 0x116280u;
}
