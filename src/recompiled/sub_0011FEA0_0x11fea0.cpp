#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011FEA0
// Address: 0x11fea0 - 0x120740
void sub_0011FEA0_0x11fea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011FEA0_0x11fea0");
#endif

    ctx->pc = 0x11fea0u;

label_11fea0:
    // 0x11fea0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x11fea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x11fea4: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x11fea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x11fea8: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x11fea8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x11feac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11feacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11feb0: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x11feb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x11feb4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x11feb4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x11feb8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x11feb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x11febc: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x11febcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x11fec0: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x11fec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x11fec4: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x11fec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x11fec8: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x11fec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x11fecc: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x11feccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x11fed0: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x11fed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x11fed4: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x11fed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x11fed8: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x11fed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x11fedc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11fedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11fee0: 0xc04fd50  jal         func_13F540
    ctx->pc = 0x11FEE0u;
    SET_GPR_U32(ctx, 31, 0x11FEE8u);
    ctx->pc = 0x11FEE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11FEE0u;
            // 0x11fee4: 0x3c110033  lui         $s1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F540u;
    if (runtime->hasFunction(0x13F540u)) {
        auto targetFn = runtime->lookupFunction(0x13F540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FEE8u; }
        if (ctx->pc != 0x11FEE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_0013f540_0x13f540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FEE8u; }
        if (ctx->pc != 0x11FEE8u) { return; }
    }
    ctx->pc = 0x11FEE8u;
    // 0x11fee8: 0x8e22f168  lw          $v0, -0xE98($s1)
    ctx->pc = 0x11fee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x11feec: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x11feecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x11fef0: 0x8e22f168  lw          $v0, -0xE98($s1)
    ctx->pc = 0x11fef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x11fef4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x11fef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x11fef8: 0xc04fe88  jal         func_13FA20
    ctx->pc = 0x11FEF8u;
    SET_GPR_U32(ctx, 31, 0x11FF00u);
    ctx->pc = 0x11FEFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11FEF8u;
            // 0x11fefc: 0xae22f168  sw          $v0, -0xE98($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294963560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA20u;
    if (runtime->hasFunction(0x13FA20u)) {
        auto targetFn = runtime->lookupFunction(0x13FA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FF00u; }
        if (ctx->pc != 0x11FF00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa20_0x13fa48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FF00u; }
        if (ctx->pc != 0x11FF00u) { return; }
    }
    ctx->pc = 0x11FF00u;
    // 0x11ff00: 0x8e22f168  lw          $v0, -0xE98($s1)
    ctx->pc = 0x11ff00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x11ff04: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x11ff04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x11ff08: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x11ff08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x11ff0c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x11ff0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x11ff10: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x11ff10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x11ff14: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x11ff14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x11ff18: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x11ff18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x11ff1c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x11ff1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x11ff20: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x11ff20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x11ff24: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x11ff24u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x11ff28: 0x73c78  dsll        $a3, $a3, 17
    ctx->pc = 0x11ff28u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 17);
    // 0x11ff2c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x11ff2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x11ff30: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x11ff30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x11ff34: 0x9cc2f19c  lwu         $v0, -0xE64($a2)
    ctx->pc = 0x11ff34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 4294963612)));
    // 0x11ff38: 0x9c63f1a0  lwu         $v1, -0xE60($v1)
    ctx->pc = 0x11ff38u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294963616)));
    // 0x11ff3c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x11ff3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x11ff40: 0x8e24f168  lw          $a0, -0xE98($s1)
    ctx->pc = 0x11ff40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x11ff44: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x11ff44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x11ff48: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x11ff48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x11ff4c: 0xfc850018  sd          $a1, 0x18($a0)
    ctx->pc = 0x11ff4cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 5));
    // 0x11ff50: 0xfc830010  sd          $v1, 0x10($a0)
    ctx->pc = 0x11ff50u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 3));
    // 0x11ff54: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x11ff54u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ff58: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x11ff58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x11ff5c: 0xc6010374  lwc1        $f1, 0x374($s0)
    ctx->pc = 0x11ff5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11ff60: 0x8c46dd58  lw          $a2, -0x22A8($v0)
    ctx->pc = 0x11ff60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958424)));
    // 0x11ff64: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x11ff64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11ff68: 0x2442dd58  addiu       $v0, $v0, -0x22A8
    ctx->pc = 0x11ff68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958424));
    // 0x11ff6c: 0xc6050370  lwc1        $f5, 0x370($s0)
    ctx->pc = 0x11ff6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x11ff70: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x11ff70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x11ff74: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x11ff74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x11ff78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x11ff78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11ff7c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11ff7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11ff80: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x11ff80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x11ff84: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x11ff84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x11ff88: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x11ff88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x11ff8c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x11ff8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11ff90: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x11ff90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x11ff94: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x11ff94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x11ff98: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x11ff98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11ff9c: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x11ff9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x11ffa0: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x11ffa0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x11ffa4: 0x6343a  dsrl        $a2, $a2, 16
    ctx->pc = 0x11ffa4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 16);
    // 0x11ffa8: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x11ffa8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x11ffac: 0xc603036c  lwc1        $f3, 0x36C($s0)
    ctx->pc = 0x11ffacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11ffb0: 0x46000964  .word       0x46000964                   # cvt.w.s     $f5, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11ffb0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x11ffb4: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x11ffb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x11ffb8: 0xc6060368  lwc1        $f6, 0x368($s0)
    ctx->pc = 0x11ffb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x11ffbc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11ffbcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x11ffc0: 0x44180800  mfc1        $t8, $f1
    ctx->pc = 0x11ffc0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 24, bits); }
    // 0x11ffc4: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x11ffc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x11ffc8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x11ffc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x11ffcc: 0x460310c2  mul.s       $f3, $f2, $f3
    ctx->pc = 0x11ffccu;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x11ffd0: 0x24080048  addiu       $t0, $zero, 0x48
    ctx->pc = 0x11ffd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x11ffd4: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x11ffd4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x11ffd8: 0xfc880028  sd          $t0, 0x28($a0)
    ctx->pc = 0x11ffd8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 8));
    // 0x11ffdc: 0x781823  subu        $v1, $v1, $t8
    ctx->pc = 0x11ffdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x11ffe0: 0x240c0019  addiu       $t4, $zero, 0x19
    ctx->pc = 0x11ffe0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x11ffe4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x11ffe4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11ffe8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11ffe8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11ffec: 0x246201ff  addiu       $v0, $v1, 0x1FF
    ctx->pc = 0x11ffecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 511));
    // 0x11fff0: 0xe2382a  slt         $a3, $a3, $v0
    ctx->pc = 0x11fff0u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11fff4: 0x246303fe  addiu       $v1, $v1, 0x3FE
    ctx->pc = 0x11fff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1022));
    // 0x11fff8: 0x47180b  movn        $v1, $v0, $a3
    ctx->pc = 0x11fff8u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x11fffc: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x11fffcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x120000: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x120000u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x120004: 0x31a43  sra         $v1, $v1, 9
    ctx->pc = 0x120004u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 9));
    // 0x120008: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x120008u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x12000c: 0x44120800  mfc1        $s2, $f1
    ctx->pc = 0x12000cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x120010: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x120010u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x120014: 0x46001864  .word       0x46001864                   # cvt.w.s     $f1, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x120014u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x120018: 0x44150800  mfc1        $s5, $f1
    ctx->pc = 0x120018u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x12001c: 0x240d0041  addiu       $t5, $zero, 0x41
    ctx->pc = 0x12001cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x120020: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x120020u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x120024: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x120024u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x120028: 0xfc870020  sd          $a3, 0x20($a0)
    ctx->pc = 0x120028u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 7));
    // 0x12002c: 0xfc8c0038  sd          $t4, 0x38($a0)
    ctx->pc = 0x12002cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 12));
    // 0x120030: 0x24900090  addiu       $s0, $a0, 0x90
    ctx->pc = 0x120030u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
    // 0x120034: 0x2b21023  subu        $v0, $s5, $s2
    ctx->pc = 0x120034u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x120038: 0xfc860040  sd          $a2, 0x40($a0)
    ctx->pc = 0x120038u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 64), GPR_U64(ctx, 6));
    // 0x12003c: 0xa3001a  div         $zero, $a1, $v1
    ctx->pc = 0x12003cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x120040: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x120040u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x120044: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x120044u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x120048: 0xfc8d0048  sd          $t5, 0x48($a0)
    ctx->pc = 0x120048u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 72), GPR_U64(ctx, 13));
    // 0x12004c: 0x240e0043  addiu       $t6, $zero, 0x43
    ctx->pc = 0x12004cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x120050: 0x2409003f  addiu       $t1, $zero, 0x3F
    ctx->pc = 0x120050u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x120054: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x120054u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x120058: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x120058u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x12005c: 0x34a58080  ori         $a1, $a1, 0x8080
    ctx->pc = 0x12005cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32896);
    // 0x120060: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x120060u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x120064: 0x34a58080  ori         $a1, $a1, 0x8080
    ctx->pc = 0x120064u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32896);
    // 0x120068: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x120068u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x12006c: 0x240a0060  addiu       $t2, $zero, 0x60
    ctx->pc = 0x12006cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x120070: 0x240b0015  addiu       $t3, $zero, 0x15
    ctx->pc = 0x120070u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x120074: 0xae30f168  sw          $s0, -0xE98($s1)
    ctx->pc = 0x120074u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294963560), GPR_U32(ctx, 16));
    // 0x120078: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x120078u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x12007c: 0x24160200  addiu       $s6, $zero, 0x200
    ctx->pc = 0x12007cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x120080: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x120080u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x120084: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x120084u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x120088: 0x60c82d  daddu       $t9, $v1, $zero
    ctx->pc = 0x120088u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12008c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x12008cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x120090: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x120090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x120094: 0xfc8e0058  sd          $t6, 0x58($a0)
    ctx->pc = 0x120094u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 88), GPR_U64(ctx, 14));
    // 0x120098: 0xfc890068  sd          $t1, 0x68($a0)
    ctx->pc = 0x120098u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 104), GPR_U64(ctx, 9));
    // 0x12009c: 0xfc850070  sd          $a1, 0x70($a0)
    ctx->pc = 0x12009cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 112), GPR_U64(ctx, 5));
    // 0x1200a0: 0xfc8f0078  sd          $t7, 0x78($a0)
    ctx->pc = 0x1200a0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 120), GPR_U64(ctx, 15));
    // 0x1200a4: 0xfc8a0080  sd          $t2, 0x80($a0)
    ctx->pc = 0x1200a4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 128), GPR_U64(ctx, 10));
    // 0x1200a8: 0xfc8b0088  sd          $t3, 0x88($a0)
    ctx->pc = 0x1200a8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 136), GPR_U64(ctx, 11));
    // 0x1200ac: 0xfc800030  sd          $zero, 0x30($a0)
    ctx->pc = 0x1200acu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 0));
    // 0x1200b0: 0xfc800050  sd          $zero, 0x50($a0)
    ctx->pc = 0x1200b0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 80), GPR_U64(ctx, 0));
    // 0x1200b4: 0xfc800060  sd          $zero, 0x60($a0)
    ctx->pc = 0x1200b4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 96), GPR_U64(ctx, 0));
    // 0x1200b8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1200B8u;
    {
        const bool branch_taken_0x1200b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1200b8) {
            ctx->pc = 0x1200BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1200B8u;
            // 0x1200bc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1200C0u;
            goto label_1200c0;
        }
    }
    ctx->pc = 0x1200C0u;
