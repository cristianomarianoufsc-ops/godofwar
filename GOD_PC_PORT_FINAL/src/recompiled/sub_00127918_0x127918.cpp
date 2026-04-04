#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00127918
// Address: 0x127918 - 0x127ff0
void sub_00127918_0x127918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127918_0x127918");
#endif

    ctx->pc = 0x127918u;

    // 0x127918: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x127918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x12791c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x12791cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127920: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x127920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x127924: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x127924u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x127928: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x127928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x12792c: 0x3c120030  lui         $s2, 0x30
    ctx->pc = 0x12792cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)48 << 16));
    // 0x127930: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x127930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x127934: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x127934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x127938: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x127938u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x12793c: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x12793cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x127940: 0x2653dd58  addiu       $s3, $s2, -0x22A8
    ctx->pc = 0x127940u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 4294958424));
    // 0x127944: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x127944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x127948: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x127948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x12794c: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x12794cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x127950: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x127950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x127954: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x127954u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127958: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x127958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12795c: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x12795cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127960: 0x8e42dd58  lw          $v0, -0x22A8($s2)
    ctx->pc = 0x127960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294958424)));
    // 0x127964: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x127964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x127968: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x127968u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x12796c: 0xc523036c  lwc1        $f3, 0x36C($t1)
    ctx->pc = 0x12796cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x127970: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x127970u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x127974: 0xc5210370  lwc1        $f1, 0x370($t1)
    ctx->pc = 0x127974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x127978: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x127978u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12797c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x12797cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x127980: 0xc5250368  lwc1        $f5, 0x368($t1)
    ctx->pc = 0x127980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x127984: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x127984u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x127988: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x127988u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x12798c: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x12798cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x127990: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x127990u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x127994: 0xc5240374  lwc1        $f4, 0x374($t1)
    ctx->pc = 0x127994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x127998: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x127998u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x12799c: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x12799cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x1279a0: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x1279a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x1279a4: 0x46001924  .word       0x46001924                   # cvt.w.s     $f4, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1279a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x1279a8: 0x44162000  mfc1        $s6, $f4
    ctx->pc = 0x1279a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
    // 0x1279ac: 0x460008e4  .word       0x460008E4                   # cvt.w.s     $f3, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1279acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x1279b0: 0x44141800  mfc1        $s4, $f3
    ctx->pc = 0x1279b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 20, bits); }
    // 0x1279b4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1279b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1279b8: 0x44150800  mfc1        $s5, $f1
    ctx->pc = 0x1279b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x1279bc: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1279bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1279c0: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x1279c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x1279c4: 0xc04fd50  jal         func_13F540
    ctx->pc = 0x1279C4u;
    SET_GPR_U32(ctx, 31, 0x1279CCu);
    ctx->pc = 0x1279C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1279C4u;
            // 0x1279c8: 0xafa60010  sw          $a2, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F540u;
    if (runtime->hasFunction(0x13F540u)) {
        auto targetFn = runtime->lookupFunction(0x13F540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1279CCu; }
        if (ctx->pc != 0x1279CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_0013f540_0x13f540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1279CCu; }
        if (ctx->pc != 0x1279CCu) { return; }
    }
    ctx->pc = 0x1279CCu;
    // 0x1279cc: 0x8e22f168  lw          $v0, -0xE98($s1)
    ctx->pc = 0x1279ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x1279d0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1279d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1279d4: 0x8e22f168  lw          $v0, -0xE98($s1)
    ctx->pc = 0x1279d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x1279d8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1279d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1279dc: 0xc04fe88  jal         func_13FA20
    ctx->pc = 0x1279DCu;
    SET_GPR_U32(ctx, 31, 0x1279E4u);
    ctx->pc = 0x1279E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1279DCu;
            // 0x1279e0: 0xae22f168  sw          $v0, -0xE98($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294963560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA20u;
    if (runtime->hasFunction(0x13FA20u)) {
        auto targetFn = runtime->lookupFunction(0x13FA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1279E4u; }
        if (ctx->pc != 0x1279E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa20_0x13fa48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1279E4u; }
        if (ctx->pc != 0x1279E4u) { return; }
    }
    ctx->pc = 0x1279E4u;
    // 0x1279e4: 0x8e23f168  lw          $v1, -0xE98($s1)
    ctx->pc = 0x1279e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x1279e8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1279e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1279ec: 0x2148023  subu        $s0, $s0, $s4
    ctx->pc = 0x1279ecu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x1279f0: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x1279f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1279f4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1279f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1279f8: 0x260503ff  addiu       $a1, $s0, 0x3FF
    ctx->pc = 0x1279f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1023));
    // 0x1279fc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1279fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x127a00: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x127a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x127a04: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x127a04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
    // 0x127a08: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x127a08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x127a0c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x127a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x127a10: 0x261007fe  addiu       $s0, $s0, 0x7FE
    ctx->pc = 0x127a10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2046));
    // 0x127a14: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x127a14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x127a18: 0xa2800b  movn        $s0, $a1, $v0
    ctx->pc = 0x127a18u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 5));
    // 0x127a1c: 0x24070019  addiu       $a3, $zero, 0x19
    ctx->pc = 0x127a1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x127a20: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x127a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x127a24: 0x8e44dd58  lw          $a0, -0x22A8($s2)
    ctx->pc = 0x127a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294958424)));
    // 0x127a28: 0x24060041  addiu       $a2, $zero, 0x41
    ctx->pc = 0x127a28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x127a2c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x127a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x127a30: 0x108283  sra         $s0, $s0, 10
    ctx->pc = 0x127a30u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 10));
    // 0x127a34: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x127a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x127a38: 0x8e23f168  lw          $v1, -0xE98($s1)
    ctx->pc = 0x127a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x127a3c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x127a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x127a40: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x127a40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x127a44: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x127a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x127a48: 0x4243a  dsrl        $a0, $a0, 16
    ctx->pc = 0x127a48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 16);
    // 0x127a4c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x127a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x127a50: 0x246c0050  addiu       $t4, $v1, 0x50
    ctx->pc = 0x127a50u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x127a54: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x127a54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x127a58: 0xae2cf168  sw          $t4, -0xE98($s1)
    ctx->pc = 0x127a58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294963560), GPR_U32(ctx, 12));
    // 0x127a5c: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x127a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x127a60: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x127a60u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127a64: 0xfc670018  sd          $a3, 0x18($v1)
    ctx->pc = 0x127a64u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 7));
    // 0x127a68: 0xfc620028  sd          $v0, 0x28($v1)
    ctx->pc = 0x127a68u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 40), GPR_U64(ctx, 2));
    // 0x127a6c: 0xfc650038  sd          $a1, 0x38($v1)
    ctx->pc = 0x127a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 56), GPR_U64(ctx, 5));
    // 0x127a70: 0xfc640040  sd          $a0, 0x40($v1)
    ctx->pc = 0x127a70u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 64), GPR_U64(ctx, 4));
    // 0x127a74: 0xfc660048  sd          $a2, 0x48($v1)
    ctx->pc = 0x127a74u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 72), GPR_U64(ctx, 6));
    // 0x127a78: 0xfc600010  sd          $zero, 0x10($v1)
    ctx->pc = 0x127a78u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 0));
    // 0x127a7c: 0xfc600020  sd          $zero, 0x20($v1)
    ctx->pc = 0x127a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 32), GPR_U64(ctx, 0));
    // 0x127a80: 0x1a000149  blez        $s0, . + 4 + (0x149 << 2)
    ctx->pc = 0x127A80u;
    {
        const bool branch_taken_0x127a80 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x127A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127A80u;
            // 0x127a84: 0xfc600030  sd          $zero, 0x30($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127a80) {
            ctx->pc = 0x127FA8u;
            goto label_127fa8;
        }
    }
    ctx->pc = 0x127A88u;
