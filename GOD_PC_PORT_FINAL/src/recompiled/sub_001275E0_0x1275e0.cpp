#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001275E0
// Address: 0x1275e0 - 0x127918
void sub_001275E0_0x1275e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001275E0_0x1275e0");
#endif

    ctx->pc = 0x1275e0u;

    // 0x1275e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1275e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1275e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1275e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1275e8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1275e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1275ec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1275ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1275f0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1275f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1275f4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1275f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1275f8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1275f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1275fc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1275fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x127600: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x127600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x127604: 0xc04fd50  jal         func_13F540
    ctx->pc = 0x127604u;
    SET_GPR_U32(ctx, 31, 0x12760Cu);
    ctx->pc = 0x127608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127604u;
            // 0x127608: 0x3c110033  lui         $s1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F540u;
    if (runtime->hasFunction(0x13F540u)) {
        auto targetFn = runtime->lookupFunction(0x13F540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12760Cu; }
        if (ctx->pc != 0x12760Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_0013f540_0x13f540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12760Cu; }
        if (ctx->pc != 0x12760Cu) { return; }
    }
    ctx->pc = 0x12760Cu;
    // 0x12760c: 0x8e22f168  lw          $v0, -0xE98($s1)
    ctx->pc = 0x12760cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x127610: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x127610u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x127614: 0x8e22f168  lw          $v0, -0xE98($s1)
    ctx->pc = 0x127614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x127618: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x127618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x12761c: 0xc04fe88  jal         func_13FA20
    ctx->pc = 0x12761Cu;
    SET_GPR_U32(ctx, 31, 0x127624u);
    ctx->pc = 0x127620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12761Cu;
            // 0x127620: 0xae22f168  sw          $v0, -0xE98($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294963560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA20u;
    if (runtime->hasFunction(0x13FA20u)) {
        auto targetFn = runtime->lookupFunction(0x13FA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127624u; }
        if (ctx->pc != 0x127624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa20_0x13fa48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127624u; }
        if (ctx->pc != 0x127624u) { return; }
    }
    ctx->pc = 0x127624u;
    // 0x127624: 0x8e22f168  lw          $v0, -0xE98($s1)
    ctx->pc = 0x127624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x127628: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x127628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x12762c: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x12762cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x127630: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x127630u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x127634: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x127634u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x127638: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x127638u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x12763c: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x12763cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x127640: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x127640u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x127644: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x127644u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x127648: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x127648u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x12764c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x12764cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x127650: 0x3c0a0200  lui         $t2, 0x200
    ctx->pc = 0x127650u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)512 << 16));
    // 0x127654: 0x2402004d  addiu       $v0, $zero, 0x4D
    ctx->pc = 0x127654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x127658: 0x340bfffc  ori         $t3, $zero, 0xFFFC
    ctx->pc = 0x127658u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x12765c: 0xb5fb8  dsll        $t3, $t3, 30
    ctx->pc = 0x12765cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 30);
    // 0x127660: 0x8cc5dd58  lw          $a1, -0x22A8($a2)
    ctx->pc = 0x127660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294958424)));
    // 0x127664: 0x3c090033  lui         $t1, 0x33
    ctx->pc = 0x127664u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)51 << 16));
    // 0x127668: 0x8e24f168  lw          $a0, -0xE98($s1)
    ctx->pc = 0x127668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x12766c: 0x3c130033  lui         $s3, 0x33
    ctx->pc = 0x12766cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)51 << 16));
    // 0x127670: 0x54182  srl         $t0, $a1, 6
    ctx->pc = 0x127670u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 5), 6));
    // 0x127674: 0x340c8000  ori         $t4, $zero, 0x8000
    ctx->pc = 0x127674u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x127678: 0xc6478  dsll        $t4, $t4, 17
    ctx->pc = 0x127678u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 17);
    // 0x12767c: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x12767cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x127680: 0xfc820018  sd          $v0, 0x18($a0)
    ctx->pc = 0x127680u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 2));
    // 0x127684: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x127684u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x127688: 0x2407004f  addiu       $a3, $zero, 0x4F
    ctx->pc = 0x127688u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x12768c: 0x81438  dsll        $v0, $t0, 16
    ctx->pc = 0x12768cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << 16);
    // 0x127690: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x127690u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x127694: 0x20a8025  or          $s0, $s0, $t2
    ctx->pc = 0x127694u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 10));
    // 0x127698: 0x20b8025  or          $s0, $s0, $t3
    ctx->pc = 0x127698u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 11));
    // 0x12769c: 0xfc900010  sd          $s0, 0x10($a0)
    ctx->pc = 0x12769cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 16));
    // 0x1276a0: 0x9d23f19c  lwu         $v1, -0xE64($t1)
    ctx->pc = 0x1276a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 9), 4294963612)));
    // 0x1276a4: 0x9e62f1a0  lwu         $v0, -0xE60($s3)
    ctx->pc = 0x1276a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4294963616)));
    // 0x1276a8: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1276a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1276ac: 0xfc870028  sd          $a3, 0x28($a0)
    ctx->pc = 0x1276acu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 7));
    // 0x1276b0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1276b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1276b4: 0x4c1025  or          $v0, $v0, $t4
    ctx->pc = 0x1276b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 12));
    // 0x1276b8: 0xfc820020  sd          $v0, 0x20($a0)
    ctx->pc = 0x1276b8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 2));
    // 0x1276bc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1276bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1276c0: 0x24c6dd58  addiu       $a2, $a2, -0x22A8
    ctx->pc = 0x1276c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958424));
    // 0x1276c4: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x1276c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1276c8: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x1276c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1276cc: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1276ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1276d0: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x1276d0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1276d4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1276d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1276d8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1276d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1276dc: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x1276dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1276e0: 0xc6400370  lwc1        $f0, 0x370($s2)
    ctx->pc = 0x1276e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1276e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1276e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1276e8: 0xc6410374  lwc1        $f1, 0x374($s2)
    ctx->pc = 0x1276e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1276ec: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1276ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1276f0: 0x31c3a  dsrl        $v1, $v1, 16
    ctx->pc = 0x1276f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 16);
    // 0x1276f4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1276f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1276f8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1276f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1276fc: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x1276fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x127700: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x127700u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x127704: 0xfc820048  sd          $v0, 0x48($a0)
    ctx->pc = 0x127704u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 72), GPR_U64(ctx, 2));
    // 0x127708: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x127708u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x12770c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12770cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x127710: 0x440f0800  mfc1        $t7, $f1
    ctx->pc = 0x127710u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x127714: 0xfc850030  sd          $a1, 0x30($a0)
    ctx->pc = 0x127714u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 5));
    // 0x127718: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x127718u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x12771c: 0x44180000  mfc1        $t8, $f0
    ctx->pc = 0x12771cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 24, bits); }
    // 0x127720: 0xfc830050  sd          $v1, 0x50($a0)
    ctx->pc = 0x127720u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 80), GPR_U64(ctx, 3));
    // 0x127724: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x127724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x127728: 0x24070048  addiu       $a3, $zero, 0x48
    ctx->pc = 0x127728u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x12772c: 0x24090041  addiu       $t1, $zero, 0x41
    ctx->pc = 0x12772cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x127730: 0x240a0043  addiu       $t2, $zero, 0x43
    ctx->pc = 0x127730u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x127734: 0x30f1023  subu        $v0, $t8, $t7
    ctx->pc = 0x127734u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 15)));
    // 0x127738: 0x3c0b3f80  lui         $t3, 0x3F80
    ctx->pc = 0x127738u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)16256 << 16));
    // 0x12773c: 0xb5c38  dsll        $t3, $t3, 16
    ctx->pc = 0x12773cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 16);
    // 0x127740: 0x356b8080  ori         $t3, $t3, 0x8080
    ctx->pc = 0x127740u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32896);
    // 0x127744: 0xb5c38  dsll        $t3, $t3, 16
    ctx->pc = 0x127744u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 16);
    // 0x127748: 0x356b8080  ori         $t3, $t3, 0x8080
    ctx->pc = 0x127748u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32896);
    // 0x12774c: 0x244500ff  addiu       $a1, $v0, 0xFF
    ctx->pc = 0x12774cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 255));
    // 0x127750: 0x240c003b  addiu       $t4, $zero, 0x3B
    ctx->pc = 0x127750u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x127754: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x127754u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x127758: 0x240d003f  addiu       $t5, $zero, 0x3F
    ctx->pc = 0x127758u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x12775c: 0x240e0015  addiu       $t6, $zero, 0x15
    ctx->pc = 0x12775cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x127760: 0x244201fe  addiu       $v0, $v0, 0x1FE
    ctx->pc = 0x127760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 510));
    // 0x127764: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x127764u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x127768: 0xfc870038  sd          $a3, 0x38($a0)
    ctx->pc = 0x127768u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 7));
    // 0x12776c: 0xfc890058  sd          $t1, 0x58($a0)
    ctx->pc = 0x12776cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 88), GPR_U64(ctx, 9));
    // 0x127770: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x127770u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x127774: 0xfc8a0068  sd          $t2, 0x68($a0)
    ctx->pc = 0x127774u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 104), GPR_U64(ctx, 10));
    // 0x127778: 0x44861800  mtc1        $a2, $f3
    ctx->pc = 0x127778u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x12777c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x12777cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x127780: 0xfc8b0070  sd          $t3, 0x70($a0)
    ctx->pc = 0x127780u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 112), GPR_U64(ctx, 11));
    // 0x127784: 0x843b8  dsll        $t0, $t0, 14
    ctx->pc = 0x127784u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 14);
    // 0x127788: 0xfc8c0088  sd          $t4, 0x88($a0)
    ctx->pc = 0x127788u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 136), GPR_U64(ctx, 12));
    // 0x12778c: 0x3c0a0320  lui         $t2, 0x320
    ctx->pc = 0x12778cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)800 << 16));
    // 0x127790: 0xfc8d0098  sd          $t5, 0x98($a0)
    ctx->pc = 0x127790u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 152), GPR_U64(ctx, 13));
    // 0x127794: 0x26203  sra         $t4, $v0, 8
    ctx->pc = 0x127794u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 2), 8));
    // 0x127798: 0xfc8e00a8  sd          $t6, 0xA8($a0)
    ctx->pc = 0x127798u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 168), GPR_U64(ctx, 14));
    // 0x12779c: 0x3c0b2800  lui         $t3, 0x2800
    ctx->pc = 0x12779cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)10240 << 16));
    // 0x1277a0: 0xfc900078  sd          $s0, 0x78($a0)
    ctx->pc = 0x1277a0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 120), GPR_U64(ctx, 16));
    // 0x1277a4: 0x3409a000  ori         $t1, $zero, 0xA000
    ctx->pc = 0x1277a4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x1277a8: 0x94cb8  dsll        $t1, $t1, 18
    ctx->pc = 0x1277a8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 18);
    // 0x1277ac: 0xfc800040  sd          $zero, 0x40($a0)
    ctx->pc = 0x1277acu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 64), GPR_U64(ctx, 0));
    // 0x1277b0: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x1277b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1277b4: 0x52cf8  dsll        $a1, $a1, 19
    ctx->pc = 0x1277b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 19);
    // 0x1277b8: 0xfc800060  sd          $zero, 0x60($a0)
    ctx->pc = 0x1277b8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 96), GPR_U64(ctx, 0));
    // 0x1277bc: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x1277bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1277c0: 0x63538  dsll        $a2, $a2, 20
    ctx->pc = 0x1277c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 20);
    // 0x1277c4: 0xfc800080  sd          $zero, 0x80($a0)
    ctx->pc = 0x1277c4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 128), GPR_U64(ctx, 0));
    // 0x1277c8: 0x3c07418b  lui         $a3, 0x418B
    ctx->pc = 0x1277c8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16779 << 16));
    // 0x1277cc: 0xfc800090  sd          $zero, 0x90($a0)
    ctx->pc = 0x1277ccu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 144), GPR_U64(ctx, 0));
    // 0x1277d0: 0x34e74000  ori         $a3, $a3, 0x4000
    ctx->pc = 0x1277d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16384);
    // 0x1277d4: 0xfc8000a0  sd          $zero, 0xA0($a0)
    ctx->pc = 0x1277d4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 160), GPR_U64(ctx, 0));
    // 0x1277d8: 0xc640036c  lwc1        $f0, 0x36C($s2)
    ctx->pc = 0x1277d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1277dc: 0x8e62f1a0  lw          $v0, -0xE60($s3)
    ctx->pc = 0x1277dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294963616)));
    // 0x1277e0: 0xc6410368  lwc1        $f1, 0x368($s2)
    ctx->pc = 0x1277e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1277e4: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x1277e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1277e8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1277e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1277ec: 0xac8c00c0  sw          $t4, 0xC0($a0)
    ctx->pc = 0x1277ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 12));
    // 0x1277f0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1277f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1277f4: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x1277f4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1277f8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1277f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1277fc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1277fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x127800: 0x440e0800  mfc1        $t6, $f1
    ctx->pc = 0x127800u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
    // 0x127804: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x127804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x127808: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x127808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x12780c: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12780cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x127810: 0x440d0000  mfc1        $t5, $f0
    ctx->pc = 0x127810u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 13, bits); }
    // 0x127814: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x127814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x127818: 0x248300c0  addiu       $v1, $a0, 0xC0
    ctx->pc = 0x127818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    // 0x12781c: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x12781cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x127820: 0x248800d0  addiu       $t0, $a0, 0xD0
    ctx->pc = 0x127820u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
    // 0x127824: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x127824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x127828: 0x25e90080  addiu       $t1, $t7, 0x80
    ctx->pc = 0x127828u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 15), 128));
    // 0x12782c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x12782cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x127830: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x127830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x127834: 0x24065353  addiu       $a2, $zero, 0x5353
    ctx->pc = 0x127834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21331));
    // 0x127838: 0xfc8200b0  sd          $v0, 0xB0($a0)
    ctx->pc = 0x127838u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 176), GPR_U64(ctx, 2));
    // 0x12783c: 0xfc8500b8  sd          $a1, 0xB8($a0)
    ctx->pc = 0x12783cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 184), GPR_U64(ctx, 5));
    // 0x127840: 0xac670004  sw          $a3, 0x4($v1)
    ctx->pc = 0x127840u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 7));
    // 0x127844: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x127844u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
    // 0x127848: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x127848u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x12784c: 0x19800025  blez        $t4, . + 4 + (0x25 << 2)
    ctx->pc = 0x12784Cu;
    {
        const bool branch_taken_0x12784c = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x127850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12784Cu;
            // 0x127850: 0xae28f168  sw          $t0, -0xE98($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294963560), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12784c) {
            ctx->pc = 0x1278E4u;
            goto label_1278e4;
        }
    }
    ctx->pc = 0x127854u;
    // 0x127854: 0x180502d  daddu       $t2, $t4, $zero
    ctx->pc = 0x127854u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_127858:
    // 0x127858: 0x8e22f168  lw          $v0, -0xE98($s1)
    ctx->pc = 0x127858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x12785c: 0x25e30008  addiu       $v1, $t7, 0x8
    ctx->pc = 0x12785cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x127860: 0x25a40008  addiu       $a0, $t5, 0x8
    ctx->pc = 0x127860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
    // 0x127864: 0x25270008  addiu       $a3, $t1, 0x8
    ctx->pc = 0x127864u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x127868: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x127868u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x12786c: 0x25280080  addiu       $t0, $t1, 0x80
    ctx->pc = 0x12786cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 128));
    // 0x127870: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x127870u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x127874: 0x25290100  addiu       $t1, $t1, 0x100
    ctx->pc = 0x127874u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 256));
    // 0x127878: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x127878u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x12787c: 0x309182a  slt         $v1, $t8, $t1
    ctx->pc = 0x12787cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 24) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x127880: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x127880u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x127884: 0x25e50080  addiu       $a1, $t7, 0x80
    ctx->pc = 0x127884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 15), 128));
    // 0x127888: 0x303480b  movn        $t1, $t8, $v1
    ctx->pc = 0x127888u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 24));
    // 0x12788c: 0x25c60008  addiu       $a2, $t6, 0x8
    ctx->pc = 0x12788cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 14), 8));
    // 0x127890: 0x8e22f168  lw          $v0, -0xE98($s1)
    ctx->pc = 0x127890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x127894: 0x25ef0100  addiu       $t7, $t7, 0x100
    ctx->pc = 0x127894u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 256));
    // 0x127898: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x127898u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x12789c: 0xac450010  sw          $a1, 0x10($v0)
    ctx->pc = 0x12789cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 5));
    // 0x1278a0: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x1278a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1278a4: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1278a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1278a8: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x1278a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1278ac: 0xac6d0004  sw          $t5, 0x4($v1)
    ctx->pc = 0x1278acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 13));
    // 0x1278b0: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x1278b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1278b4: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1278b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1278b8: 0xac470020  sw          $a3, 0x20($v0)
    ctx->pc = 0x1278b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 7));
    // 0x1278bc: 0x24430030  addiu       $v1, $v0, 0x30
    ctx->pc = 0x1278bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1278c0: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x1278c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x1278c4: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1278c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1278c8: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1278c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1278cc: 0xac480030  sw          $t0, 0x30($v0)
    ctx->pc = 0x1278ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 8));
    // 0x1278d0: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1278d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1278d4: 0xae25f168  sw          $a1, -0xE98($s1)
    ctx->pc = 0x1278d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294963560), GPR_U32(ctx, 5));
    // 0x1278d8: 0xac6e0004  sw          $t6, 0x4($v1)
    ctx->pc = 0x1278d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 14));
    // 0x1278dc: 0x1540ffde  bnez        $t2, . + 4 + (-0x22 << 2)
    ctx->pc = 0x1278DCu;
    {
        const bool branch_taken_0x1278dc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1278E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1278DCu;
            // 0x1278e0: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1278dc) {
            ctx->pc = 0x127858u;
            runtime->cooperativeGuestYield();
            goto label_127858;
        }
    }
    ctx->pc = 0x1278E4u;