label_1200c0:
    // 0x1200c0: 0x8cf7f1a4  lw          $s7, -0xE5C($a3)
    ctx->pc = 0x1200c0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294963620)));
    // 0x1200c4: 0xa012  mflo        $s4
    ctx->pc = 0x1200c4u;
    SET_GPR_U64(ctx, 20, ctx->lo);
    // 0x1200c8: 0x1b2000de  blez        $t9, . + 4 + (0xDE << 2)
    ctx->pc = 0x1200C8u;
    {
        const bool branch_taken_0x1200c8 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x1200CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1200C8u;
            // 0x1200cc: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1200c8) {
            ctx->pc = 0x120444u;
            goto label_120444;
        }
    }
    ctx->pc = 0x1200D0u;
label_1200d0:
    // 0x1200d0: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x1200d0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x1200d4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1200d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1200d8: 0x8e22f168  lw          $v0, -0xE98($s1)
    ctx->pc = 0x1200d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x1200dc: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1200dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1200e0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1200e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1200e4: 0x3c070030  lui         $a3, 0x30
    ctx->pc = 0x1200e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)48 << 16));
    // 0x1200e8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1200e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1200ec: 0x3c1e0033  lui         $fp, 0x33
    ctx->pc = 0x1200ecu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)51 << 16));
    // 0x1200f0: 0x240d0004  addiu       $t5, $zero, 0x4
    ctx->pc = 0x1200f0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1200f4: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1200f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1200f8: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x1200f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x1200fc: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x1200fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x120100: 0x61940  sll         $v1, $a2, 5
    ctx->pc = 0x120100u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x120104: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x120104u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x120108: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x120108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x12010c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x12010cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x120110: 0x3c052800  lui         $a1, 0x2800
    ctx->pc = 0x120110u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10240 << 16));
    // 0x120114: 0x8ce2dd58  lw          $v0, -0x22A8($a3)
    ctx->pc = 0x120114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294958424)));
    // 0x120118: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x120118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12011c: 0x99202a  slt         $a0, $a0, $t9
    ctx->pc = 0x12011cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
    // 0x120120: 0x173142  srl         $a2, $s7, 5
    ctx->pc = 0x120120u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 23), 5));
    // 0x120124: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x120124u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x120128: 0x9fc8f1a8  lwu         $t0, -0xE58($fp)
    ctx->pc = 0x120128u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 30), 4294963624)));
    // 0x12012c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12012cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x120130: 0x324680a  movz        $t5, $t9, $a0
    ctx->pc = 0x120130u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 25));
    // 0x120134: 0x214ba  dsrl        $v0, $v0, 18
    ctx->pc = 0x120134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 18);
    // 0x120138: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x120138u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x12013c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x12013cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x120140: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x120140u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x120144: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x120144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x120148: 0x8e22f168  lw          $v0, -0xE98($s1)
    ctx->pc = 0x120148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x12014c: 0x3405a000  ori         $a1, $zero, 0xA000
    ctx->pc = 0x12014cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x120150: 0x52cb8  dsll        $a1, $a1, 18
    ctx->pc = 0x120150u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 18);
    // 0x120154: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x120154u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x120158: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x120158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x12015c: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x12015cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x120160: 0x84638  dsll        $t0, $t0, 24
    ctx->pc = 0x120160u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 24);
    // 0x120164: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x120164u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x120168: 0x52cf8  dsll        $a1, $a1, 19
    ctx->pc = 0x120168u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 19);
    // 0x12016c: 0x35a78000  ori         $a3, $t5, 0x8000
    ctx->pc = 0x12016cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)32768);
    // 0x120170: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x120170u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x120174: 0xac470030  sw          $a3, 0x30($v0)
    ctx->pc = 0x120174u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 7));
    // 0x120178: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x120178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x12017c: 0x3c0441ab  lui         $a0, 0x41AB
    ctx->pc = 0x12017cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16811 << 16));
    // 0x120180: 0x24500030  addiu       $s0, $v0, 0x30
    ctx->pc = 0x120180u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x120184: 0x24490040  addiu       $t1, $v0, 0x40
    ctx->pc = 0x120184u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x120188: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x120188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x12018c: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x12018cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x120190: 0x24085353  addiu       $t0, $zero, 0x5353
    ctx->pc = 0x120190u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 21331));
    // 0x120194: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x120194u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x120198: 0xfc460010  sd          $a2, 0x10($v0)
    ctx->pc = 0x120198u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 6));
    // 0x12019c: 0xfc450018  sd          $a1, 0x18($v0)
    ctx->pc = 0x12019cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 5));
    // 0x1201a0: 0xfc430020  sd          $v1, 0x20($v0)
    ctx->pc = 0x1201a0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 3));
    // 0x1201a4: 0xfc470028  sd          $a3, 0x28($v0)
    ctx->pc = 0x1201a4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 7));
    // 0x1201a8: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x1201a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x1201ac: 0xae080008  sw          $t0, 0x8($s0)
    ctx->pc = 0x1201acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 8));
    // 0x1201b0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1201b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1201b4: 0x19a00035  blez        $t5, . + 4 + (0x35 << 2)
    ctx->pc = 0x1201B4u;
    {
        const bool branch_taken_0x1201b4 = (GPR_S32(ctx, 13) <= 0);
        ctx->pc = 0x1201B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1201B4u;
            // 0x1201b8: 0xae29f168  sw          $t1, -0xE98($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294963560), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1201b4) {
            ctx->pc = 0x12028Cu;
            goto label_12028c;
        }
    }
    ctx->pc = 0x1201BCu;
    // 0x1201bc: 0x280602d  daddu       $t4, $s4, $zero
    ctx->pc = 0x1201bcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1201c0: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x1201c0u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1201c4: 0x300582d  daddu       $t3, $t8, $zero
    ctx->pc = 0x1201c4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1201c8: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x1201c8u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1201cc: 0x1a0502d  daddu       $t2, $t5, $zero
    ctx->pc = 0x1201ccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_1201d0:
    // 0x1201d0: 0x3c08002a  lui         $t0, 0x2A
    ctx->pc = 0x1201d0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)42 << 16));
    // 0x1201d4: 0x8e24f168  lw          $a0, -0xE98($s1)
    ctx->pc = 0x1201d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x1201d8: 0x8d02bd40  lw          $v0, -0x42C0($t0)
    ctx->pc = 0x1201d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294950208)));
    // 0x1201dc: 0x3c09002a  lui         $t1, 0x2A
    ctx->pc = 0x1201dcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)42 << 16));
    // 0x1201e0: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1201e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1201e4: 0x27070200  addiu       $a3, $t8, 0x200
    ctx->pc = 0x1201e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 24), 512));
    // 0x1201e8: 0x1621821  addu        $v1, $t3, $v0
    ctx->pc = 0x1201e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x1201ec: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1201ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1201f0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1201f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1201f4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1201f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1201f8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1201f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1201fc: 0xee3821  addu        $a3, $a3, $t6
    ctx->pc = 0x1201fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 14)));
    // 0x120200: 0x1765821  addu        $t3, $t3, $s6
    ctx->pc = 0x120200u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 22)));
    // 0x120204: 0x1d67021  addu        $t6, $t6, $s6
    ctx->pc = 0x120204u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 22)));
    // 0x120208: 0x8d22bd44  lw          $v0, -0x42BC($t1)
    ctx->pc = 0x120208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294950212)));
    // 0x12020c: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x12020cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x120210: 0x8e24f168  lw          $a0, -0xE98($s1)
    ctx->pc = 0x120210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x120214: 0x1e21821  addu        $v1, $t7, $v0
    ctx->pc = 0x120214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x120218: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x120218u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x12021c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x12021cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x120220: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x120220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x120224: 0x24850020  addiu       $a1, $a0, 0x20
    ctx->pc = 0x120224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x120228: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x120228u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x12022c: 0x24860030  addiu       $a2, $a0, 0x30
    ctx->pc = 0x12022cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x120230: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x120230u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x120234: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x120234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x120238: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x120238u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x12023c: 0x1f37821  addu        $t7, $t7, $s3
    ctx->pc = 0x12023cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 19)));
    // 0x120240: 0xae22f168  sw          $v0, -0xE98($s1)
    ctx->pc = 0x120240u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294963560), GPR_U32(ctx, 2));
    // 0x120244: 0x8d02bd40  lw          $v0, -0x42C0($t0)
    ctx->pc = 0x120244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294950208)));
    // 0x120248: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x120248u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x12024c: 0xac870020  sw          $a3, 0x20($a0)
    ctx->pc = 0x12024cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 7));
    // 0x120250: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x120250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x120254: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x120254u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x120258: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x120258u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x12025c: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x12025cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x120260: 0x8d22bd44  lw          $v0, -0x42BC($t1)
    ctx->pc = 0x120260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294950212)));
    // 0x120264: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x120264u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120268: 0x1821821  addu        $v1, $t4, $v0
    ctx->pc = 0x120268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x12026c: 0xac830030  sw          $v1, 0x30($a0)
    ctx->pc = 0x12026cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
    // 0x120270: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x120270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x120274: 0x1936021  addu        $t4, $t4, $s3
    ctx->pc = 0x120274u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 19)));
    // 0x120278: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x120278u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x12027c: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x12027cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x120280: 0x1540ffd3  bnez        $t2, . + 4 + (-0x2D << 2)
    ctx->pc = 0x120280u;
    {
        const bool branch_taken_0x120280 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x120284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120280u;
            // 0x120284: 0xacc00008  sw          $zero, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120280) {
            ctx->pc = 0x1201D0u;
            runtime->cooperativeGuestYield();
            goto label_1201d0;
        }
    }
    ctx->pc = 0x120288u;
    // 0x120288: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x120288u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