label_127a88:
    // 0x127a88: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x127a88u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x127a8c: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x127a8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x127a90: 0x8e22f168  lw          $v0, -0xE98($s1)
    ctx->pc = 0x127a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x127a94: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x127a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x127a98: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x127a98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x127a9c: 0x17683c  dsll32      $t5, $s7, 0
    ctx->pc = 0x127a9cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 23) << (32 + 0));
    // 0x127aa0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x127aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x127aa4: 0xd203e  dsrl32      $a0, $t5, 0
    ctx->pc = 0x127aa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 13) >> (32 + 0));
    // 0x127aa8: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x127aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x127aac: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x127aacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x127ab0: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x127ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x127ab4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x127ab4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x127ab8: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x127ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x127abc: 0x2403004d  addiu       $v1, $zero, 0x4D
    ctx->pc = 0x127abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x127ac0: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x127ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x127ac4: 0x3c120033  lui         $s2, 0x33
    ctx->pc = 0x127ac4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
    // 0x127ac8: 0x8e26f168  lw          $a2, -0xE98($s1)
    ctx->pc = 0x127ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x127acc: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x127accu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x127ad0: 0x3c190033  lui         $t9, 0x33
    ctx->pc = 0x127ad0u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)51 << 16));
    // 0x127ad4: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x127ad4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x127ad8: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x127ad8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x127adc: 0xfcc40010  sd          $a0, 0x10($a2)
    ctx->pc = 0x127adcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
    // 0x127ae0: 0x24c20010  addiu       $v0, $a2, 0x10
    ctx->pc = 0x127ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x127ae4: 0xfcc30018  sd          $v1, 0x18($a2)
    ctx->pc = 0x127ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 3));
    // 0x127ae8: 0x2404004f  addiu       $a0, $zero, 0x4F
    ctx->pc = 0x127ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x127aec: 0xae22f168  sw          $v0, -0xE98($s1)
    ctx->pc = 0x127aecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294963560), GPR_U32(ctx, 2));
    // 0x127af0: 0x9e43f19c  lwu         $v1, -0xE64($s2)
    ctx->pc = 0x127af0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4294963612)));
    // 0x127af4: 0x9f22f1a0  lwu         $v0, -0xE60($t9)
    ctx->pc = 0x127af4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 25), 4294963616)));
    // 0x127af8: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x127af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x127afc: 0xfcc40028  sd          $a0, 0x28($a2)
    ctx->pc = 0x127afcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 40), GPR_U64(ctx, 4));
    // 0x127b00: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x127b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x127b04: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x127b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x127b08: 0xfcc20020  sd          $v0, 0x20($a2)
    ctx->pc = 0x127b08u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 32), GPR_U64(ctx, 2));
    // 0x127b0c: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x127b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x127b10: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x127b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x127b14: 0x24040046  addiu       $a0, $zero, 0x46
    ctx->pc = 0x127b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x127b18: 0xfcc20030  sd          $v0, 0x30($a2)
    ctx->pc = 0x127b18u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 48), GPR_U64(ctx, 2));
    // 0x127b1c: 0xfcc30038  sd          $v1, 0x38($a2)
    ctx->pc = 0x127b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 56), GPR_U64(ctx, 3));
    // 0x127b20: 0xfcc40048  sd          $a0, 0x48($a2)
    ctx->pc = 0x127b20u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 72), GPR_U64(ctx, 4));
    // 0x127b24: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x127b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x127b28: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x127b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x127b2c: 0x344200a2  ori         $v0, $v0, 0xA2
    ctx->pc = 0x127b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)162);
    // 0x127b30: 0x13c00005  beqz        $fp, . + 4 + (0x5 << 2)
    ctx->pc = 0x127B30u;
    {
        const bool branch_taken_0x127b30 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x127B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127B30u;
            // 0x127b34: 0xfcc00040  sd          $zero, 0x40($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 64), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127b30) {
            ctx->pc = 0x127B48u;
            goto label_127b48;
        }
    }
    ctx->pc = 0x127B38u;
    // 0x127b38: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x127b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x127b3c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x127b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x127b40: 0x344200a8  ori         $v0, $v0, 0xA8
    ctx->pc = 0x127b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)168);
    // 0x127b44: 0x0  nop
    ctx->pc = 0x127b44u;
    // NOP