label_1278e4:
    // 0x1278e4: 0xc049d5e  jal         func_127578
    ctx->pc = 0x1278E4u;
    SET_GPR_U32(ctx, 31, 0x1278ECu);
    ctx->pc = 0x127578u;
    if (runtime->hasFunction(0x127578u)) {
        auto targetFn = runtime->lookupFunction(0x127578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1278ECu; }
        if (ctx->pc != 0x1278ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127578_0x127578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1278ECu; }
        if (ctx->pc != 0x1278ECu) { return; }
    }
    ctx->pc = 0x1278ECu;
    // 0x1278ec: 0xc04fe92  jal         func_13FA48
    ctx->pc = 0x1278ECu;
    SET_GPR_U32(ctx, 31, 0x1278F4u);
    ctx->pc = 0x13FA48u;
    if (runtime->hasFunction(0x13FA48u)) {
        auto targetFn = runtime->lookupFunction(0x13FA48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1278F4u; }
        if (ctx->pc != 0x1278F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa48_0x13fa78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1278F4u; }
        if (ctx->pc != 0x1278F4u) { return; }
    }
    ctx->pc = 0x1278F4u;
    // 0x1278f4: 0xc04fd78  jal         func_13F5E0
    ctx->pc = 0x1278F4u;
    SET_GPR_U32(ctx, 31, 0x1278FCu);
    ctx->pc = 0x13F5E0u;
    if (runtime->hasFunction(0x13F5E0u)) {
        auto targetFn = runtime->lookupFunction(0x13F5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1278FCu; }
        if (ctx->pc != 0x1278FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f5e0_0x13f648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1278FCu; }
        if (ctx->pc != 0x1278FCu) { return; }
    }
    ctx->pc = 0x1278FCu;
    // 0x1278fc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1278fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x127900: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x127900u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x127904: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x127904u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x127908: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x127908u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12790c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12790cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127910: 0x3e00008  jr          $ra
    ctx->pc = 0x127910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127910u;
            // 0x127914: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x127858u: goto label_127858;
            case 0x1278E4u: goto label_1278e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x127918u;
}