label_12028c:
    // 0x12028c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x12028cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x120290: 0x8e22f168  lw          $v0, -0xE98($s1)
    ctx->pc = 0x120290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x120294: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x120294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x120298: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x120298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x12029c: 0x3c070030  lui         $a3, 0x30
    ctx->pc = 0x12029cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)48 << 16));
    // 0x1202a0: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1202a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1202a4: 0x17283c  dsll32      $a1, $s7, 0
    ctx->pc = 0x1202a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) << (32 + 0));
    // 0x1202a8: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x1202a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x1202ac: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x1202acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x1202b0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1202b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1202b4: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1202b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1202b8: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1202b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1202bc: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1202bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1202c0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1202c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1202c4: 0x8d202a  slt         $a0, $a0, $t5
    ctx->pc = 0x1202c4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x1202c8: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x1202c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1202cc: 0x3c032800  lui         $v1, 0x2800
    ctx->pc = 0x1202ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10240 << 16));
    // 0x1202d0: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x1202d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1202d4: 0x104680b  movn        $t5, $t0, $a0
    ctx->pc = 0x1202d4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 8));
    // 0x1202d8: 0x8ce2dd58  lw          $v0, -0x22A8($a3)
    ctx->pc = 0x1202d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294958424)));
    // 0x1202dc: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1202dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1202e0: 0x9fc7f1a8  lwu         $a3, -0xE58($fp)
    ctx->pc = 0x1202e0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 30), 4294963624)));
    // 0x1202e4: 0x3404a000  ori         $a0, $zero, 0xA000
    ctx->pc = 0x1202e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x1202e8: 0x424b8  dsll        $a0, $a0, 18
    ctx->pc = 0x1202e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 18);
    // 0x1202ec: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x1202ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x1202f0: 0x8e23f168  lw          $v1, -0xE98($s1)
    ctx->pc = 0x1202f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x1202f4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1202f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1202f8: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x1202f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1202fc: 0x2143a  dsrl        $v0, $v0, 16
    ctx->pc = 0x1202fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
    // 0x120300: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x120300u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x120304: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x120304u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x120308: 0x73e38  dsll        $a3, $a3, 24
    ctx->pc = 0x120308u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 24);
    // 0x12030c: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x12030cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x120310: 0x424f8  dsll        $a0, $a0, 19
    ctx->pc = 0x120310u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 19);
    // 0x120314: 0x35a88000  ori         $t0, $t5, 0x8000
    ctx->pc = 0x120314u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)32768);
    // 0x120318: 0xac680030  sw          $t0, 0x30($v1)
    ctx->pc = 0x120318u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 8));
    // 0x12031c: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x12031cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x120320: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x120320u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x120324: 0x3c02418b  lui         $v0, 0x418B
    ctx->pc = 0x120324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16779 << 16));
    // 0x120328: 0x24700030  addiu       $s0, $v1, 0x30
    ctx->pc = 0x120328u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x12032c: 0x24690040  addiu       $t1, $v1, 0x40
    ctx->pc = 0x12032cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x120330: 0x2404004d  addiu       $a0, $zero, 0x4D
    ctx->pc = 0x120330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x120334: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x120334u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x120338: 0x24085353  addiu       $t0, $zero, 0x5353
    ctx->pc = 0x120338u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 21331));
    // 0x12033c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x12033cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x120340: 0xfc660010  sd          $a2, 0x10($v1)
    ctx->pc = 0x120340u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 6));
    // 0x120344: 0xfc640018  sd          $a0, 0x18($v1)
    ctx->pc = 0x120344u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 4));
    // 0x120348: 0xfc650020  sd          $a1, 0x20($v1)
    ctx->pc = 0x120348u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 32), GPR_U64(ctx, 5));
    // 0x12034c: 0xfc670028  sd          $a3, 0x28($v1)
    ctx->pc = 0x12034cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 40), GPR_U64(ctx, 7));
    // 0x120350: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x120350u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x120354: 0xae080008  sw          $t0, 0x8($s0)
    ctx->pc = 0x120354u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 8));
    // 0x120358: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x120358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x12035c: 0x19a00035  blez        $t5, . + 4 + (0x35 << 2)
    ctx->pc = 0x12035Cu;
    {
        const bool branch_taken_0x12035c = (GPR_S32(ctx, 13) <= 0);
        ctx->pc = 0x120360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12035Cu;
            // 0x120360: 0xae29f168  sw          $t1, -0xE98($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294963560), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12035c) {
            ctx->pc = 0x120434u;
            goto label_120434;
        }
    }
    ctx->pc = 0x120364u;
    // 0x120364: 0x280602d  daddu       $t4, $s4, $zero
    ctx->pc = 0x120364u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120368: 0x300582d  daddu       $t3, $t8, $zero
    ctx->pc = 0x120368u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12036c: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x12036cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120370: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x120370u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120374: 0x1a0502d  daddu       $t2, $t5, $zero
    ctx->pc = 0x120374u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_120378:
    // 0x120378: 0x3c08002a  lui         $t0, 0x2A
    ctx->pc = 0x120378u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)42 << 16));
    // 0x12037c: 0x8e24f168  lw          $a0, -0xE98($s1)
    ctx->pc = 0x12037cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x120380: 0x8d02bd48  lw          $v0, -0x42B8($t0)
    ctx->pc = 0x120380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294950216)));
    // 0x120384: 0x3c09002a  lui         $t1, 0x2A
    ctx->pc = 0x120384u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)42 << 16));
    // 0x120388: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x120388u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x12038c: 0x27070200  addiu       $a3, $t8, 0x200
    ctx->pc = 0x12038cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 24), 512));
    // 0x120390: 0x1c21821  addu        $v1, $t6, $v0
    ctx->pc = 0x120390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x120394: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x120394u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x120398: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x120398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x12039c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x12039cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1203a0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1203a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1203a4: 0xef3821  addu        $a3, $a3, $t7
    ctx->pc = 0x1203a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 15)));
    // 0x1203a8: 0x1f67821  addu        $t7, $t7, $s6
    ctx->pc = 0x1203a8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 22)));
    // 0x1203ac: 0x1d37021  addu        $t6, $t6, $s3
    ctx->pc = 0x1203acu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 19)));
    // 0x1203b0: 0x8d22bd4c  lw          $v0, -0x42B4($t1)
    ctx->pc = 0x1203b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294950220)));
    // 0x1203b4: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x1203b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x1203b8: 0x8e24f168  lw          $a0, -0xE98($s1)
    ctx->pc = 0x1203b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x1203bc: 0x1621821  addu        $v1, $t3, $v0
    ctx->pc = 0x1203bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x1203c0: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x1203c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x1203c4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1203c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1203c8: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x1203c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1203cc: 0x24850020  addiu       $a1, $a0, 0x20
    ctx->pc = 0x1203ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1203d0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1203d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1203d4: 0x24860030  addiu       $a2, $a0, 0x30
    ctx->pc = 0x1203d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x1203d8: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1203d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1203dc: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x1203dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x1203e0: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1203e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1203e4: 0x1765821  addu        $t3, $t3, $s6
    ctx->pc = 0x1203e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 22)));
    // 0x1203e8: 0xae22f168  sw          $v0, -0xE98($s1)
    ctx->pc = 0x1203e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294963560), GPR_U32(ctx, 2));
    // 0x1203ec: 0x8d02bd48  lw          $v0, -0x42B8($t0)
    ctx->pc = 0x1203ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294950216)));
    // 0x1203f0: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x1203f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1203f4: 0x1821821  addu        $v1, $t4, $v0
    ctx->pc = 0x1203f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x1203f8: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1203f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1203fc: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x1203fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x120400: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x120400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x120404: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x120404u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x120408: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x120408u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x12040c: 0x1936021  addu        $t4, $t4, $s3
    ctx->pc = 0x12040cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 19)));
    // 0x120410: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x120410u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x120414: 0x8d22bd4c  lw          $v0, -0x42B4($t1)
    ctx->pc = 0x120414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294950220)));
    // 0x120418: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x120418u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x12041c: 0xac870030  sw          $a3, 0x30($a0)
    ctx->pc = 0x12041cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 7));
    // 0x120420: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x120420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x120424: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x120424u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x120428: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x120428u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x12042c: 0x1540ffd2  bnez        $t2, . + 4 + (-0x2E << 2)
    ctx->pc = 0x12042Cu;
    {
        const bool branch_taken_0x12042c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x120430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12042Cu;
            // 0x120430: 0xacc00008  sw          $zero, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12042c) {
            ctx->pc = 0x120378u;
            runtime->cooperativeGuestYield();
            goto label_120378;
        }
    }
    ctx->pc = 0x120434u;