label_127b48:
    // 0x127b48: 0x24030043  addiu       $v1, $zero, 0x43
    ctx->pc = 0x127b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x127b4c: 0xfcc20050  sd          $v0, 0x50($a2)
    ctx->pc = 0x127b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 80), GPR_U64(ctx, 2));
    // 0x127b50: 0x24cc0060  addiu       $t4, $a2, 0x60
    ctx->pc = 0x127b50u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
    // 0x127b54: 0xfcc30058  sd          $v1, 0x58($a2)
    ctx->pc = 0x127b54u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 88), GPR_U64(ctx, 3));
    // 0x127b58: 0xfd800000  sd          $zero, 0x0($t4)
    ctx->pc = 0x127b58u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 0));
    // 0x127b5c: 0x3c130030  lui         $s3, 0x30
    ctx->pc = 0x127b5cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)48 << 16));
    // 0x127b60: 0x8e63dd58  lw          $v1, -0x22A8($s3)
    ctx->pc = 0x127b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294958424)));
    // 0x127b64: 0x258c0008  addiu       $t4, $t4, 0x8
    ctx->pc = 0x127b64u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
    // 0x127b68: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x127b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127b6c: 0x24055353  addiu       $a1, $zero, 0x5353
    ctx->pc = 0x127b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21331));
    // 0x127b70: 0x31982  srl         $v1, $v1, 6
    ctx->pc = 0x127b70u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
    // 0x127b74: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x127b74u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127b78: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x127b78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x127b7c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x127b7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x127b80: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x127b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x127b84: 0x31cba  dsrl        $v1, $v1, 18
    ctx->pc = 0x127b84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 18);
    // 0x127b88: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x127b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x127b8c: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x127b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x127b90: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x127b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x127b94: 0xfd840000  sd          $a0, 0x0($t4)
    ctx->pc = 0x127b94u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 4));
    // 0x127b98: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x127b98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x127b9c: 0x258c0008  addiu       $t4, $t4, 0x8
    ctx->pc = 0x127b9cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
    // 0x127ba0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x127ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x127ba4: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x127ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x127ba8: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x127ba8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x127bac: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x127bacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x127bb0: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x127bb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x127bb4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x127bb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x127bb8: 0x3c032800  lui         $v1, 0x2800
    ctx->pc = 0x127bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10240 << 16));
    // 0x127bbc: 0xfd840000  sd          $a0, 0x0($t4)
    ctx->pc = 0x127bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 4));
    // 0x127bc0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x127bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x127bc4: 0x258c0008  addiu       $t4, $t4, 0x8
    ctx->pc = 0x127bc4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
    // 0x127bc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x127bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127bcc: 0x3404a000  ori         $a0, $zero, 0xA000
    ctx->pc = 0x127bccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x127bd0: 0x424b8  dsll        $a0, $a0, 18
    ctx->pc = 0x127bd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 18);
    // 0x127bd4: 0xfd830000  sd          $v1, 0x0($t4)
    ctx->pc = 0x127bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 3));
    // 0x127bd8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x127bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x127bdc: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x127bdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x127be0: 0x31d38  dsll        $v1, $v1, 20
    ctx->pc = 0x127be0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 20);
    // 0x127be4: 0x258c0008  addiu       $t4, $t4, 0x8
    ctx->pc = 0x127be4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
    // 0x127be8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x127be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x127bec: 0x240a0200  addiu       $t2, $zero, 0x200
    ctx->pc = 0x127becu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x127bf0: 0xfd820000  sd          $v0, 0x0($t4)
    ctx->pc = 0x127bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 2));
    // 0x127bf4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x127bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x127bf8: 0x258c0008  addiu       $t4, $t4, 0x8
    ctx->pc = 0x127bf8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
    // 0x127bfc: 0x3c0241ab  lui         $v0, 0x41AB
    ctx->pc = 0x127bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16811 << 16));
    // 0x127c00: 0xfd830000  sd          $v1, 0x0($t4)
    ctx->pc = 0x127c00u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 3));
    // 0x127c04: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x127c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x127c08: 0x258c0008  addiu       $t4, $t4, 0x8
    ctx->pc = 0x127c08u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
    // 0x127c0c: 0x34038002  ori         $v1, $zero, 0x8002
    ctx->pc = 0x127c0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
    // 0x127c10: 0x25840010  addiu       $a0, $t4, 0x10
    ctx->pc = 0x127c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x127c14: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x127c14u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x127c18: 0xad820004  sw          $v0, 0x4($t4)
    ctx->pc = 0x127c18u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 2));
    // 0x127c1c: 0x26890208  addiu       $t1, $s4, 0x208
    ctx->pc = 0x127c1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 20), 520));
    // 0x127c20: 0xad850008  sw          $a1, 0x8($t4)
    ctx->pc = 0x127c20u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 5));
    // 0x127c24: 0x26880008  addiu       $t0, $s4, 0x8
    ctx->pc = 0x127c24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x127c28: 0xae24f168  sw          $a0, -0xE98($s1)
    ctx->pc = 0x127c28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294963560), GPR_U32(ctx, 4));
    // 0x127c2c: 0xad80000c  sw          $zero, 0xC($t4)
    ctx->pc = 0x127c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 0));