label_120434:
    // 0x120434: 0xd1240  sll         $v0, $t5, 9
    ctx->pc = 0x120434u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 9));
    // 0x120438: 0x2739fffd  addiu       $t9, $t9, -0x3
    ctx->pc = 0x120438u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967293));
    // 0x12043c: 0x1f20ff24  bgtz        $t9, . + 4 + (-0xDC << 2)
    ctx->pc = 0x12043Cu;
    {
        const bool branch_taken_0x12043c = (GPR_S32(ctx, 25) > 0);
        ctx->pc = 0x120440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12043Cu;
            // 0x120440: 0x302c021  addu        $t8, $t8, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12043c) {
            ctx->pc = 0x1200D0u;
            runtime->cooperativeGuestYield();
            goto label_1200d0;
        }
    }
    ctx->pc = 0x120444u;
label_120444:
    // 0x120444: 0xc04fe92  jal         func_13FA48
    ctx->pc = 0x120444u;
    SET_GPR_U32(ctx, 31, 0x12044Cu);
    ctx->pc = 0x13FA48u;
    if (runtime->hasFunction(0x13FA48u)) {
        auto targetFn = runtime->lookupFunction(0x13FA48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12044Cu; }
        if (ctx->pc != 0x12044Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa48_0x13fa78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12044Cu; }
        if (ctx->pc != 0x12044Cu) { return; }
    }
    ctx->pc = 0x12044Cu;
    // 0x12044c: 0xc04fd78  jal         func_13F5E0
    ctx->pc = 0x12044Cu;
    SET_GPR_U32(ctx, 31, 0x120454u);
    ctx->pc = 0x13F5E0u;
    if (runtime->hasFunction(0x13F5E0u)) {
        auto targetFn = runtime->lookupFunction(0x13F5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120454u; }
        if (ctx->pc != 0x120454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f5e0_0x13f648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120454u; }
        if (ctx->pc != 0x120454u) { return; }
    }
    ctx->pc = 0x120454u;
    // 0x120454: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x120454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x120458: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x120458u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x12045c: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x12045cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x120460: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x120460u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x120464: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x120464u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x120468: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x120468u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12046c: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x12046cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x120470: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x120470u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x120474: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x120474u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x120478: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x120478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12047c: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x12047cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x120480: 0x3e00008  jr          $ra
    ctx->pc = 0x120480u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120480u;
            // 0x120484: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11FEA0u: goto label_11fea0;
            case 0x1200C0u: goto label_1200c0;
            case 0x1200D0u: goto label_1200d0;
            case 0x1201D0u: goto label_1201d0;
            case 0x12028Cu: goto label_12028c;
            case 0x120378u: goto label_120378;
            case 0x120434u: goto label_120434;
            case 0x120444u: goto label_120444;
            case 0x120540u: goto label_120540;
            case 0x1205D4u: goto label_1205d4;
            case 0x1205E4u: goto label_1205e4;
            case 0x120600u: goto label_120600;
            case 0x120620u: goto label_120620;
            case 0x120648u: goto label_120648;
            case 0x120668u: goto label_120668;
            case 0x1206A0u: goto label_1206a0;
            case 0x1206C8u: goto label_1206c8;
            case 0x1206E8u: goto label_1206e8;
            case 0x120708u: goto label_120708;
            case 0x120718u: goto label_120718;
            default: break;
        }
        return;
    }
    ctx->pc = 0x120488u;
    // 0x120488: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x120488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x12048c: 0x3e00008  jr          $ra
    ctx->pc = 0x12048Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12048Cu;
            // 0x120490: 0x30420002  andi        $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11FEA0u: goto label_11fea0;
            case 0x1200C0u: goto label_1200c0;
            case 0x1200D0u: goto label_1200d0;
            case 0x1201D0u: goto label_1201d0;
            case 0x12028Cu: goto label_12028c;
            case 0x120378u: goto label_120378;
            case 0x120434u: goto label_120434;
            case 0x120444u: goto label_120444;
            case 0x120540u: goto label_120540;
            case 0x1205D4u: goto label_1205d4;
            case 0x1205E4u: goto label_1205e4;
            case 0x120600u: goto label_120600;
            case 0x120620u: goto label_120620;
            case 0x120648u: goto label_120648;
            case 0x120668u: goto label_120668;
            case 0x1206A0u: goto label_1206a0;
            case 0x1206C8u: goto label_1206c8;
            case 0x1206E8u: goto label_1206e8;
            case 0x120708u: goto label_120708;
            case 0x120718u: goto label_120718;
            default: break;
        }
        return;
    }
    ctx->pc = 0x120494u;
    // 0x120494: 0x0  nop
    ctx->pc = 0x120494u;
    // NOP
    // 0x120498: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x120498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x12049c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x12049cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1204a0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1204a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1204a4: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x1204a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x1204a8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1204a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1204ac: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1204acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1204b0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1204b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1204b4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1204b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1204b8: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1204b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x1204bc: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x1204bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x1204c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1204c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1204c4: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x1204c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1204c8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1204c8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1204cc: 0x0  nop
    ctx->pc = 0x1204ccu;
    // NOP
    // 0x1204d0: 0x45010091  bc1t        . + 4 + (0x91 << 2)
    ctx->pc = 0x1204D0u;
    {
        const bool branch_taken_0x1204d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1204D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1204D0u;
            // 0x1204d4: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1204d0) {
            ctx->pc = 0x120718u;
            goto label_120718;
        }
    }
    ctx->pc = 0x1204D8u;
    // 0x1204d8: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x1204d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x1204dc: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x1204dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1204e0: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x1204e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1204e4: 0x40f809  jalr        $v0
    ctx->pc = 0x1204E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1204ECu);
        ctx->pc = 0x1204E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1204E4u;
            // 0x1204e8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1204ECu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11FEA0u: goto label_11fea0;
            case 0x1200C0u: goto label_1200c0;
            case 0x1200D0u: goto label_1200d0;
            case 0x1201D0u: goto label_1201d0;
            case 0x12028Cu: goto label_12028c;
            case 0x120378u: goto label_120378;
            case 0x120434u: goto label_120434;
            case 0x120444u: goto label_120444;
            case 0x120540u: goto label_120540;
            case 0x1205D4u: goto label_1205d4;
            case 0x1205E4u: goto label_1205e4;
            case 0x120600u: goto label_120600;
            case 0x120620u: goto label_120620;
            case 0x120648u: goto label_120648;
            case 0x120668u: goto label_120668;
            case 0x1206A0u: goto label_1206a0;
            case 0x1206C8u: goto label_1206c8;
            case 0x1206E8u: goto label_1206e8;
            case 0x120708u: goto label_120708;
            case 0x120718u: goto label_120718;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1204ECu; }
            if (ctx->pc != 0x1204ECu) { return; }
        }
        }
    }
    ctx->pc = 0x1204ECu;
    // 0x1204ec: 0x10400076  beqz        $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x1204ECu;
    {
        const bool branch_taken_0x1204ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1204F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1204ECu;
            // 0x1204f0: 0x3c140033  lui         $s4, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1204ec) {
            ctx->pc = 0x1206C8u;
            goto label_1206c8;
        }
    }
    ctx->pc = 0x1204F4u;
    // 0x1204f4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1204f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1204f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1204f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1204fc: 0x8e72001c  lw          $s2, 0x1C($s3)
    ctx->pc = 0x1204fcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x120500: 0xe6600018  swc1        $f0, 0x18($s3)
    ctx->pc = 0x120500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
    // 0x120504: 0x8e83ed60  lw          $v1, -0x12A0($s4)
    ctx->pc = 0x120504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
    // 0x120508: 0x2c620100  sltiu       $v0, $v1, 0x100
    ctx->pc = 0x120508u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x12050c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x12050cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x120510: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x120510u;
    {
        const bool branch_taken_0x120510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x120514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120510u;
            // 0x120514: 0x3c100033  lui         $s0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120510) {
            ctx->pc = 0x120540u;
            goto label_120540;
        }
    }
    ctx->pc = 0x120518u;
    // 0x120518: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x120518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x12051c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x12051cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x120520: 0x2442ed68  addiu       $v0, $v0, -0x1298
    ctx->pc = 0x120520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962536));
    // 0x120524: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x120524u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x120528: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x120528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12052c: 0x8c84f168  lw          $a0, -0xE98($a0)
    ctx->pc = 0x12052cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294963560)));
    // 0x120530: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x120530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x120534: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x120534u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x120538: 0x8e83ed60  lw          $v1, -0x12A0($s4)
    ctx->pc = 0x120538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
    // 0x12053c: 0x0  nop
    ctx->pc = 0x12053cu;
    // NOP
label_120540:
    // 0x120540: 0x2611ed68  addiu       $s1, $s0, -0x1298
    ctx->pc = 0x120540u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962536));
    // 0x120544: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x120544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120548: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x120548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12054c: 0x3c16002d  lui         $s6, 0x2D
    ctx->pc = 0x12054cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)45 << 16));
    // 0x120550: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x120550u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x120554: 0xae83ed60  sw          $v1, -0x12A0($s4)
    ctx->pc = 0x120554u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294962528), GPR_U32(ctx, 3));
    // 0x120558: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x120558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x12055c: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x12055Cu;
    SET_GPR_U32(ctx, 31, 0x120564u);
    ctx->pc = 0x120560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12055Cu;
            // 0x120560: 0xac520000  sw          $s2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120564u; }
        if (ctx->pc != 0x120564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120564u; }
        if (ctx->pc != 0x120564u) { return; }
    }
    ctx->pc = 0x120564u;
    // 0x120564: 0x26450018  addiu       $a1, $s2, 0x18
    ctx->pc = 0x120564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x120568: 0x26c4bb98  addiu       $a0, $s6, -0x4468
    ctx->pc = 0x120568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294949784));
    // 0x12056c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x12056cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x120570: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x120570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x120574: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x120574u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x120578: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x120578u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x12057c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x12057cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x120580: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x120580u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x120584: 0x8e82ed60  lw          $v0, -0x12A0($s4)
    ctx->pc = 0x120584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
    // 0x120588: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x120588u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12058c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x12058cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x120590: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x120590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x120594: 0x8c620658  lw          $v0, 0x658($v1)
    ctx->pc = 0x120594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1624)));
    // 0x120598: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x120598u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x12059c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x12059cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1205a0: 0x40f809  jalr        $v0
    ctx->pc = 0x1205A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1205A8u);
        ctx->pc = 0x1205A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1205A0u;
            // 0x1205a4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1205A8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11FEA0u: goto label_11fea0;
            case 0x1200C0u: goto label_1200c0;
            case 0x1200D0u: goto label_1200d0;
            case 0x1201D0u: goto label_1201d0;
            case 0x12028Cu: goto label_12028c;
            case 0x120378u: goto label_120378;
            case 0x120434u: goto label_120434;
            case 0x120444u: goto label_120444;
            case 0x120540u: goto label_120540;
            case 0x1205D4u: goto label_1205d4;
            case 0x1205E4u: goto label_1205e4;
            case 0x120600u: goto label_120600;
            case 0x120620u: goto label_120620;
            case 0x120648u: goto label_120648;
            case 0x120668u: goto label_120668;
            case 0x1206A0u: goto label_1206a0;
            case 0x1206C8u: goto label_1206c8;
            case 0x1206E8u: goto label_1206e8;
            case 0x120708u: goto label_120708;
            case 0x120718u: goto label_120718;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1205A8u; }
            if (ctx->pc != 0x1205A8u) { return; }
        }
        }
    }
    ctx->pc = 0x1205A8u;
    // 0x1205a8: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1205a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1205ac: 0x8e82ed60  lw          $v0, -0x12A0($s4)
    ctx->pc = 0x1205acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
    // 0x1205b0: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x1205b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x1205b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1205b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1205b8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1205b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1205bc: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x1205BCu;
    SET_GPR_U32(ctx, 31, 0x1205C4u);
    ctx->pc = 0x1205C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1205BCu;
            // 0x1205c0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1205C4u; }
        if (ctx->pc != 0x1205C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1205C4u; }
        if (ctx->pc != 0x1205C4u) { return; }
    }
    ctx->pc = 0x1205C4u;
    // 0x1205c4: 0x8e05f1ac  lw          $a1, -0xE54($s0)
    ctx->pc = 0x1205c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963628)));
    // 0x1205c8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1205c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1205cc: 0xc047fa8  jal         func_11FEA0
    ctx->pc = 0x1205CCu;
    SET_GPR_U32(ctx, 31, 0x1205D4u);
    ctx->pc = 0x1205D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1205CCu;
            // 0x1205d0: 0xc66c0018  lwc1        $f12, 0x18($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11FEA0u;
    runtime->cooperativeGuestYield();
    goto label_11fea0;
    ctx->pc = 0x1205D4u;