label_127c30:
    // 0x127c30: 0x8e22f168  lw          $v0, -0xE98($s1)
    ctx->pc = 0x127c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x127c34: 0x26a30008  addiu       $v1, $s5, 0x8
    ctx->pc = 0x127c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x127c38: 0xe2100  sll         $a0, $t6, 4
    ctx->pc = 0x127c38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
    // 0x127c3c: 0x26c50008  addiu       $a1, $s6, 0x8
    ctx->pc = 0x127c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x127c40: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x127c40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x127c44: 0x25ce0020  addiu       $t6, $t6, 0x20
    ctx->pc = 0x127c44u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 32));
    // 0x127c48: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x127c48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x127c4c: 0x29c60040  slti        $a2, $t6, 0x40
    ctx->pc = 0x127c4cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x127c50: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x127c50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x127c54: 0x25080200  addiu       $t0, $t0, 0x200
    ctx->pc = 0x127c54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 512));
    // 0x127c58: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x127c58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x127c5c: 0x8e2bf168  lw          $t3, -0xE98($s1)
    ctx->pc = 0x127c5cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x127c60: 0xad640010  sw          $a0, 0x10($t3)
    ctx->pc = 0x127c60u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 4));
    // 0x127c64: 0x25620010  addiu       $v0, $t3, 0x10
    ctx->pc = 0x127c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x127c68: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x127c68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x127c6c: 0x25630020  addiu       $v1, $t3, 0x20
    ctx->pc = 0x127c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
    // 0x127c70: 0xac550004  sw          $s5, 0x4($v0)
    ctx->pc = 0x127c70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 21));
    // 0x127c74: 0x25640030  addiu       $a0, $t3, 0x30
    ctx->pc = 0x127c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 48));
    // 0x127c78: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x127c78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x127c7c: 0x25670040  addiu       $a3, $t3, 0x40
    ctx->pc = 0x127c7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 64));
    // 0x127c80: 0xad690020  sw          $t1, 0x20($t3)
    ctx->pc = 0x127c80u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 32), GPR_U32(ctx, 9));
    // 0x127c84: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x127c84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x127c88: 0x25290200  addiu       $t1, $t1, 0x200
    ctx->pc = 0x127c88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 512));
    // 0x127c8c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x127c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x127c90: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x127c90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x127c94: 0xad6a0030  sw          $t2, 0x30($t3)
    ctx->pc = 0x127c94u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 48), GPR_U32(ctx, 10));
    // 0x127c98: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x127c98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x127c9c: 0x254a0200  addiu       $t2, $t2, 0x200
    ctx->pc = 0x127c9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 512));
    // 0x127ca0: 0xac960004  sw          $s6, 0x4($a0)
    ctx->pc = 0x127ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 22));
    // 0x127ca4: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x127ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x127ca8: 0x14c0ffe1  bnez        $a2, . + 4 + (-0x1F << 2)
    ctx->pc = 0x127CA8u;
    {
        const bool branch_taken_0x127ca8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x127CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127CA8u;
            // 0x127cac: 0xae27f168  sw          $a3, -0xE98($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294963560), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127ca8) {
            ctx->pc = 0x127C30u;
            runtime->cooperativeGuestYield();
            goto label_127c30;
        }
    }
    ctx->pc = 0x127CB0u;
    // 0x127cb0: 0xd283e  dsrl32      $a1, $t5, 0
    ctx->pc = 0x127cb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 13) >> (32 + 0));
    // 0x127cb4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x127cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x127cb8: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x127cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x127cbc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x127cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x127cc0: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x127cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x127cc4: 0xad630040  sw          $v1, 0x40($t3)
    ctx->pc = 0x127cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 64), GPR_U32(ctx, 3));
    // 0x127cc8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x127cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x127ccc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x127cccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x127cd0: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x127cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x127cd4: 0x2406004d  addiu       $a2, $zero, 0x4D
    ctx->pc = 0x127cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x127cd8: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x127cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x127cdc: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x127cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
    // 0x127ce0: 0x2403004f  addiu       $v1, $zero, 0x4F
    ctx->pc = 0x127ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x127ce4: 0xfce20010  sd          $v0, 0x10($a3)
    ctx->pc = 0x127ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 16), GPR_U64(ctx, 2));
    // 0x127ce8: 0xfce60018  sd          $a2, 0x18($a3)
    ctx->pc = 0x127ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 24), GPR_U64(ctx, 6));
    // 0x127cec: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x127cecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x127cf0: 0x9e42f19c  lwu         $v0, -0xE64($s2)
    ctx->pc = 0x127cf0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4294963612)));
    // 0x127cf4: 0xfce30028  sd          $v1, 0x28($a3)
    ctx->pc = 0x127cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 40), GPR_U64(ctx, 3));
    // 0x127cf8: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x127cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x127cfc: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x127cfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x127d00: 0xfce50020  sd          $a1, 0x20($a3)
    ctx->pc = 0x127d00u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 32), GPR_U64(ctx, 5));
    // 0x127d04: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x127d04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127d08: 0x34028002  ori         $v0, $zero, 0x8002
    ctx->pc = 0x127d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
    // 0x127d0c: 0x3c032123  lui         $v1, 0x2123
    ctx->pc = 0x127d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8483 << 16));
    // 0x127d10: 0xad6200a0  sw          $v0, 0xA0($t3)
    ctx->pc = 0x127d10u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 160), GPR_U32(ctx, 2));
    // 0x127d14: 0x256c00a0  addiu       $t4, $t3, 0xA0
    ctx->pc = 0x127d14u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), 160));
    // 0x127d18: 0x256a00b0  addiu       $t2, $t3, 0xB0
    ctx->pc = 0x127d18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), 176));
    // 0x127d1c: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x127d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x127d20: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x127d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x127d24: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x127d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x127d28: 0x24060043  addiu       $a2, $zero, 0x43
    ctx->pc = 0x127d28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x127d2c: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x127d2cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x127d30: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x127d30u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x127d34: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x127d34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x127d38: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x127d38u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x127d3c: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x127d3cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x127d40: 0x24080055  addiu       $t0, $zero, 0x55
    ctx->pc = 0x127d40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x127d44: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x127d44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x127d48: 0xfd620070  sd          $v0, 0x70($t3)
    ctx->pc = 0x127d48u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 112), GPR_U64(ctx, 2));
    // 0x127d4c: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x127d4cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127d50: 0xfd640078  sd          $a0, 0x78($t3)
    ctx->pc = 0x127d50u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 120), GPR_U64(ctx, 4));
    // 0x127d54: 0x240f0200  addiu       $t7, $zero, 0x200
    ctx->pc = 0x127d54u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x127d58: 0xfd650080  sd          $a1, 0x80($t3)
    ctx->pc = 0x127d58u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 128), GPR_U64(ctx, 5));
    // 0x127d5c: 0xfd660088  sd          $a2, 0x88($t3)
    ctx->pc = 0x127d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 11), 136), GPR_U64(ctx, 6));
    // 0x127d60: 0xfd670090  sd          $a3, 0x90($t3)
    ctx->pc = 0x127d60u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 144), GPR_U64(ctx, 7));
    // 0x127d64: 0xfd690098  sd          $t1, 0x98($t3)
    ctx->pc = 0x127d64u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 152), GPR_U64(ctx, 9));
    // 0x127d68: 0xad830004  sw          $v1, 0x4($t4)
    ctx->pc = 0x127d68u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 3));
    // 0x127d6c: 0xad880008  sw          $t0, 0x8($t4)
    ctx->pc = 0x127d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 8));
    // 0x127d70: 0xad80000c  sw          $zero, 0xC($t4)
    ctx->pc = 0x127d70u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 0));
    // 0x127d74: 0xae2af168  sw          $t2, -0xE98($s1)
    ctx->pc = 0x127d74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294963560), GPR_U32(ctx, 10));