label_1205d4:
    // 0x1205d4: 0x8e05f1ac  lw          $a1, -0xE54($s0)
    ctx->pc = 0x1205d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963628)));
    // 0x1205d8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1205d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1205dc: 0xc047fa8  jal         func_11FEA0
    ctx->pc = 0x1205DCu;
    SET_GPR_U32(ctx, 31, 0x1205E4u);
    ctx->pc = 0x1205E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1205DCu;
            // 0x1205e0: 0xc66c0018  lwc1        $f12, 0x18($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11FEA0u;
    runtime->cooperativeGuestYield();
    goto label_11fea0;
    ctx->pc = 0x1205E4u;
label_1205e4:
    // 0x1205e4: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x1205e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x1205e8: 0x8ca4f168  lw          $a0, -0xE98($a1)
    ctx->pc = 0x1205e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294963560)));
    // 0x1205ec: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x1205ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x1205f0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1205F0u;
    {
        const bool branch_taken_0x1205f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1205F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1205F0u;
            // 0x1205f4: 0x24820008  addiu       $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1205f0) {
            ctx->pc = 0x120620u;
            goto label_120620;
        }
    }
    ctx->pc = 0x1205F8u;
    // 0x1205f8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1205f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1205fc: 0x0  nop
    ctx->pc = 0x1205fcu;
    // NOP
label_120600:
    // 0x120600: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x120600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x120604: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x120604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x120608: 0x0  nop
    ctx->pc = 0x120608u;
    // NOP
    // 0x12060c: 0x0  nop
    ctx->pc = 0x12060cu;
    // NOP
    // 0x120610: 0x0  nop
    ctx->pc = 0x120610u;
    // NOP
    // 0x120614: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x120614u;
    {
        const bool branch_taken_0x120614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x120614) {
            ctx->pc = 0x120618u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x120614u;
            // 0x120618: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x120600u;
            runtime->cooperativeGuestYield();
            goto label_120600;
        }
    }
    ctx->pc = 0x12061Cu;
    // 0x12061c: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x12061cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_120620:
    // 0x120620: 0x3c036000  lui         $v1, 0x6000
    ctx->pc = 0x120620u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24576 << 16));
    // 0x120624: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x120624u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x120628: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x120628u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x12062c: 0xaca2f168  sw          $v0, -0xE98($a1)
    ctx->pc = 0x12062cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294963560), GPR_U32(ctx, 2));
    // 0x120630: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x120630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120634: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x120634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x120638: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x120638u;
    {
        const bool branch_taken_0x120638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12063Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120638u;
            // 0x12063c: 0x8e82ed60  lw          $v0, -0x12A0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120638) {
            ctx->pc = 0x120668u;
            goto label_120668;
        }
    }
    ctx->pc = 0x120640u;
    // 0x120640: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x120640u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x120644: 0x0  nop
    ctx->pc = 0x120644u;
    // NOP