label_127d78:
    // 0x127d78: 0x8e22f168  lw          $v0, -0xE98($s1)
    ctx->pc = 0x127d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x127d7c: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x127d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x127d80: 0xe1900  sll         $v1, $t6, 4
    ctx->pc = 0x127d80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
    // 0x127d84: 0x34847fff  ori         $a0, $a0, 0x7FFF
    ctx->pc = 0x127d84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32767);
    // 0x127d88: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x127d88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x127d8c: 0x25ce0020  addiu       $t6, $t6, 0x20
    ctx->pc = 0x127d8cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 32));
    // 0x127d90: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x127d90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x127d94: 0x29c30040  slti        $v1, $t6, 0x40
    ctx->pc = 0x127d94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x127d98: 0xac550004  sw          $s5, 0x4($v0)
    ctx->pc = 0x127d98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 21));
    // 0x127d9c: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x127d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x127da0: 0x8e2df168  lw          $t5, -0xE98($s1)
    ctx->pc = 0x127da0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x127da4: 0xadaf0010  sw          $t7, 0x10($t5)
    ctx->pc = 0x127da4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 16), GPR_U32(ctx, 15));
    // 0x127da8: 0x25a20010  addiu       $v0, $t5, 0x10
    ctx->pc = 0x127da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x127dac: 0x25a80020  addiu       $t0, $t5, 0x20
    ctx->pc = 0x127dacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 13), 32));
    // 0x127db0: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x127db0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x127db4: 0xae28f168  sw          $t0, -0xE98($s1)
    ctx->pc = 0x127db4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294963560), GPR_U32(ctx, 8));
    // 0x127db8: 0x25ef0200  addiu       $t7, $t7, 0x200
    ctx->pc = 0x127db8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 512));
    // 0x127dbc: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x127dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x127dc0: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x127DC0u;
    {
        const bool branch_taken_0x127dc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x127DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127DC0u;
            // 0x127dc4: 0xac560004  sw          $s6, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127dc0) {
            ctx->pc = 0x127D78u;
            runtime->cooperativeGuestYield();
            goto label_127d78;
        }
    }
    ctx->pc = 0x127DC8u;
    // 0x127dc8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x127dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x127dcc: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x127dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x127dd0: 0xada20020  sw          $v0, 0x20($t5)
    ctx->pc = 0x127dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 32), GPR_U32(ctx, 2));
    // 0x127dd4: 0x3c050200  lui         $a1, 0x200
    ctx->pc = 0x127dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
    // 0x127dd8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x127dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x127ddc: 0x3406fffc  ori         $a2, $zero, 0xFFFC
    ctx->pc = 0x127ddcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x127de0: 0x637b8  dsll        $a2, $a2, 30
    ctx->pc = 0x127de0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 30);
    // 0x127de4: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x127de4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    // 0x127de8: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x127de8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x127dec: 0x73c78  dsll        $a3, $a3, 17
    ctx->pc = 0x127decu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 17);
    // 0x127df0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x127df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x127df4: 0xad040008  sw          $a0, 0x8($t0)
    ctx->pc = 0x127df4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 4));
    // 0x127df8: 0xad00000c  sw          $zero, 0xC($t0)
    ctx->pc = 0x127df8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 0));
    // 0x127dfc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x127dfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x127e00: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x127e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x127e04: 0x2404004d  addiu       $a0, $zero, 0x4D
    ctx->pc = 0x127e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x127e08: 0x8e62dd58  lw          $v0, -0x22A8($s3)
    ctx->pc = 0x127e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294958424)));
    // 0x127e0c: 0xfd040018  sd          $a0, 0x18($t0)
    ctx->pc = 0x127e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 24), GPR_U64(ctx, 4));
    // 0x127e10: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x127e10u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x127e14: 0x2404004f  addiu       $a0, $zero, 0x4F
    ctx->pc = 0x127e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x127e18: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x127e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x127e1c: 0x2143a  dsrl        $v0, $v0, 16
    ctx->pc = 0x127e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
    // 0x127e20: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x127e20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x127e24: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x127e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x127e28: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x127e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x127e2c: 0xfd030010  sd          $v1, 0x10($t0)
    ctx->pc = 0x127e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 16), GPR_U64(ctx, 3));
    // 0x127e30: 0x9e43f19c  lwu         $v1, -0xE64($s2)
    ctx->pc = 0x127e30u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4294963612)));
    // 0x127e34: 0x9f22f1a0  lwu         $v0, -0xE60($t9)
    ctx->pc = 0x127e34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 25), 4294963616)));
    // 0x127e38: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x127e38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x127e3c: 0xfd040028  sd          $a0, 0x28($t0)
    ctx->pc = 0x127e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 40), GPR_U64(ctx, 4));
    // 0x127e40: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x127e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x127e44: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x127e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x127e48: 0xfd020020  sd          $v0, 0x20($t0)
    ctx->pc = 0x127e48u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 32), GPR_U64(ctx, 2));
    // 0x127e4c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x127e4cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127e50: 0x171140  sll         $v0, $s7, 5
    ctx->pc = 0x127e50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 5));
    // 0x127e54: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x127e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x127e58: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x127e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x127e5c: 0x3c040320  lui         $a0, 0x320
    ctx->pc = 0x127e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)800 << 16));
    // 0x127e60: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x127e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x127e64: 0x3c051800  lui         $a1, 0x1800
    ctx->pc = 0x127e64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)6144 << 16));
    // 0x127e68: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x127e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x127e6c: 0x25ac0090  addiu       $t4, $t5, 0x90
    ctx->pc = 0x127e6cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), 144));
    // 0x127e70: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x127e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x127e74: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x127e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x127e78: 0x31cb8  dsll        $v1, $v1, 18
    ctx->pc = 0x127e78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 18);
    // 0x127e7c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x127e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x127e80: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x127e80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x127e84: 0x424f8  dsll        $a0, $a0, 19
    ctx->pc = 0x127e84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 19);
    // 0x127e88: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x127e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x127e8c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x127e8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x127e90: 0x52d38  dsll        $a1, $a1, 20
    ctx->pc = 0x127e90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 20);
    // 0x127e94: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x127e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x127e98: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x127e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x127e9c: 0xada30090  sw          $v1, 0x90($t5)
    ctx->pc = 0x127e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 144), GPR_U32(ctx, 3));
    // 0x127ea0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x127ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x127ea4: 0x3c04418b  lui         $a0, 0x418B
    ctx->pc = 0x127ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16779 << 16));
    // 0x127ea8: 0x25aa00a0  addiu       $t2, $t5, 0xA0
    ctx->pc = 0x127ea8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 13), 160));
    // 0x127eac: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x127eacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x127eb0: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x127eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x127eb4: 0x24060046  addiu       $a2, $zero, 0x46
    ctx->pc = 0x127eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x127eb8: 0x2407003f  addiu       $a3, $zero, 0x3F
    ctx->pc = 0x127eb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x127ebc: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x127ebcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x127ec0: 0x24095353  addiu       $t1, $zero, 0x5353
    ctx->pc = 0x127ec0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 21331));
    // 0x127ec4: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x127ec4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x127ec8: 0xfdab0060  sd          $t3, 0x60($t5)
    ctx->pc = 0x127ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 96), GPR_U64(ctx, 11));
    // 0x127ecc: 0xfda30050  sd          $v1, 0x50($t5)
    ctx->pc = 0x127eccu;
    WRITE64(ADD32(GPR_U32(ctx, 13), 80), GPR_U64(ctx, 3));
    // 0x127ed0: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x127ed0u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127ed4: 0xfda50058  sd          $a1, 0x58($t5)
    ctx->pc = 0x127ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 88), GPR_U64(ctx, 5));
    // 0x127ed8: 0x268f0100  addiu       $t7, $s4, 0x100
    ctx->pc = 0x127ed8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 20), 256));
    // 0x127edc: 0xfda60068  sd          $a2, 0x68($t5)
    ctx->pc = 0x127edcu;
    WRITE64(ADD32(GPR_U32(ctx, 13), 104), GPR_U64(ctx, 6));
    // 0x127ee0: 0x24130088  addiu       $s3, $zero, 0x88
    ctx->pc = 0x127ee0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x127ee4: 0xfda70078  sd          $a3, 0x78($t5)
    ctx->pc = 0x127ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 120), GPR_U64(ctx, 7));
    // 0x127ee8: 0x268b0080  addiu       $t3, $s4, 0x80
    ctx->pc = 0x127ee8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
    // 0x127eec: 0xfda20080  sd          $v0, 0x80($t5)
    ctx->pc = 0x127eecu;
    WRITE64(ADD32(GPR_U32(ctx, 13), 128), GPR_U64(ctx, 2));
    // 0x127ef0: 0x24120008  addiu       $s2, $zero, 0x8
    ctx->pc = 0x127ef0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x127ef4: 0xfda80088  sd          $t0, 0x88($t5)
    ctx->pc = 0x127ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 136), GPR_U64(ctx, 8));
    // 0x127ef8: 0xad840004  sw          $a0, 0x4($t4)
    ctx->pc = 0x127ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 4));
    // 0x127efc: 0xad890008  sw          $t1, 0x8($t4)
    ctx->pc = 0x127efcu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 9));
    // 0x127f00: 0xad80000c  sw          $zero, 0xC($t4)
    ctx->pc = 0x127f00u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 0));
    // 0x127f04: 0xae2af168  sw          $t2, -0xE98($s1)
    ctx->pc = 0x127f04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294963560), GPR_U32(ctx, 10));
    // 0x127f08: 0xfda00070  sd          $zero, 0x70($t5)
    ctx->pc = 0x127f08u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 112), GPR_U64(ctx, 0));
    // 0x127f0c: 0x0  nop
    ctx->pc = 0x127f0cu;
    // NOP
label_127f10:
    // 0x127f10: 0x8e22f168  lw          $v0, -0xE98($s1)
    ctx->pc = 0x127f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x127f14: 0x152040  sll         $a0, $s5, 1
    ctx->pc = 0x127f14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x127f18: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x127f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x127f1c: 0x163040  sll         $a2, $s6, 1
    ctx->pc = 0x127f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
    // 0x127f20: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x127f20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x127f24: 0x24c70008  addiu       $a3, $a2, 0x8
    ctx->pc = 0x127f24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x127f28: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x127f28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x127f2c: 0x25ce0010  addiu       $t6, $t6, 0x10
    ctx->pc = 0x127f2cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x127f30: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x127f30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x127f34: 0x29c80040  slti        $t0, $t6, 0x40
    ctx->pc = 0x127f34u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x127f38: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x127f38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x127f3c: 0x26520100  addiu       $s2, $s2, 0x100
    ctx->pc = 0x127f3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
    // 0x127f40: 0x8e22f168  lw          $v0, -0xE98($s1)
    ctx->pc = 0x127f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x127f44: 0xac4b0010  sw          $t3, 0x10($v0)
    ctx->pc = 0x127f44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 11));
    // 0x127f48: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x127f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x127f4c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x127f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x127f50: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x127f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x127f54: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x127f54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x127f58: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x127f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x127f5c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x127f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x127f60: 0x256b0100  addiu       $t3, $t3, 0x100
    ctx->pc = 0x127f60u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 256));
    // 0x127f64: 0xac530020  sw          $s3, 0x20($v0)
    ctx->pc = 0x127f64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 19));
    // 0x127f68: 0x24430030  addiu       $v1, $v0, 0x30
    ctx->pc = 0x127f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x127f6c: 0xac870004  sw          $a3, 0x4($a0)
    ctx->pc = 0x127f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
    // 0x127f70: 0x26730100  addiu       $s3, $s3, 0x100
    ctx->pc = 0x127f70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
    // 0x127f74: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x127f74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x127f78: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x127f78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x127f7c: 0xac4f0030  sw          $t7, 0x30($v0)
    ctx->pc = 0x127f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 15));
    // 0x127f80: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x127f80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x127f84: 0x25ef0100  addiu       $t7, $t7, 0x100
    ctx->pc = 0x127f84u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 256));
    // 0x127f88: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x127f88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x127f8c: 0xae25f168  sw          $a1, -0xE98($s1)
    ctx->pc = 0x127f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294963560), GPR_U32(ctx, 5));
    // 0x127f90: 0x1500ffdf  bnez        $t0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x127F90u;
    {
        const bool branch_taken_0x127f90 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x127F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127F90u;
            // 0x127f94: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127f90) {
            ctx->pc = 0x127F10u;
            runtime->cooperativeGuestYield();
            goto label_127f10;
        }
    }
    ctx->pc = 0x127F98u;
    // 0x127f98: 0x27180001  addiu       $t8, $t8, 0x1
    ctx->pc = 0x127f98u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
    // 0x127f9c: 0x310102a  slt         $v0, $t8, $s0
    ctx->pc = 0x127f9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 24) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x127fa0: 0x1440feb9  bnez        $v0, . + 4 + (-0x147 << 2)
    ctx->pc = 0x127FA0u;
    {
        const bool branch_taken_0x127fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x127FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127FA0u;
            // 0x127fa4: 0x26940400  addiu       $s4, $s4, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127fa0) {
            ctx->pc = 0x127A88u;
            runtime->cooperativeGuestYield();
            goto label_127a88;
        }
    }
    ctx->pc = 0x127FA8u;