label_120648:
    // 0x120648: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x120648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x12064c: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x12064cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x120650: 0x0  nop
    ctx->pc = 0x120650u;
    // NOP
    // 0x120654: 0x0  nop
    ctx->pc = 0x120654u;
    // NOP
    // 0x120658: 0x0  nop
    ctx->pc = 0x120658u;
    // NOP
    // 0x12065c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12065Cu;
    {
        const bool branch_taken_0x12065c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12065c) {
            ctx->pc = 0x120660u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12065Cu;
            // 0x120660: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x120648u;
            runtime->cooperativeGuestYield();
            goto label_120648;
        }
    }
    ctx->pc = 0x120664u;
    // 0x120664: 0x8e82ed60  lw          $v0, -0x12A0($s4)
    ctx->pc = 0x120664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
label_120668:
    // 0x120668: 0x2650ed68  addiu       $s0, $s2, -0x1298
    ctx->pc = 0x120668u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294962536));
    // 0x12066c: 0xaca4f168  sw          $a0, -0xE98($a1)
    ctx->pc = 0x12066cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294963560), GPR_U32(ctx, 4));
    // 0x120670: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x120670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x120674: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x120674u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x120678: 0xae85ed60  sw          $a1, -0x12A0($s4)
    ctx->pc = 0x120678u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294962528), GPR_U32(ctx, 5));
    // 0x12067c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x12067cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x120680: 0x2ca30100  sltiu       $v1, $a1, 0x100
    ctx->pc = 0x120680u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x120684: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x120684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x120688: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x120688u;
    {
        const bool branch_taken_0x120688 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12068Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120688u;
            // 0x12068c: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120688) {
            ctx->pc = 0x1206A0u;
            goto label_1206a0;
        }
    }
    ctx->pc = 0x120690u;
    // 0x120690: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x120690u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x120694: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x120694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x120698: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x120698u;
    SET_GPR_U32(ctx, 31, 0x1206A0u);
    ctx->pc = 0x12069Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x120698u;
            // 0x12069c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1206A0u; }
        if (ctx->pc != 0x1206A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1206A0u; }
        if (ctx->pc != 0x1206A0u) { return; }
    }
    ctx->pc = 0x1206A0u;
label_1206a0:
    // 0x1206a0: 0x26c3bb98  addiu       $v1, $s6, -0x4468
    ctx->pc = 0x1206a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294949784));
    // 0x1206a4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1206a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1206a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1206a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1206ac: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x1206acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x1206b0: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x1206b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1206b4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1206b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1206b8: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x1206b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x1206bc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1206bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1206c0: 0xae63000c  sw          $v1, 0xC($s3)
    ctx->pc = 0x1206c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
    // 0x1206c4: 0x0  nop
    ctx->pc = 0x1206c4u;
    // NOP
label_1206c8:
    // 0x1206c8: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x1206c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1206cc: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x1206ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x1206d0: 0x8cc5f168  lw          $a1, -0xE98($a2)
    ctx->pc = 0x1206d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294963560)));
    // 0x1206d4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1206d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1206d8: 0x30a2000f  andi        $v0, $a1, 0xF
    ctx->pc = 0x1206d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x1206dc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1206DCu;
    {
        const bool branch_taken_0x1206dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1206E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1206DCu;
            // 0x1206e0: 0x24a30008  addiu       $v1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1206dc) {
            ctx->pc = 0x120708u;
            goto label_120708;
        }
    }
    ctx->pc = 0x1206E4u;
    // 0x1206e4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1206e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_1206e8:
    // 0x1206e8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1206e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1206ec: 0x30a2000f  andi        $v0, $a1, 0xF
    ctx->pc = 0x1206ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x1206f0: 0x0  nop
    ctx->pc = 0x1206f0u;
    // NOP
    // 0x1206f4: 0x0  nop
    ctx->pc = 0x1206f4u;
    // NOP
    // 0x1206f8: 0x0  nop
    ctx->pc = 0x1206f8u;
    // NOP
    // 0x1206fc: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1206FCu;
    {
        const bool branch_taken_0x1206fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1206fc) {
            ctx->pc = 0x120700u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1206FCu;
            // 0x120700: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1206E8u;
            runtime->cooperativeGuestYield();
            goto label_1206e8;
        }
    }
    ctx->pc = 0x120704u;
    // 0x120704: 0x24a30008  addiu       $v1, $a1, 0x8
    ctx->pc = 0x120704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_120708:
    // 0x120708: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x120708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x12070c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x12070cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x120710: 0xacc3f168  sw          $v1, -0xE98($a2)
    ctx->pc = 0x120710u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294963560), GPR_U32(ctx, 3));
    // 0x120714: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x120714u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
label_120718:
    // 0x120718: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x120718u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12071c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x12071cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x120720: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x120720u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x120724: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x120724u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x120728: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x120728u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12072c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x12072cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x120730: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x120730u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120734: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x120734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120738: 0x3e00008  jr          $ra
    ctx->pc = 0x120738u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12073Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120738u;
            // 0x12073c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11FEA0u: goto label_11fea0;
            case 0x1200C0u: goto label_1200c0;
            case 0x1200D0u: goto label_1200d0;
            case 0x1201D0u: goto label_1201d0;
            case 0x12028Cu: goto label_12028c;
            case 0x120378u: goto label_120378;
            case 0x120434u: goto label_120434;
            case 0x120444u: goto label_120444;
            case 0x120540u: goto label_120540;
            case 0x1205D4u: goto label_1205d4;
            case 0x1205E4u: goto label_1205e4;
            case 0x120600u: goto label_120600;
            case 0x120620u: goto label_120620;
            case 0x120648u: goto label_120648;
            case 0x120668u: goto label_120668;
            case 0x1206A0u: goto label_1206a0;
            case 0x1206C8u: goto label_1206c8;
            case 0x1206E8u: goto label_1206e8;
            case 0x120708u: goto label_120708;
            case 0x120718u: goto label_120718;
            default: break;
        }
        return;
    }
    ctx->pc = 0x120740u;
}