label_127fa8:
    // 0x127fa8: 0xc049d5e  jal         func_127578
    ctx->pc = 0x127FA8u;
    SET_GPR_U32(ctx, 31, 0x127FB0u);
    ctx->pc = 0x127578u;
    if (runtime->hasFunction(0x127578u)) {
        auto targetFn = runtime->lookupFunction(0x127578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127FB0u; }
        if (ctx->pc != 0x127FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127578_0x127578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127FB0u; }
        if (ctx->pc != 0x127FB0u) { return; }
    }
    ctx->pc = 0x127FB0u;
    // 0x127fb0: 0xc04fe92  jal         func_13FA48
    ctx->pc = 0x127FB0u;
    SET_GPR_U32(ctx, 31, 0x127FB8u);
    ctx->pc = 0x13FA48u;
    if (runtime->hasFunction(0x13FA48u)) {
        auto targetFn = runtime->lookupFunction(0x13FA48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127FB8u; }
        if (ctx->pc != 0x127FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa48_0x13fa78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127FB8u; }
        if (ctx->pc != 0x127FB8u) { return; }
    }
    ctx->pc = 0x127FB8u;
    // 0x127fb8: 0xc04fd78  jal         func_13F5E0
    ctx->pc = 0x127FB8u;
    SET_GPR_U32(ctx, 31, 0x127FC0u);
    ctx->pc = 0x13F5E0u;
    if (runtime->hasFunction(0x13F5E0u)) {
        auto targetFn = runtime->lookupFunction(0x13F5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127FC0u; }
        if (ctx->pc != 0x127FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f5e0_0x13f648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127FC0u; }
        if (ctx->pc != 0x127FC0u) { return; }
    }
    ctx->pc = 0x127FC0u;
    // 0x127fc0: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x127fc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x127fc4: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x127fc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x127fc8: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x127fc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x127fcc: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x127fccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x127fd0: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x127fd0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x127fd4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x127fd4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x127fd8: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x127fd8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x127fdc: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x127fdcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x127fe0: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x127fe0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x127fe4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x127fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x127fe8: 0x3e00008  jr          $ra
    ctx->pc = 0x127FE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127FE8u;
            // 0x127fec: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x127A88u: goto label_127a88;
            case 0x127B48u: goto label_127b48;
            case 0x127C30u: goto label_127c30;
            case 0x127D78u: goto label_127d78;
            case 0x127F10u: goto label_127f10;
            case 0x127FA8u: goto label_127fa8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x127FF0u;
}
