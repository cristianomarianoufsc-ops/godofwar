#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00127FF0
// Address: 0x127ff0 - 0x129820
void sub_00127FF0_0x127ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127FF0_0x127ff0");
#endif

    ctx->pc = 0x127ff0u;

label_127ff0:
    // 0x127ff0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x127ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x127ff4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x127ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x127ff8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x127ff8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127ffc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x127ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x128000: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x128000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x128004: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x128004u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128008: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x128008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x12800c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12800cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128010: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x128010u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128014: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x128014u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x128018: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x128018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x12801c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12801cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x128020: 0xc04fd50  jal         func_13F540
    ctx->pc = 0x128020u;
    SET_GPR_U32(ctx, 31, 0x128028u);
    ctx->pc = 0x128024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128020u;
            // 0x128024: 0x3c120033  lui         $s2, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F540u;
    if (runtime->hasFunction(0x13F540u)) {
        auto targetFn = runtime->lookupFunction(0x13F540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128028u; }
        if (ctx->pc != 0x128028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_0013f540_0x13f540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128028u; }
        if (ctx->pc != 0x128028u) { return; }
    }
    ctx->pc = 0x128028u;
    // 0x128028: 0x8e42f168  lw          $v0, -0xE98($s2)
    ctx->pc = 0x128028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294963560)));
    // 0x12802c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x12802cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x128030: 0x8e42f168  lw          $v0, -0xE98($s2)
    ctx->pc = 0x128030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294963560)));
    // 0x128034: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x128034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x128038: 0xc04fe88  jal         func_13FA20
    ctx->pc = 0x128038u;
    SET_GPR_U32(ctx, 31, 0x128040u);
    ctx->pc = 0x12803Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128038u;
            // 0x12803c: 0xae42f168  sw          $v0, -0xE98($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294963560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA20u;
    if (runtime->hasFunction(0x13FA20u)) {
        auto targetFn = runtime->lookupFunction(0x13FA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128040u; }
        if (ctx->pc != 0x128040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa20_0x13fa48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128040u; }
        if (ctx->pc != 0x128040u) { return; }
    }
    ctx->pc = 0x128040u;
    // 0x128040: 0x8e42f168  lw          $v0, -0xE98($s2)
    ctx->pc = 0x128040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294963560)));
    // 0x128044: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x128044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x128048: 0x34038005  ori         $v1, $zero, 0x8005
    ctx->pc = 0x128048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32773);
    // 0x12804c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x12804cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x128050: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x128050u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x128054: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x128054u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x128058: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x128058u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x12805c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x12805cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x128060: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x128060u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x128064: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x128064u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x128068: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x128068u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x12806c: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x12806cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x128070: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x128070u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x128074: 0xb5a3c  dsll32      $t3, $t3, 8
    ctx->pc = 0x128074u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 8));
    // 0x128078: 0xb5a3a  dsrl        $t3, $t3, 8
    ctx->pc = 0x128078u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) >> 8);
    // 0x12807c: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x12807cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x128080: 0x8cc4dd58  lw          $a0, -0x22A8($a2)
    ctx->pc = 0x128080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294958424)));
    // 0x128084: 0x3c0a0033  lui         $t2, 0x33
    ctx->pc = 0x128084u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)51 << 16));
    // 0x128088: 0x9c63f1a8  lwu         $v1, -0xE58($v1)
    ctx->pc = 0x128088u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294963624)));
    // 0x12808c: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x12808cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
    // 0x128090: 0x41182  srl         $v0, $a0, 6
    ctx->pc = 0x128090u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
    // 0x128094: 0x8e49f168  lw          $t1, -0xE98($s2)
    ctx->pc = 0x128094u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294963560)));
    // 0x128098: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x128098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12809c: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x12809cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1280a0: 0x2143a  dsrl        $v0, $v0, 16
    ctx->pc = 0x1280a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
    // 0x1280a4: 0xfd250018  sd          $a1, 0x18($t1)
    ctx->pc = 0x1280a4u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 24), GPR_U64(ctx, 5));
    // 0x1280a8: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1280a8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1280ac: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x1280acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1280b0: 0x73c78  dsll        $a3, $a3, 17
    ctx->pc = 0x1280b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 17);
    // 0x1280b4: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1280b4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1280b8: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x1280b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1280bc: 0x20b8025  or          $s0, $s0, $t3
    ctx->pc = 0x1280bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 11));
    // 0x1280c0: 0xfd300010  sd          $s0, 0x10($t1)
    ctx->pc = 0x1280c0u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 16), GPR_U64(ctx, 16));
    // 0x1280c4: 0x9d43f19c  lwu         $v1, -0xE64($t2)
    ctx->pc = 0x1280c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 10), 4294963612)));
    // 0x1280c8: 0x9d02f1a0  lwu         $v0, -0xE60($t0)
    ctx->pc = 0x1280c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 4294963616)));
    // 0x1280cc: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1280ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1280d0: 0xfd250028  sd          $a1, 0x28($t1)
    ctx->pc = 0x1280d0u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 40), GPR_U64(ctx, 5));
    // 0x1280d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1280d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1280d8: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x1280d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x1280dc: 0xfd220020  sd          $v0, 0x20($t1)
    ctx->pc = 0x1280dcu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 32), GPR_U64(ctx, 2));
    // 0x1280e0: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x1280e0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1280e4: 0x24c6dd58  addiu       $a2, $a2, -0x22A8
    ctx->pc = 0x1280e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958424));
    // 0x1280e8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1280e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1280ec: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1280ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1280f0: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x1280f0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1280f4: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x1280f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1280f8: 0xc6600374  lwc1        $f0, 0x374($s3)
    ctx->pc = 0x1280f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1280fc: 0x11883c  dsll32      $s1, $s1, 0
    ctx->pc = 0x1280fcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
    // 0x128100: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x128100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x128104: 0xc663036c  lwc1        $f3, 0x36C($s3)
    ctx->pc = 0x128104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x128108: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x128108u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12810c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x12810cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x128110: 0xc6620370  lwc1        $f2, 0x370($s3)
    ctx->pc = 0x128110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x128114: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x128114u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x128118: 0xc6650368  lwc1        $f5, 0x368($s3)
    ctx->pc = 0x128118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x12811c: 0x3402fe00  ori         $v0, $zero, 0xFE00
    ctx->pc = 0x12811cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    // 0x128120: 0x213bc  dsll32      $v0, $v0, 14
    ctx->pc = 0x128120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 14));
    // 0x128124: 0x118a3a  dsrl        $s1, $s1, 8
    ctx->pc = 0x128124u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> 8);
    // 0x128128: 0x460308c2  mul.s       $f3, $f1, $f3
    ctx->pc = 0x128128u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x12812c: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x12812cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x128130: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x128130u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x128134: 0x25280060  addiu       $t0, $t1, 0x60
    ctx->pc = 0x128134u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 96));
    // 0x128138: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x128138u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x12813c: 0x3c0b0005  lui         $t3, 0x5
    ctx->pc = 0x12813cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)5 << 16));
    // 0x128140: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x128140u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x128144: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x128144u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x128148: 0x240a0048  addiu       $t2, $zero, 0x48
    ctx->pc = 0x128148u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x12814c: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12814cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x128150: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x128150u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x128154: 0x24030043  addiu       $v1, $zero, 0x43
    ctx->pc = 0x128154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x128158: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x128158u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x12815c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x12815cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x128160: 0xae48f168  sw          $t0, -0xE98($s2)
    ctx->pc = 0x128160u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294963560), GPR_U32(ctx, 8));
    // 0x128164: 0x46002024  .word       0x46002024                   # cvt.w.s     $f0, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x128164u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x128168: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x128168u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x12816c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x12816cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128170: 0x24020054  addiu       $v0, $zero, 0x54
    ctx->pc = 0x128170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x128174: 0xfd310050  sd          $s1, 0x50($t1)
    ctx->pc = 0x128174u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 80), GPR_U64(ctx, 17));
    // 0x128178: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x128178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x12817c: 0x24e7fff8  addiu       $a3, $a3, -0x8
    ctx->pc = 0x12817cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967288));
    // 0x128180: 0xfd2b0030  sd          $t3, 0x30($t1)
    ctx->pc = 0x128180u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 48), GPR_U64(ctx, 11));
    // 0x128184: 0xfd2a0038  sd          $t2, 0x38($t1)
    ctx->pc = 0x128184u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 56), GPR_U64(ctx, 10));
    // 0x128188: 0xfd220040  sd          $v0, 0x40($t1)
    ctx->pc = 0x128188u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 64), GPR_U64(ctx, 2));
    // 0x12818c: 0xfd230048  sd          $v1, 0x48($t1)
    ctx->pc = 0x12818cu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 72), GPR_U64(ctx, 3));
    // 0x128190: 0xc0481d0  jal         func_120740
    ctx->pc = 0x128190u;
    SET_GPR_U32(ctx, 31, 0x128198u);
    ctx->pc = 0x128194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128190u;
            // 0x128194: 0xfd2c0058  sd          $t4, 0x58($t1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 9), 88), GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120740u;
    if (runtime->hasFunction(0x120740u)) {
        auto targetFn = runtime->lookupFunction(0x120740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128198u; }
        if (ctx->pc != 0x128198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_120740_0x120800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128198u; }
        if (ctx->pc != 0x128198u) { return; }
    }
    ctx->pc = 0x128198u;
    // 0x128198: 0xc04fe92  jal         func_13FA48
    ctx->pc = 0x128198u;
    SET_GPR_U32(ctx, 31, 0x1281A0u);
    ctx->pc = 0x13FA48u;
    if (runtime->hasFunction(0x13FA48u)) {
        auto targetFn = runtime->lookupFunction(0x13FA48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1281A0u; }
        if (ctx->pc != 0x1281A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa48_0x13fa78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1281A0u; }
        if (ctx->pc != 0x1281A0u) { return; }
    }
    ctx->pc = 0x1281A0u;
    // 0x1281a0: 0xc04fd78  jal         func_13F5E0
    ctx->pc = 0x1281A0u;
    SET_GPR_U32(ctx, 31, 0x1281A8u);
    ctx->pc = 0x13F5E0u;
    if (runtime->hasFunction(0x13F5E0u)) {
        auto targetFn = runtime->lookupFunction(0x13F5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1281A8u; }
        if (ctx->pc != 0x1281A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f5e0_0x13f648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1281A8u; }
        if (ctx->pc != 0x1281A8u) { return; }
    }
    ctx->pc = 0x1281A8u;
    // 0x1281a8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1281a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1281ac: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1281acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1281b0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1281b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1281b4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1281b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1281b8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1281b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1281bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1281bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1281c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1281C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1281C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1281C0u;
            // 0x1281c4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x127FF0u: goto label_127ff0;
            case 0x128254u: goto label_128254;
            case 0x12828Cu: goto label_12828c;
            case 0x128290u: goto label_128290;
            case 0x1282BCu: goto label_1282bc;
            case 0x1282C0u: goto label_1282c0;
            case 0x1282C8u: goto label_1282c8;
            case 0x1282F0u: goto label_1282f0;
            case 0x128350u: goto label_128350;
            case 0x128410u: goto label_128410;
            case 0x128424u: goto label_128424;
            case 0x128438u: goto label_128438;
            case 0x128458u: goto label_128458;
            case 0x128480u: goto label_128480;
            case 0x1284A0u: goto label_1284a0;
            case 0x1284DCu: goto label_1284dc;
            case 0x128530u: goto label_128530;
            case 0x1285D8u: goto label_1285d8;
            case 0x1285F8u: goto label_1285f8;
            case 0x128620u: goto label_128620;
            case 0x128640u: goto label_128640;
            case 0x128678u: goto label_128678;
            case 0x128690u: goto label_128690;
            case 0x1286D0u: goto label_1286d0;
            case 0x128768u: goto label_128768;
            case 0x128780u: goto label_128780;
            case 0x1287A0u: goto label_1287a0;
            case 0x1287C8u: goto label_1287c8;
            case 0x1287E8u: goto label_1287e8;
            case 0x128820u: goto label_128820;
            case 0x128830u: goto label_128830;
            case 0x128834u: goto label_128834;
            case 0x12885Cu: goto label_12885c;
            case 0x128898u: goto label_128898;
            case 0x128950u: goto label_128950;
            case 0x128970u: goto label_128970;
            case 0x128998u: goto label_128998;
            case 0x1289B8u: goto label_1289b8;
            case 0x1289F0u: goto label_1289f0;
            case 0x128A08u: goto label_128a08;
            case 0x128A0Cu: goto label_128a0c;
            case 0x128A1Cu: goto label_128a1c;
            case 0x128A48u: goto label_128a48;
            case 0x128A68u: goto label_128a68;
            case 0x128A88u: goto label_128a88;
            case 0x128AD8u: goto label_128ad8;
            case 0x128B90u: goto label_128b90;
            case 0x128BB0u: goto label_128bb0;
            case 0x128BD8u: goto label_128bd8;
            case 0x128BF8u: goto label_128bf8;
            case 0x128C30u: goto label_128c30;
            case 0x128C48u: goto label_128c48;
            case 0x128C68u: goto label_128c68;
            case 0x128C88u: goto label_128c88;
            case 0x128C98u: goto label_128c98;
            case 0x128CC0u: goto label_128cc0;
            case 0x128CE0u: goto label_128ce0;
            case 0x128CF0u: goto label_128cf0;
            case 0x128D38u: goto label_128d38;
            case 0x128DD0u: goto label_128dd0;
            case 0x128DE8u: goto label_128de8;
            case 0x128E04u: goto label_128e04;
            case 0x128E98u: goto label_128e98;
            case 0x128EB0u: goto label_128eb0;
            case 0x128ECCu: goto label_128ecc;
            case 0x128ED0u: goto label_128ed0;
            case 0x128F14u: goto label_128f14;
            case 0x128F48u: goto label_128f48;
            case 0x129090u: goto label_129090;
            case 0x129190u: goto label_129190;
            case 0x1291A8u: goto label_1291a8;
            case 0x1291ACu: goto label_1291ac;
            case 0x1291D0u: goto label_1291d0;
            case 0x129204u: goto label_129204;
            case 0x129220u: goto label_129220;
            case 0x129224u: goto label_129224;
            case 0x129244u: goto label_129244;
            case 0x12927Cu: goto label_12927c;
            case 0x129290u: goto label_129290;
            case 0x1292B0u: goto label_1292b0;
            case 0x1292E0u: goto label_1292e0;
            case 0x129310u: goto label_129310;
            case 0x129324u: goto label_129324;
            case 0x129340u: goto label_129340;
            case 0x129368u: goto label_129368;
            case 0x1293C0u: goto label_1293c0;
            case 0x129438u: goto label_129438;
            case 0x129458u: goto label_129458;
            case 0x1294B0u: goto label_1294b0;
            case 0x1294D8u: goto label_1294d8;
            case 0x1294F0u: goto label_1294f0;
            case 0x129510u: goto label_129510;
            case 0x129538u: goto label_129538;
            case 0x129558u: goto label_129558;
            case 0x129590u: goto label_129590;
            case 0x1295B0u: goto label_1295b0;
            case 0x1295CCu: goto label_1295cc;
            case 0x129608u: goto label_129608;
            case 0x1296C0u: goto label_1296c0;
            case 0x1296E0u: goto label_1296e0;
            case 0x129708u: goto label_129708;
            case 0x129728u: goto label_129728;
            case 0x129760u: goto label_129760;
            case 0x129770u: goto label_129770;
            case 0x129774u: goto label_129774;
            case 0x129790u: goto label_129790;
            case 0x1297B0u: goto label_1297b0;
            case 0x1297C4u: goto label_1297c4;
            case 0x1297E0u: goto label_1297e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1281C8u;
    // 0x1281c8: 0x27bdfe00  addiu       $sp, $sp, -0x200
    ctx->pc = 0x1281c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966784));
    // 0x1281cc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1281ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1281d0: 0x7fb50170  sq          $s5, 0x170($sp)
    ctx->pc = 0x1281d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 21));
    // 0x1281d4: 0x7fb70150  sq          $s7, 0x150($sp)
    ctx->pc = 0x1281d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 23));
    // 0x1281d8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1281d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1281dc: 0x7fb001c0  sq          $s0, 0x1C0($sp)
    ctx->pc = 0x1281dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 16));
    // 0x1281e0: 0x7fb101b0  sq          $s1, 0x1B0($sp)
    ctx->pc = 0x1281e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 17));
    // 0x1281e4: 0x7fb30190  sq          $s3, 0x190($sp)
    ctx->pc = 0x1281e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 19));
    // 0x1281e8: 0x7fb40180  sq          $s4, 0x180($sp)
    ctx->pc = 0x1281e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 20));
    // 0x1281ec: 0x7fb60160  sq          $s6, 0x160($sp)
    ctx->pc = 0x1281ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 22));
    // 0x1281f0: 0x7fbe0140  sq          $fp, 0x140($sp)
    ctx->pc = 0x1281f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 30));
    // 0x1281f4: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x1281f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x1281f8: 0xe7b801f0  swc1        $f24, 0x1F0($sp)
    ctx->pc = 0x1281f8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
    // 0x1281fc: 0xe7b701e8  swc1        $f23, 0x1E8($sp)
    ctx->pc = 0x1281fcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
    // 0x128200: 0xe7b601e0  swc1        $f22, 0x1E0($sp)
    ctx->pc = 0x128200u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
    // 0x128204: 0xe7b501d8  swc1        $f21, 0x1D8($sp)
    ctx->pc = 0x128204u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
    // 0x128208: 0xe7b401d0  swc1        $f20, 0x1D0($sp)
    ctx->pc = 0x128208u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x12820c: 0x7fb201a0  sq          $s2, 0x1A0($sp)
    ctx->pc = 0x12820cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 18));
    // 0x128210: 0x8eb20110  lw          $s2, 0x110($s5)
    ctx->pc = 0x128210u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 272)));
    // 0x128214: 0x8c43ed58  lw          $v1, -0x12A8($v0)
    ctx->pc = 0x128214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962520)));
    // 0x128218: 0x8e420084  lw          $v0, 0x84($s2)
    ctx->pc = 0x128218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    // 0x12821c: 0x1043000d  beq         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x12821Cu;
    {
        const bool branch_taken_0x12821c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x128220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12821Cu;
            // 0x128220: 0xa0b82d  daddu       $s7, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12821c) {
            ctx->pc = 0x128254u;
            goto label_128254;
        }
    }
    ctx->pc = 0x128224u;
    // 0x128224: 0x3c0148ff  lui         $at, 0x48FF
    ctx->pc = 0x128224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18687 << 16));
    // 0x128228: 0x3421ffe0  ori         $at, $at, 0xFFE0
    ctx->pc = 0x128228u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65504);
    // 0x12822c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12822cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x128230: 0xc6e003a8  lwc1        $f0, 0x3A8($s7)
    ctx->pc = 0x128230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128234: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x128234u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x128238: 0x0  nop
    ctx->pc = 0x128238u;
    // NOP
    // 0x12823c: 0x45010568  bc1t        . + 4 + (0x568 << 2)
    ctx->pc = 0x12823Cu;
    {
        const bool branch_taken_0x12823c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x128240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12823Cu;
            // 0x128240: 0x7bb001c0  lq          $s0, 0x1C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12823c) {
            ctx->pc = 0x1297E0u;
            goto label_1297e0;
        }
    }
    ctx->pc = 0x128244u;
    // 0x128244: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x128244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128248: 0xe6e103a8  swc1        $f1, 0x3A8($s7)
    ctx->pc = 0x128248u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 936), bits); }
    // 0x12824c: 0x10000564  b           . + 4 + (0x564 << 2)
    ctx->pc = 0x12824Cu;
    {
        const bool branch_taken_0x12824c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12824Cu;
            // 0x128250: 0xaee2039c  sw          $v0, 0x39C($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 924), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12824c) {
            ctx->pc = 0x1297E0u;
            goto label_1297e0;
        }
    }
    ctx->pc = 0x128254u;
label_128254:
    // 0x128254: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x128254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x128258: 0xafa00118  sw          $zero, 0x118($sp)
    ctx->pc = 0x128258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
    // 0x12825c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x12825cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x128260: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x128260u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x128264: 0x305e0001  andi        $fp, $v0, 0x1
    ctx->pc = 0x128264u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x128268: 0x4b010043  vaddw.x     $vf1, $vf0, $vf1w
    ctx->pc = 0x128268u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12826c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x12826cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x128270: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x128270u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x128274: 0x17c00005  bnez        $fp, . + 4 + (0x5 << 2)
    ctx->pc = 0x128274u;
    {
        const bool branch_taken_0x128274 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x128278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128274u;
            // 0x128278: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128274) {
            ctx->pc = 0x12828Cu;
            goto label_12828c;
        }
    }
    ctx->pc = 0x12827Cu;
    // 0x12827c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x12827cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x128280: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x128280u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x128284: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x128284u;
    {
        const bool branch_taken_0x128284 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x128284) {
            ctx->pc = 0x128290u;
            goto label_128290;
        }
    }
    ctx->pc = 0x12828Cu;
label_12828c:
    // 0x12828c: 0xafa20118  sw          $v0, 0x118($sp)
    ctx->pc = 0x12828cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 2));
label_128290:
    // 0x128290: 0x17c0000a  bnez        $fp, . + 4 + (0xA << 2)
    ctx->pc = 0x128290u;
    {
        const bool branch_taken_0x128290 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x128294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128290u;
            // 0x128294: 0xafa0011c  sw          $zero, 0x11C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128290) {
            ctx->pc = 0x1282BCu;
            goto label_1282bc;
        }
    }
    ctx->pc = 0x128298u;
    // 0x128298: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x128298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12829c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12829cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1282a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1282a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1282a4: 0x0  nop
    ctx->pc = 0x1282a4u;
    // NOP
    // 0x1282a8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1282A8u;
    {
        const bool branch_taken_0x1282a8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1282ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1282A8u;
            // 0x1282ac: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1282a8) {
            ctx->pc = 0x1282C0u;
            goto label_1282c0;
        }
    }
    ctx->pc = 0x1282B0u;
    // 0x1282b0: 0x86420034  lh          $v0, 0x34($s2)
    ctx->pc = 0x1282b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x1282b4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1282B4u;
    {
        const bool branch_taken_0x1282b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1282b4) {
            ctx->pc = 0x1282B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1282B4u;
            // 0x1282b8: 0x8e420038  lw          $v0, 0x38($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1282C8u;
            goto label_1282c8;
        }
    }
    ctx->pc = 0x1282BCu;
label_1282bc:
    // 0x1282bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1282bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1282c0:
    // 0x1282c0: 0xafa3011c  sw          $v1, 0x11C($sp)
    ctx->pc = 0x1282c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 3));
    // 0x1282c4: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x1282c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_1282c8:
    // 0x1282c8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x1282c8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x1282cc: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x1282ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x1282d0: 0x13c00007  beqz        $fp, . + 4 + (0x7 << 2)
    ctx->pc = 0x1282D0u;
    {
        const bool branch_taken_0x1282d0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x1282D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1282D0u;
            // 0x1282d4: 0xafa20120  sw          $v0, 0x120($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1282d0) {
            ctx->pc = 0x1282F0u;
            goto label_1282f0;
        }
    }
    ctx->pc = 0x1282D8u;
    // 0x1282d8: 0xc6400050  lwc1        $f0, 0x50($s2)
    ctx->pc = 0x1282d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1282dc: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1282dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1282e0: 0xc6400054  lwc1        $f0, 0x54($s2)
    ctx->pc = 0x1282e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1282e4: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1282e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1282e8: 0xc6400058  lwc1        $f0, 0x58($s2)
    ctx->pc = 0x1282e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1282ec: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1282ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1282f0:
    // 0x1282f0: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x1282f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x1282f4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1282f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1282f8: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x1282f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1282fc: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x1282fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x128300: 0x40f809  jalr        $v0
    ctx->pc = 0x128300u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x128308u);
        ctx->pc = 0x128304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128300u;
            // 0x128304: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x128308u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x127FF0u: goto label_127ff0;
            case 0x128254u: goto label_128254;
            case 0x12828Cu: goto label_12828c;
            case 0x128290u: goto label_128290;
            case 0x1282BCu: goto label_1282bc;
            case 0x1282C0u: goto label_1282c0;
            case 0x1282C8u: goto label_1282c8;
            case 0x1282F0u: goto label_1282f0;
            case 0x128350u: goto label_128350;
            case 0x128410u: goto label_128410;
            case 0x128424u: goto label_128424;
            case 0x128438u: goto label_128438;
            case 0x128458u: goto label_128458;
            case 0x128480u: goto label_128480;
            case 0x1284A0u: goto label_1284a0;
            case 0x1284DCu: goto label_1284dc;
            case 0x128530u: goto label_128530;
            case 0x1285D8u: goto label_1285d8;
            case 0x1285F8u: goto label_1285f8;
            case 0x128620u: goto label_128620;
            case 0x128640u: goto label_128640;
            case 0x128678u: goto label_128678;
            case 0x128690u: goto label_128690;
            case 0x1286D0u: goto label_1286d0;
            case 0x128768u: goto label_128768;
            case 0x128780u: goto label_128780;
            case 0x1287A0u: goto label_1287a0;
            case 0x1287C8u: goto label_1287c8;
            case 0x1287E8u: goto label_1287e8;
            case 0x128820u: goto label_128820;
            case 0x128830u: goto label_128830;
            case 0x128834u: goto label_128834;
            case 0x12885Cu: goto label_12885c;
            case 0x128898u: goto label_128898;
            case 0x128950u: goto label_128950;
            case 0x128970u: goto label_128970;
            case 0x128998u: goto label_128998;
            case 0x1289B8u: goto label_1289b8;
            case 0x1289F0u: goto label_1289f0;
            case 0x128A08u: goto label_128a08;
            case 0x128A0Cu: goto label_128a0c;
            case 0x128A1Cu: goto label_128a1c;
            case 0x128A48u: goto label_128a48;
            case 0x128A68u: goto label_128a68;
            case 0x128A88u: goto label_128a88;
            case 0x128AD8u: goto label_128ad8;
            case 0x128B90u: goto label_128b90;
            case 0x128BB0u: goto label_128bb0;
            case 0x128BD8u: goto label_128bd8;
            case 0x128BF8u: goto label_128bf8;
            case 0x128C30u: goto label_128c30;
            case 0x128C48u: goto label_128c48;
            case 0x128C68u: goto label_128c68;
            case 0x128C88u: goto label_128c88;
            case 0x128C98u: goto label_128c98;
            case 0x128CC0u: goto label_128cc0;
            case 0x128CE0u: goto label_128ce0;
            case 0x128CF0u: goto label_128cf0;
            case 0x128D38u: goto label_128d38;
            case 0x128DD0u: goto label_128dd0;
            case 0x128DE8u: goto label_128de8;
            case 0x128E04u: goto label_128e04;
            case 0x128E98u: goto label_128e98;
            case 0x128EB0u: goto label_128eb0;
            case 0x128ECCu: goto label_128ecc;
            case 0x128ED0u: goto label_128ed0;
            case 0x128F14u: goto label_128f14;
            case 0x128F48u: goto label_128f48;
            case 0x129090u: goto label_129090;
            case 0x129190u: goto label_129190;
            case 0x1291A8u: goto label_1291a8;
            case 0x1291ACu: goto label_1291ac;
            case 0x1291D0u: goto label_1291d0;
            case 0x129204u: goto label_129204;
            case 0x129220u: goto label_129220;
            case 0x129224u: goto label_129224;
            case 0x129244u: goto label_129244;
            case 0x12927Cu: goto label_12927c;
            case 0x129290u: goto label_129290;
            case 0x1292B0u: goto label_1292b0;
            case 0x1292E0u: goto label_1292e0;
            case 0x129310u: goto label_129310;
            case 0x129324u: goto label_129324;
            case 0x129340u: goto label_129340;
            case 0x129368u: goto label_129368;
            case 0x1293C0u: goto label_1293c0;
            case 0x129438u: goto label_129438;
            case 0x129458u: goto label_129458;
            case 0x1294B0u: goto label_1294b0;
            case 0x1294D8u: goto label_1294d8;
            case 0x1294F0u: goto label_1294f0;
            case 0x129510u: goto label_129510;
            case 0x129538u: goto label_129538;
            case 0x129558u: goto label_129558;
            case 0x129590u: goto label_129590;
            case 0x1295B0u: goto label_1295b0;
            case 0x1295CCu: goto label_1295cc;
            case 0x129608u: goto label_129608;
            case 0x1296C0u: goto label_1296c0;
            case 0x1296E0u: goto label_1296e0;
            case 0x129708u: goto label_129708;
            case 0x129728u: goto label_129728;
            case 0x129760u: goto label_129760;
            case 0x129770u: goto label_129770;
            case 0x129774u: goto label_129774;
            case 0x129790u: goto label_129790;
            case 0x1297B0u: goto label_1297b0;
            case 0x1297C4u: goto label_1297c4;
            case 0x1297E0u: goto label_1297e0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x128308u; }
            if (ctx->pc != 0x128308u) { return; }
        }
        }
    }
    ctx->pc = 0x128308u;
    // 0x128308: 0x104001c4  beqz        $v0, . + 4 + (0x1C4 << 2)
    ctx->pc = 0x128308u;
    {
        const bool branch_taken_0x128308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12830Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128308u;
            // 0x12830c: 0x8fa60118  lw          $a2, 0x118($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128308) {
            ctx->pc = 0x128A1Cu;
            goto label_128a1c;
        }
    }
    ctx->pc = 0x128310u;
    // 0x128310: 0x10c001bd  beqz        $a2, . + 4 + (0x1BD << 2)
    ctx->pc = 0x128310u;
    {
        const bool branch_taken_0x128310 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x128314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128310u;
            // 0x128314: 0x3c140033  lui         $s4, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128310) {
            ctx->pc = 0x128A08u;
            goto label_128a08;
        }
    }
    ctx->pc = 0x128318u;
    // 0x128318: 0x8e83ed60  lw          $v1, -0x12A0($s4)
    ctx->pc = 0x128318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
    // 0x12831c: 0x2c620100  sltiu       $v0, $v1, 0x100
    ctx->pc = 0x12831cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x128320: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x128320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x128324: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x128324u;
    {
        const bool branch_taken_0x128324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x128328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128324u;
            // 0x128328: 0x8eb30060  lw          $s3, 0x60($s5) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128324) {
            ctx->pc = 0x128350u;
            goto label_128350;
        }
    }
    ctx->pc = 0x12832Cu;
    // 0x12832c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x12832cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x128330: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x128330u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x128334: 0x2442ed68  addiu       $v0, $v0, -0x1298
    ctx->pc = 0x128334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962536));
    // 0x128338: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x128338u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x12833c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12833cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x128340: 0x8c84f168  lw          $a0, -0xE98($a0)
    ctx->pc = 0x128340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294963560)));
    // 0x128344: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x128344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x128348: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x128348u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x12834c: 0x8e83ed60  lw          $v1, -0x12A0($s4)
    ctx->pc = 0x12834cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
label_128350:
    // 0x128350: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x128350u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x128354: 0x2630ed68  addiu       $s0, $s1, -0x1298
    ctx->pc = 0x128354u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962536));
    // 0x128358: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x128358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12835c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12835cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x128360: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x128360u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x128364: 0xae83ed60  sw          $v1, -0x12A0($s4)
    ctx->pc = 0x128364u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294962528), GPR_U32(ctx, 3));
    // 0x128368: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x128368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x12836c: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x12836Cu;
    SET_GPR_U32(ctx, 31, 0x128374u);
    ctx->pc = 0x128370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12836Cu;
            // 0x128370: 0xac530000  sw          $s3, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128374u; }
        if (ctx->pc != 0x128374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128374u; }
        if (ctx->pc != 0x128374u) { return; }
    }
    ctx->pc = 0x128374u;
    // 0x128374: 0x3c07002d  lui         $a3, 0x2D
    ctx->pc = 0x128374u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)45 << 16));
    // 0x128378: 0x26650018  addiu       $a1, $s3, 0x18
    ctx->pc = 0x128378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x12837c: 0x24e4bb98  addiu       $a0, $a3, -0x4468
    ctx->pc = 0x12837cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949784));
    // 0x128380: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x128380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x128384: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x128384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x128388: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x128388u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12838c: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x12838cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x128390: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x128390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x128394: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x128394u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x128398: 0x8e82ed60  lw          $v0, -0x12A0($s4)
    ctx->pc = 0x128398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
    // 0x12839c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12839cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1283a0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1283a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1283a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1283a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1283a8: 0x8c620658  lw          $v0, 0x658($v1)
    ctx->pc = 0x1283a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1624)));
    // 0x1283ac: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1283acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1283b0: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1283b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1283b4: 0x40f809  jalr        $v0
    ctx->pc = 0x1283B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1283BCu);
        ctx->pc = 0x1283B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1283B4u;
            // 0x1283b8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1283BCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x127FF0u: goto label_127ff0;
            case 0x128254u: goto label_128254;
            case 0x12828Cu: goto label_12828c;
            case 0x128290u: goto label_128290;
            case 0x1282BCu: goto label_1282bc;
            case 0x1282C0u: goto label_1282c0;
            case 0x1282C8u: goto label_1282c8;
            case 0x1282F0u: goto label_1282f0;
            case 0x128350u: goto label_128350;
            case 0x128410u: goto label_128410;
            case 0x128424u: goto label_128424;
            case 0x128438u: goto label_128438;
            case 0x128458u: goto label_128458;
            case 0x128480u: goto label_128480;
            case 0x1284A0u: goto label_1284a0;
            case 0x1284DCu: goto label_1284dc;
            case 0x128530u: goto label_128530;
            case 0x1285D8u: goto label_1285d8;
            case 0x1285F8u: goto label_1285f8;
            case 0x128620u: goto label_128620;
            case 0x128640u: goto label_128640;
            case 0x128678u: goto label_128678;
            case 0x128690u: goto label_128690;
            case 0x1286D0u: goto label_1286d0;
            case 0x128768u: goto label_128768;
            case 0x128780u: goto label_128780;
            case 0x1287A0u: goto label_1287a0;
            case 0x1287C8u: goto label_1287c8;
            case 0x1287E8u: goto label_1287e8;
            case 0x128820u: goto label_128820;
            case 0x128830u: goto label_128830;
            case 0x128834u: goto label_128834;
            case 0x12885Cu: goto label_12885c;
            case 0x128898u: goto label_128898;
            case 0x128950u: goto label_128950;
            case 0x128970u: goto label_128970;
            case 0x128998u: goto label_128998;
            case 0x1289B8u: goto label_1289b8;
            case 0x1289F0u: goto label_1289f0;
            case 0x128A08u: goto label_128a08;
            case 0x128A0Cu: goto label_128a0c;
            case 0x128A1Cu: goto label_128a1c;
            case 0x128A48u: goto label_128a48;
            case 0x128A68u: goto label_128a68;
            case 0x128A88u: goto label_128a88;
            case 0x128AD8u: goto label_128ad8;
            case 0x128B90u: goto label_128b90;
            case 0x128BB0u: goto label_128bb0;
            case 0x128BD8u: goto label_128bd8;
            case 0x128BF8u: goto label_128bf8;
            case 0x128C30u: goto label_128c30;
            case 0x128C48u: goto label_128c48;
            case 0x128C68u: goto label_128c68;
            case 0x128C88u: goto label_128c88;
            case 0x128C98u: goto label_128c98;
            case 0x128CC0u: goto label_128cc0;
            case 0x128CE0u: goto label_128ce0;
            case 0x128CF0u: goto label_128cf0;
            case 0x128D38u: goto label_128d38;
            case 0x128DD0u: goto label_128dd0;
            case 0x128DE8u: goto label_128de8;
            case 0x128E04u: goto label_128e04;
            case 0x128E98u: goto label_128e98;
            case 0x128EB0u: goto label_128eb0;
            case 0x128ECCu: goto label_128ecc;
            case 0x128ED0u: goto label_128ed0;
            case 0x128F14u: goto label_128f14;
            case 0x128F48u: goto label_128f48;
            case 0x129090u: goto label_129090;
            case 0x129190u: goto label_129190;
            case 0x1291A8u: goto label_1291a8;
            case 0x1291ACu: goto label_1291ac;
            case 0x1291D0u: goto label_1291d0;
            case 0x129204u: goto label_129204;
            case 0x129220u: goto label_129220;
            case 0x129224u: goto label_129224;
            case 0x129244u: goto label_129244;
            case 0x12927Cu: goto label_12927c;
            case 0x129290u: goto label_129290;
            case 0x1292B0u: goto label_1292b0;
            case 0x1292E0u: goto label_1292e0;
            case 0x129310u: goto label_129310;
            case 0x129324u: goto label_129324;
            case 0x129340u: goto label_129340;
            case 0x129368u: goto label_129368;
            case 0x1293C0u: goto label_1293c0;
            case 0x129438u: goto label_129438;
            case 0x129458u: goto label_129458;
            case 0x1294B0u: goto label_1294b0;
            case 0x1294D8u: goto label_1294d8;
            case 0x1294F0u: goto label_1294f0;
            case 0x129510u: goto label_129510;
            case 0x129538u: goto label_129538;
            case 0x129558u: goto label_129558;
            case 0x129590u: goto label_129590;
            case 0x1295B0u: goto label_1295b0;
            case 0x1295CCu: goto label_1295cc;
            case 0x129608u: goto label_129608;
            case 0x1296C0u: goto label_1296c0;
            case 0x1296E0u: goto label_1296e0;
            case 0x129708u: goto label_129708;
            case 0x129728u: goto label_129728;
            case 0x129760u: goto label_129760;
            case 0x129770u: goto label_129770;
            case 0x129774u: goto label_129774;
            case 0x129790u: goto label_129790;
            case 0x1297B0u: goto label_1297b0;
            case 0x1297C4u: goto label_1297c4;
            case 0x1297E0u: goto label_1297e0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1283BCu; }
            if (ctx->pc != 0x1283BCu) { return; }
        }
        }
    }
    ctx->pc = 0x1283BCu;
    // 0x1283bc: 0x8e82ed60  lw          $v0, -0x12A0($s4)
    ctx->pc = 0x1283bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
    // 0x1283c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1283c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1283c4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1283c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1283c8: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x1283C8u;
    SET_GPR_U32(ctx, 31, 0x1283D0u);
    ctx->pc = 0x1283CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1283C8u;
            // 0x1283cc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1283D0u; }
        if (ctx->pc != 0x1283D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1283D0u; }
        if (ctx->pc != 0x1283D0u) { return; }
    }
    ctx->pc = 0x1283D0u;
    // 0x1283d0: 0x8faa011c  lw          $t2, 0x11C($sp)
    ctx->pc = 0x1283d0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x1283d4: 0x1140000e  beqz        $t2, . + 4 + (0xE << 2)
    ctx->pc = 0x1283D4u;
    {
        const bool branch_taken_0x1283d4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1283D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1283D4u;
            // 0x1283d8: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1283d4) {
            ctx->pc = 0x128410u;
            goto label_128410;
        }
    }
    ctx->pc = 0x1283DCu;
    // 0x1283dc: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1283dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1283e0: 0x8c47f1a4  lw          $a3, -0xE5C($v0)
    ctx->pc = 0x1283e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963620)));
    // 0x1283e4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1283e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1283e8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1283e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1283ec: 0x8ea80070  lw          $t0, 0x70($s5)
    ctx->pc = 0x1283ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x1283f0: 0x8c65f1a0  lw          $a1, -0xE60($v1)
    ctx->pc = 0x1283f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963616)));
    // 0x1283f4: 0x73942  srl         $a3, $a3, 5
    ctx->pc = 0x1283f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 5));
    // 0x1283f8: 0x8c46f1ac  lw          $a2, -0xE54($v0)
    ctx->pc = 0x1283f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963628)));
    // 0x1283fc: 0xc049e46  jal         func_127918
    ctx->pc = 0x1283FCu;
    SET_GPR_U32(ctx, 31, 0x128404u);
    ctx->pc = 0x128400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1283FCu;
            // 0x128400: 0x31080001  andi        $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
    ctx->pc = 0x127918u;
    if (runtime->hasFunction(0x127918u)) {
        auto targetFn = runtime->lookupFunction(0x127918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128404u; }
        if (ctx->pc != 0x128404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127918_0x127918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128404u; }
        if (ctx->pc != 0x128404u) { return; }
    }
    ctx->pc = 0x128404u;
    // 0x128404: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x128404u;
    {
        const bool branch_taken_0x128404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128404u;
            // 0x128408: 0x3c160033  lui         $s6, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128404) {
            ctx->pc = 0x128424u;
            goto label_128424;
        }
    }
    ctx->pc = 0x12840Cu;
    // 0x12840c: 0x0  nop
    ctx->pc = 0x12840cu;
    // NOP
label_128410:
    // 0x128410: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x128410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x128414: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x128414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128418: 0xc049d78  jal         func_1275E0
    ctx->pc = 0x128418u;
    SET_GPR_U32(ctx, 31, 0x128420u);
    ctx->pc = 0x12841Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128418u;
            // 0x12841c: 0x8c45f1ac  lw          $a1, -0xE54($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963628)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1275E0u;
    if (runtime->hasFunction(0x1275E0u)) {
        auto targetFn = runtime->lookupFunction(0x1275E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128420u; }
        if (ctx->pc != 0x128420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001275E0_0x1275e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128420u; }
        if (ctx->pc != 0x128420u) { return; }
    }
    ctx->pc = 0x128420u;
    // 0x128420: 0x3c160033  lui         $s6, 0x33
    ctx->pc = 0x128420u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)51 << 16));
label_128424:
    // 0x128424: 0x8ec4f168  lw          $a0, -0xE98($s6)
    ctx->pc = 0x128424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294963560)));
    // 0x128428: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x128428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x12842c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x12842Cu;
    {
        const bool branch_taken_0x12842c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x128430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12842Cu;
            // 0x128430: 0x24820008  addiu       $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12842c) {
            ctx->pc = 0x128458u;
            goto label_128458;
        }
    }
    ctx->pc = 0x128434u;
    // 0x128434: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x128434u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_128438:
    // 0x128438: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x128438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x12843c: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x12843cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x128440: 0x0  nop
    ctx->pc = 0x128440u;
    // NOP
    // 0x128444: 0x0  nop
    ctx->pc = 0x128444u;
    // NOP
    // 0x128448: 0x0  nop
    ctx->pc = 0x128448u;
    // NOP
    // 0x12844c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12844Cu;
    {
        const bool branch_taken_0x12844c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12844c) {
            ctx->pc = 0x128450u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12844Cu;
            // 0x128450: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x128438u;
            runtime->cooperativeGuestYield();
            goto label_128438;
        }
    }
    ctx->pc = 0x128454u;
    // 0x128454: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x128454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_128458:
    // 0x128458: 0x3c036000  lui         $v1, 0x6000
    ctx->pc = 0x128458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24576 << 16));
    // 0x12845c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x12845cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x128460: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x128460u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x128464: 0xaec2f168  sw          $v0, -0xE98($s6)
    ctx->pc = 0x128464u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294963560), GPR_U32(ctx, 2));
    // 0x128468: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x128468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12846c: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x12846cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x128470: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x128470u;
    {
        const bool branch_taken_0x128470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x128474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128470u;
            // 0x128474: 0x8e82ed60  lw          $v0, -0x12A0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128470) {
            ctx->pc = 0x1284A0u;
            goto label_1284a0;
        }
    }
    ctx->pc = 0x128478u;
    // 0x128478: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x128478u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x12847c: 0x0  nop
    ctx->pc = 0x12847cu;
    // NOP
label_128480:
    // 0x128480: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x128480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x128484: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x128484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x128488: 0x0  nop
    ctx->pc = 0x128488u;
    // NOP
    // 0x12848c: 0x0  nop
    ctx->pc = 0x12848cu;
    // NOP
    // 0x128490: 0x0  nop
    ctx->pc = 0x128490u;
    // NOP
    // 0x128494: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x128494u;
    {
        const bool branch_taken_0x128494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x128494) {
            ctx->pc = 0x128498u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x128494u;
            // 0x128498: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x128480u;
            runtime->cooperativeGuestYield();
            goto label_128480;
        }
    }
    ctx->pc = 0x12849Cu;
    // 0x12849c: 0x8e82ed60  lw          $v0, -0x12A0($s4)
    ctx->pc = 0x12849cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
label_1284a0:
    // 0x1284a0: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1284a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1284a4: 0x2471ed68  addiu       $s1, $v1, -0x1298
    ctx->pc = 0x1284a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962536));
    // 0x1284a8: 0xaec4f168  sw          $a0, -0xE98($s6)
    ctx->pc = 0x1284a8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294963560), GPR_U32(ctx, 4));
    // 0x1284ac: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x1284acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1284b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1284b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1284b4: 0xae85ed60  sw          $a1, -0x12A0($s4)
    ctx->pc = 0x1284b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294962528), GPR_U32(ctx, 5));
    // 0x1284b8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1284b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1284bc: 0x2ca30100  sltiu       $v1, $a1, 0x100
    ctx->pc = 0x1284bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1284c0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1284c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1284c4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1284C4u;
    {
        const bool branch_taken_0x1284c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1284C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1284C4u;
            // 0x1284c8: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1284c4) {
            ctx->pc = 0x1284DCu;
            goto label_1284dc;
        }
    }
    ctx->pc = 0x1284CCu;
    // 0x1284cc: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1284ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1284d0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1284d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1284d4: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x1284D4u;
    SET_GPR_U32(ctx, 31, 0x1284DCu);
    ctx->pc = 0x1284D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1284D4u;
            // 0x1284d8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1284DCu; }
        if (ctx->pc != 0x1284DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1284DCu; }
        if (ctx->pc != 0x1284DCu) { return; }
    }
    ctx->pc = 0x1284DCu;
label_1284dc:
    // 0x1284dc: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x1284dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
    // 0x1284e0: 0x24d3bb98  addiu       $s3, $a2, -0x4468
    ctx->pc = 0x1284e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949784));
    // 0x1284e4: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x1284e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1284e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1284e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1284ec: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x1284ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
    // 0x1284f0: 0x8fa7011c  lw          $a3, 0x11C($sp)
    ctx->pc = 0x1284f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x1284f4: 0x50e000cf  beql        $a3, $zero, . + 4 + (0xCF << 2)
    ctx->pc = 0x1284F4u;
    {
        const bool branch_taken_0x1284f4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1284f4) {
            ctx->pc = 0x1284F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1284F4u;
            // 0x1284f8: 0x8e420080  lw          $v0, 0x80($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x128834u;
            goto label_128834;
        }
    }
    ctx->pc = 0x1284FCu;
    // 0x1284fc: 0x17c00064  bnez        $fp, . + 4 + (0x64 << 2)
    ctx->pc = 0x1284FCu;
    {
        const bool branch_taken_0x1284fc = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x128500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1284FCu;
            // 0x128500: 0x8fa20120  lw          $v0, 0x120($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1284fc) {
            ctx->pc = 0x128690u;
            goto label_128690;
        }
    }
    ctx->pc = 0x128504u;
    // 0x128504: 0x8e83ed60  lw          $v1, -0x12A0($s4)
    ctx->pc = 0x128504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
    // 0x128508: 0x2c620100  sltiu       $v0, $v1, 0x100
    ctx->pc = 0x128508u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x12850c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x12850cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x128510: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x128510u;
    {
        const bool branch_taken_0x128510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x128514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128510u;
            // 0x128514: 0x8eb00064  lw          $s0, 0x64($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128510) {
            ctx->pc = 0x128530u;
            goto label_128530;
        }
    }
    ctx->pc = 0x128518u;
    // 0x128518: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x128518u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12851c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x12851cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x128520: 0x8ec3f168  lw          $v1, -0xE98($s6)
    ctx->pc = 0x128520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294963560)));
    // 0x128524: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x128524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x128528: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x128528u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x12852c: 0x8e83ed60  lw          $v1, -0x12A0($s4)
    ctx->pc = 0x12852cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
label_128530:
    // 0x128530: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128534: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x128534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x128538: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x128538u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12853c: 0xae83ed60  sw          $v1, -0x12A0($s4)
    ctx->pc = 0x12853cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294962528), GPR_U32(ctx, 3));
    // 0x128540: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x128540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x128544: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x128544u;
    SET_GPR_U32(ctx, 31, 0x12854Cu);
    ctx->pc = 0x128548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128544u;
            // 0x128548: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12854Cu; }
        if (ctx->pc != 0x12854Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12854Cu; }
        if (ctx->pc != 0x12854Cu) { return; }
    }
    ctx->pc = 0x12854Cu;
    // 0x12854c: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x12854cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x128550: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x128550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x128554: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x128554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x128558: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x128558u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12855c: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x12855cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
    // 0x128560: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x128560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x128564: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x128564u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x128568: 0x8e82ed60  lw          $v0, -0x12A0($s4)
    ctx->pc = 0x128568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
    // 0x12856c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12856cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x128570: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x128570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x128574: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x128574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x128578: 0x8c620658  lw          $v0, 0x658($v1)
    ctx->pc = 0x128578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1624)));
    // 0x12857c: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x12857cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x128580: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x128580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x128584: 0x40f809  jalr        $v0
    ctx->pc = 0x128584u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12858Cu);
        ctx->pc = 0x128588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128584u;
            // 0x128588: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x12858Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x127FF0u: goto label_127ff0;
            case 0x128254u: goto label_128254;
            case 0x12828Cu: goto label_12828c;
            case 0x128290u: goto label_128290;
            case 0x1282BCu: goto label_1282bc;
            case 0x1282C0u: goto label_1282c0;
            case 0x1282C8u: goto label_1282c8;
            case 0x1282F0u: goto label_1282f0;
            case 0x128350u: goto label_128350;
            case 0x128410u: goto label_128410;
            case 0x128424u: goto label_128424;
            case 0x128438u: goto label_128438;
            case 0x128458u: goto label_128458;
            case 0x128480u: goto label_128480;
            case 0x1284A0u: goto label_1284a0;
            case 0x1284DCu: goto label_1284dc;
            case 0x128530u: goto label_128530;
            case 0x1285D8u: goto label_1285d8;
            case 0x1285F8u: goto label_1285f8;
            case 0x128620u: goto label_128620;
            case 0x128640u: goto label_128640;
            case 0x128678u: goto label_128678;
            case 0x128690u: goto label_128690;
            case 0x1286D0u: goto label_1286d0;
            case 0x128768u: goto label_128768;
            case 0x128780u: goto label_128780;
            case 0x1287A0u: goto label_1287a0;
            case 0x1287C8u: goto label_1287c8;
            case 0x1287E8u: goto label_1287e8;
            case 0x128820u: goto label_128820;
            case 0x128830u: goto label_128830;
            case 0x128834u: goto label_128834;
            case 0x12885Cu: goto label_12885c;
            case 0x128898u: goto label_128898;
            case 0x128950u: goto label_128950;
            case 0x128970u: goto label_128970;
            case 0x128998u: goto label_128998;
            case 0x1289B8u: goto label_1289b8;
            case 0x1289F0u: goto label_1289f0;
            case 0x128A08u: goto label_128a08;
            case 0x128A0Cu: goto label_128a0c;
            case 0x128A1Cu: goto label_128a1c;
            case 0x128A48u: goto label_128a48;
            case 0x128A68u: goto label_128a68;
            case 0x128A88u: goto label_128a88;
            case 0x128AD8u: goto label_128ad8;
            case 0x128B90u: goto label_128b90;
            case 0x128BB0u: goto label_128bb0;
            case 0x128BD8u: goto label_128bd8;
            case 0x128BF8u: goto label_128bf8;
            case 0x128C30u: goto label_128c30;
            case 0x128C48u: goto label_128c48;
            case 0x128C68u: goto label_128c68;
            case 0x128C88u: goto label_128c88;
            case 0x128C98u: goto label_128c98;
            case 0x128CC0u: goto label_128cc0;
            case 0x128CE0u: goto label_128ce0;
            case 0x128CF0u: goto label_128cf0;
            case 0x128D38u: goto label_128d38;
            case 0x128DD0u: goto label_128dd0;
            case 0x128DE8u: goto label_128de8;
            case 0x128E04u: goto label_128e04;
            case 0x128E98u: goto label_128e98;
            case 0x128EB0u: goto label_128eb0;
            case 0x128ECCu: goto label_128ecc;
            case 0x128ED0u: goto label_128ed0;
            case 0x128F14u: goto label_128f14;
            case 0x128F48u: goto label_128f48;
            case 0x129090u: goto label_129090;
            case 0x129190u: goto label_129190;
            case 0x1291A8u: goto label_1291a8;
            case 0x1291ACu: goto label_1291ac;
            case 0x1291D0u: goto label_1291d0;
            case 0x129204u: goto label_129204;
            case 0x129220u: goto label_129220;
            case 0x129224u: goto label_129224;
            case 0x129244u: goto label_129244;
            case 0x12927Cu: goto label_12927c;
            case 0x129290u: goto label_129290;
            case 0x1292B0u: goto label_1292b0;
            case 0x1292E0u: goto label_1292e0;
            case 0x129310u: goto label_129310;
            case 0x129324u: goto label_129324;
            case 0x129340u: goto label_129340;
            case 0x129368u: goto label_129368;
            case 0x1293C0u: goto label_1293c0;
            case 0x129438u: goto label_129438;
            case 0x129458u: goto label_129458;
            case 0x1294B0u: goto label_1294b0;
            case 0x1294D8u: goto label_1294d8;
            case 0x1294F0u: goto label_1294f0;
            case 0x129510u: goto label_129510;
            case 0x129538u: goto label_129538;
            case 0x129558u: goto label_129558;
            case 0x129590u: goto label_129590;
            case 0x1295B0u: goto label_1295b0;
            case 0x1295CCu: goto label_1295cc;
            case 0x129608u: goto label_129608;
            case 0x1296C0u: goto label_1296c0;
            case 0x1296E0u: goto label_1296e0;
            case 0x129708u: goto label_129708;
            case 0x129728u: goto label_129728;
            case 0x129760u: goto label_129760;
            case 0x129770u: goto label_129770;
            case 0x129774u: goto label_129774;
            case 0x129790u: goto label_129790;
            case 0x1297B0u: goto label_1297b0;
            case 0x1297C4u: goto label_1297c4;
            case 0x1297E0u: goto label_1297e0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12858Cu; }
            if (ctx->pc != 0x12858Cu) { return; }
        }
        }
    }
    ctx->pc = 0x12858Cu;
    // 0x12858c: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x12858cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x128590: 0x8e82ed60  lw          $v0, -0x12A0($s4)
    ctx->pc = 0x128590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
    // 0x128594: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x128594u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x128598: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x128598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x12859c: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x12859Cu;
    SET_GPR_U32(ctx, 31, 0x1285A4u);
    ctx->pc = 0x1285A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12859Cu;
            // 0x1285a0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1285A4u; }
        if (ctx->pc != 0x1285A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1285A4u; }
        if (ctx->pc != 0x1285A4u) { return; }
    }
    ctx->pc = 0x1285A4u;
    // 0x1285a4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1285a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1285a8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1285a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1285ac: 0x8c45f1ac  lw          $a1, -0xE54($v0)
    ctx->pc = 0x1285acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963628)));
    // 0x1285b0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1285b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1285b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1285b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1285b8: 0xc049b3e  jal         func_126CF8
    ctx->pc = 0x1285B8u;
    SET_GPR_U32(ctx, 31, 0x1285C0u);
    ctx->pc = 0x1285BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1285B8u;
            // 0x1285bc: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126CF8u;
    if (runtime->hasFunction(0x126CF8u)) {
        auto targetFn = runtime->lookupFunction(0x126CF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1285C0u; }
        if (ctx->pc != 0x1285C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126CF8_0x126cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1285C0u; }
        if (ctx->pc != 0x1285C0u) { return; }
    }
    ctx->pc = 0x1285C0u;
    // 0x1285c0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1285c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1285c4: 0x8ca4f168  lw          $a0, -0xE98($a1)
    ctx->pc = 0x1285c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294963560)));
    // 0x1285c8: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x1285c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x1285cc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1285CCu;
    {
        const bool branch_taken_0x1285cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1285D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1285CCu;
            // 0x1285d0: 0x24820008  addiu       $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1285cc) {
            ctx->pc = 0x1285F8u;
            goto label_1285f8;
        }
    }
    ctx->pc = 0x1285D4u;
    // 0x1285d4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1285d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_1285d8:
    // 0x1285d8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1285d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1285dc: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x1285dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x1285e0: 0x0  nop
    ctx->pc = 0x1285e0u;
    // NOP
    // 0x1285e4: 0x0  nop
    ctx->pc = 0x1285e4u;
    // NOP
    // 0x1285e8: 0x0  nop
    ctx->pc = 0x1285e8u;
    // NOP
    // 0x1285ec: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1285ECu;
    {
        const bool branch_taken_0x1285ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1285ec) {
            ctx->pc = 0x1285F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1285ECu;
            // 0x1285f0: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1285D8u;
            runtime->cooperativeGuestYield();
            goto label_1285d8;
        }
    }
    ctx->pc = 0x1285F4u;
    // 0x1285f4: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x1285f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_1285f8:
    // 0x1285f8: 0x3c036000  lui         $v1, 0x6000
    ctx->pc = 0x1285f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24576 << 16));
    // 0x1285fc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1285fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x128600: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x128600u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x128604: 0xaca2f168  sw          $v0, -0xE98($a1)
    ctx->pc = 0x128604u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294963560), GPR_U32(ctx, 2));
    // 0x128608: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x128608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12860c: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x12860cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x128610: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x128610u;
    {
        const bool branch_taken_0x128610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x128614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128610u;
            // 0x128614: 0x8e82ed60  lw          $v0, -0x12A0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128610) {
            ctx->pc = 0x128640u;
            goto label_128640;
        }
    }
    ctx->pc = 0x128618u;
    // 0x128618: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x128618u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x12861c: 0x0  nop
    ctx->pc = 0x12861cu;
    // NOP
label_128620:
    // 0x128620: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x128620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x128624: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x128624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x128628: 0x0  nop
    ctx->pc = 0x128628u;
    // NOP
    // 0x12862c: 0x0  nop
    ctx->pc = 0x12862cu;
    // NOP
    // 0x128630: 0x0  nop
    ctx->pc = 0x128630u;
    // NOP
    // 0x128634: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x128634u;
    {
        const bool branch_taken_0x128634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x128634) {
            ctx->pc = 0x128638u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x128634u;
            // 0x128638: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x128620u;
            runtime->cooperativeGuestYield();
            goto label_128620;
        }
    }
    ctx->pc = 0x12863Cu;
    // 0x12863c: 0x8e82ed60  lw          $v0, -0x12A0($s4)
    ctx->pc = 0x12863cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
label_128640:
    // 0x128640: 0x2611ed68  addiu       $s1, $s0, -0x1298
    ctx->pc = 0x128640u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962536));
    // 0x128644: 0xaca4f168  sw          $a0, -0xE98($a1)
    ctx->pc = 0x128644u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294963560), GPR_U32(ctx, 4));
    // 0x128648: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x128648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12864c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12864cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x128650: 0xae85ed60  sw          $a1, -0x12A0($s4)
    ctx->pc = 0x128650u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294962528), GPR_U32(ctx, 5));
    // 0x128654: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x128654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x128658: 0x2ca30100  sltiu       $v1, $a1, 0x100
    ctx->pc = 0x128658u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x12865c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12865cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x128660: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x128660u;
    {
        const bool branch_taken_0x128660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x128664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128660u;
            // 0x128664: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128660) {
            ctx->pc = 0x128678u;
            goto label_128678;
        }
    }
    ctx->pc = 0x128668u;
    // 0x128668: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x128668u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x12866c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x12866cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x128670: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x128670u;
    SET_GPR_U32(ctx, 31, 0x128678u);
    ctx->pc = 0x128674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128670u;
            // 0x128674: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128678u; }
        if (ctx->pc != 0x128678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128678u; }
        if (ctx->pc != 0x128678u) { return; }
    }
    ctx->pc = 0x128678u;
label_128678:
    // 0x128678: 0x3c0a002d  lui         $t2, 0x2D
    ctx->pc = 0x128678u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)45 << 16));
    // 0x12867c: 0x2543bb98  addiu       $v1, $t2, -0x4468
    ctx->pc = 0x12867cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294949784));
    // 0x128680: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x128680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x128684: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x128684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x128688: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x128688u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x12868c: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x12868cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_128690:
    // 0x128690: 0x10400067  beqz        $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x128690u;
    {
        const bool branch_taken_0x128690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x128694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128690u;
            // 0x128694: 0x3c140033  lui         $s4, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128690) {
            ctx->pc = 0x128830u;
            goto label_128830;
        }
    }
    ctx->pc = 0x128698u;
    // 0x128698: 0x8e83ed60  lw          $v1, -0x12A0($s4)
    ctx->pc = 0x128698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
    // 0x12869c: 0x2c620100  sltiu       $v0, $v1, 0x100
    ctx->pc = 0x12869cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1286a0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1286a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1286a4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1286A4u;
    {
        const bool branch_taken_0x1286a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1286A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1286A4u;
            // 0x1286a8: 0x8eb30068  lw          $s3, 0x68($s5) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1286a4) {
            ctx->pc = 0x1286D0u;
            goto label_1286d0;
        }
    }
    ctx->pc = 0x1286ACu;
    // 0x1286ac: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1286acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1286b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1286b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1286b4: 0x2442ed68  addiu       $v0, $v0, -0x1298
    ctx->pc = 0x1286b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962536));
    // 0x1286b8: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x1286b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x1286bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1286bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1286c0: 0x8c84f168  lw          $a0, -0xE98($a0)
    ctx->pc = 0x1286c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294963560)));
    // 0x1286c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1286c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1286c8: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x1286c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x1286cc: 0x8e83ed60  lw          $v1, -0x12A0($s4)
    ctx->pc = 0x1286ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
label_1286d0:
    // 0x1286d0: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x1286d0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x1286d4: 0x2630ed68  addiu       $s0, $s1, -0x1298
    ctx->pc = 0x1286d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962536));
    // 0x1286d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1286d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1286dc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1286dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1286e0: 0x3c16002d  lui         $s6, 0x2D
    ctx->pc = 0x1286e0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)45 << 16));
    // 0x1286e4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1286e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1286e8: 0xae83ed60  sw          $v1, -0x12A0($s4)
    ctx->pc = 0x1286e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294962528), GPR_U32(ctx, 3));
    // 0x1286ec: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1286ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1286f0: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x1286F0u;
    SET_GPR_U32(ctx, 31, 0x1286F8u);
    ctx->pc = 0x1286F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1286F0u;
            // 0x1286f4: 0xac530000  sw          $s3, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1286F8u; }
        if (ctx->pc != 0x1286F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1286F8u; }
        if (ctx->pc != 0x1286F8u) { return; }
    }
    ctx->pc = 0x1286F8u;
    // 0x1286f8: 0x26650018  addiu       $a1, $s3, 0x18
    ctx->pc = 0x1286f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x1286fc: 0x26c4bb98  addiu       $a0, $s6, -0x4468
    ctx->pc = 0x1286fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294949784));
    // 0x128700: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x128700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x128704: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x128704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x128708: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x128708u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12870c: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x12870cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x128710: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x128710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x128714: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x128714u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x128718: 0x8e82ed60  lw          $v0, -0x12A0($s4)
    ctx->pc = 0x128718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
    // 0x12871c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12871cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x128720: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x128720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x128724: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x128724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x128728: 0x8c620658  lw          $v0, 0x658($v1)
    ctx->pc = 0x128728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1624)));
    // 0x12872c: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x12872cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x128730: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x128730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x128734: 0x40f809  jalr        $v0
    ctx->pc = 0x128734u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12873Cu);
        ctx->pc = 0x128738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128734u;
            // 0x128738: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x12873Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x127FF0u: goto label_127ff0;
            case 0x128254u: goto label_128254;
            case 0x12828Cu: goto label_12828c;
            case 0x128290u: goto label_128290;
            case 0x1282BCu: goto label_1282bc;
            case 0x1282C0u: goto label_1282c0;
            case 0x1282C8u: goto label_1282c8;
            case 0x1282F0u: goto label_1282f0;
            case 0x128350u: goto label_128350;
            case 0x128410u: goto label_128410;
            case 0x128424u: goto label_128424;
            case 0x128438u: goto label_128438;
            case 0x128458u: goto label_128458;
            case 0x128480u: goto label_128480;
            case 0x1284A0u: goto label_1284a0;
            case 0x1284DCu: goto label_1284dc;
            case 0x128530u: goto label_128530;
            case 0x1285D8u: goto label_1285d8;
            case 0x1285F8u: goto label_1285f8;
            case 0x128620u: goto label_128620;
            case 0x128640u: goto label_128640;
            case 0x128678u: goto label_128678;
            case 0x128690u: goto label_128690;
            case 0x1286D0u: goto label_1286d0;
            case 0x128768u: goto label_128768;
            case 0x128780u: goto label_128780;
            case 0x1287A0u: goto label_1287a0;
            case 0x1287C8u: goto label_1287c8;
            case 0x1287E8u: goto label_1287e8;
            case 0x128820u: goto label_128820;
            case 0x128830u: goto label_128830;
            case 0x128834u: goto label_128834;
            case 0x12885Cu: goto label_12885c;
            case 0x128898u: goto label_128898;
            case 0x128950u: goto label_128950;
            case 0x128970u: goto label_128970;
            case 0x128998u: goto label_128998;
            case 0x1289B8u: goto label_1289b8;
            case 0x1289F0u: goto label_1289f0;
            case 0x128A08u: goto label_128a08;
            case 0x128A0Cu: goto label_128a0c;
            case 0x128A1Cu: goto label_128a1c;
            case 0x128A48u: goto label_128a48;
            case 0x128A68u: goto label_128a68;
            case 0x128A88u: goto label_128a88;
            case 0x128AD8u: goto label_128ad8;
            case 0x128B90u: goto label_128b90;
            case 0x128BB0u: goto label_128bb0;
            case 0x128BD8u: goto label_128bd8;
            case 0x128BF8u: goto label_128bf8;
            case 0x128C30u: goto label_128c30;
            case 0x128C48u: goto label_128c48;
            case 0x128C68u: goto label_128c68;
            case 0x128C88u: goto label_128c88;
            case 0x128C98u: goto label_128c98;
            case 0x128CC0u: goto label_128cc0;
            case 0x128CE0u: goto label_128ce0;
            case 0x128CF0u: goto label_128cf0;
            case 0x128D38u: goto label_128d38;
            case 0x128DD0u: goto label_128dd0;
            case 0x128DE8u: goto label_128de8;
            case 0x128E04u: goto label_128e04;
            case 0x128E98u: goto label_128e98;
            case 0x128EB0u: goto label_128eb0;
            case 0x128ECCu: goto label_128ecc;
            case 0x128ED0u: goto label_128ed0;
            case 0x128F14u: goto label_128f14;
            case 0x128F48u: goto label_128f48;
            case 0x129090u: goto label_129090;
            case 0x129190u: goto label_129190;
            case 0x1291A8u: goto label_1291a8;
            case 0x1291ACu: goto label_1291ac;
            case 0x1291D0u: goto label_1291d0;
            case 0x129204u: goto label_129204;
            case 0x129220u: goto label_129220;
            case 0x129224u: goto label_129224;
            case 0x129244u: goto label_129244;
            case 0x12927Cu: goto label_12927c;
            case 0x129290u: goto label_129290;
            case 0x1292B0u: goto label_1292b0;
            case 0x1292E0u: goto label_1292e0;
            case 0x129310u: goto label_129310;
            case 0x129324u: goto label_129324;
            case 0x129340u: goto label_129340;
            case 0x129368u: goto label_129368;
            case 0x1293C0u: goto label_1293c0;
            case 0x129438u: goto label_129438;
            case 0x129458u: goto label_129458;
            case 0x1294B0u: goto label_1294b0;
            case 0x1294D8u: goto label_1294d8;
            case 0x1294F0u: goto label_1294f0;
            case 0x129510u: goto label_129510;
            case 0x129538u: goto label_129538;
            case 0x129558u: goto label_129558;
            case 0x129590u: goto label_129590;
            case 0x1295B0u: goto label_1295b0;
            case 0x1295CCu: goto label_1295cc;
            case 0x129608u: goto label_129608;
            case 0x1296C0u: goto label_1296c0;
            case 0x1296E0u: goto label_1296e0;
            case 0x129708u: goto label_129708;
            case 0x129728u: goto label_129728;
            case 0x129760u: goto label_129760;
            case 0x129770u: goto label_129770;
            case 0x129774u: goto label_129774;
            case 0x129790u: goto label_129790;
            case 0x1297B0u: goto label_1297b0;
            case 0x1297C4u: goto label_1297c4;
            case 0x1297E0u: goto label_1297e0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12873Cu; }
            if (ctx->pc != 0x12873Cu) { return; }
        }
        }
    }
    ctx->pc = 0x12873Cu;
    // 0x12873c: 0x8e82ed60  lw          $v0, -0x12A0($s4)
    ctx->pc = 0x12873cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
    // 0x128740: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x128740u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x128744: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x128744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x128748: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x128748u;
    SET_GPR_U32(ctx, 31, 0x128750u);
    ctx->pc = 0x12874Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128748u;
            // 0x12874c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128750u; }
        if (ctx->pc != 0x128750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128750u; }
        if (ctx->pc != 0x128750u) { return; }
    }
    ctx->pc = 0x128750u;
    // 0x128750: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x128750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x128754: 0x8e450038  lw          $a1, 0x38($s2)
    ctx->pc = 0x128754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x128758: 0x8c46f1ac  lw          $a2, -0xE54($v0)
    ctx->pc = 0x128758u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963628)));
    // 0x12875c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12875cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128760: 0xc049ffc  jal         func_127FF0
    ctx->pc = 0x128760u;
    SET_GPR_U32(ctx, 31, 0x128768u);
    ctx->pc = 0x128764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128760u;
            // 0x128764: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127FF0u;
    runtime->cooperativeGuestYield();
    goto label_127ff0;
    ctx->pc = 0x128768u;
label_128768:
    // 0x128768: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x128768u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x12876c: 0x8ca4f168  lw          $a0, -0xE98($a1)
    ctx->pc = 0x12876cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294963560)));
    // 0x128770: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x128770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x128774: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x128774u;
    {
        const bool branch_taken_0x128774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x128778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128774u;
            // 0x128778: 0x24820008  addiu       $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128774) {
            ctx->pc = 0x1287A0u;
            goto label_1287a0;
        }
    }
    ctx->pc = 0x12877Cu;
    // 0x12877c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x12877cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_128780:
    // 0x128780: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x128780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x128784: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x128784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x128788: 0x0  nop
    ctx->pc = 0x128788u;
    // NOP
    // 0x12878c: 0x0  nop
    ctx->pc = 0x12878cu;
    // NOP
    // 0x128790: 0x0  nop
    ctx->pc = 0x128790u;
    // NOP
    // 0x128794: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x128794u;
    {
        const bool branch_taken_0x128794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x128794) {
            ctx->pc = 0x128798u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x128794u;
            // 0x128798: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x128780u;
            runtime->cooperativeGuestYield();
            goto label_128780;
        }
    }
    ctx->pc = 0x12879Cu;
    // 0x12879c: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x12879cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_1287a0:
    // 0x1287a0: 0x3c036000  lui         $v1, 0x6000
    ctx->pc = 0x1287a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24576 << 16));
    // 0x1287a4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1287a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1287a8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1287a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1287ac: 0xaca2f168  sw          $v0, -0xE98($a1)
    ctx->pc = 0x1287acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294963560), GPR_U32(ctx, 2));
    // 0x1287b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1287b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1287b4: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x1287b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x1287b8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1287B8u;
    {
        const bool branch_taken_0x1287b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1287BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1287B8u;
            // 0x1287bc: 0x8e82ed60  lw          $v0, -0x12A0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1287b8) {
            ctx->pc = 0x1287E8u;
            goto label_1287e8;
        }
    }
    ctx->pc = 0x1287C0u;
    // 0x1287c0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1287c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1287c4: 0x0  nop
    ctx->pc = 0x1287c4u;
    // NOP
label_1287c8:
    // 0x1287c8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1287c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1287cc: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x1287ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x1287d0: 0x0  nop
    ctx->pc = 0x1287d0u;
    // NOP
    // 0x1287d4: 0x0  nop
    ctx->pc = 0x1287d4u;
    // NOP
    // 0x1287d8: 0x0  nop
    ctx->pc = 0x1287d8u;
    // NOP
    // 0x1287dc: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1287DCu;
    {
        const bool branch_taken_0x1287dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1287dc) {
            ctx->pc = 0x1287E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1287DCu;
            // 0x1287e0: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1287C8u;
            runtime->cooperativeGuestYield();
            goto label_1287c8;
        }
    }
    ctx->pc = 0x1287E4u;
    // 0x1287e4: 0x8e82ed60  lw          $v0, -0x12A0($s4)
    ctx->pc = 0x1287e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
label_1287e8:
    // 0x1287e8: 0x2631ed68  addiu       $s1, $s1, -0x1298
    ctx->pc = 0x1287e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962536));
    // 0x1287ec: 0xaca4f168  sw          $a0, -0xE98($a1)
    ctx->pc = 0x1287ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294963560), GPR_U32(ctx, 4));
    // 0x1287f0: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x1287f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1287f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1287f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1287f8: 0xae85ed60  sw          $a1, -0x12A0($s4)
    ctx->pc = 0x1287f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294962528), GPR_U32(ctx, 5));
    // 0x1287fc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1287fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x128800: 0x2ca30100  sltiu       $v1, $a1, 0x100
    ctx->pc = 0x128800u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x128804: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x128804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x128808: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x128808u;
    {
        const bool branch_taken_0x128808 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12880Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128808u;
            // 0x12880c: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128808) {
            ctx->pc = 0x128820u;
            goto label_128820;
        }
    }
    ctx->pc = 0x128810u;
    // 0x128810: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x128810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x128814: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x128814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x128818: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x128818u;
    SET_GPR_U32(ctx, 31, 0x128820u);
    ctx->pc = 0x12881Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128818u;
            // 0x12881c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128820u; }
        if (ctx->pc != 0x128820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128820u; }
        if (ctx->pc != 0x128820u) { return; }
    }
    ctx->pc = 0x128820u;
label_128820:
    // 0x128820: 0x26c3bb98  addiu       $v1, $s6, -0x4468
    ctx->pc = 0x128820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294949784));
    // 0x128824: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x128824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x128828: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x128828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12882c: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x12882cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_128830:
    // 0x128830: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x128830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_128834:
    // 0x128834: 0x54400075  bnel        $v0, $zero, . + 4 + (0x75 << 2)
    ctx->pc = 0x128834u;
    {
        const bool branch_taken_0x128834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x128834) {
            ctx->pc = 0x128838u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x128834u;
            // 0x128838: 0x8ea3000c  lw          $v1, 0xC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x128A0Cu;
            goto label_128a0c;
        }
    }
    ctx->pc = 0x12883Cu;
    // 0x12883c: 0x57c00073  bnel        $fp, $zero, . + 4 + (0x73 << 2)
    ctx->pc = 0x12883Cu;
    {
        const bool branch_taken_0x12883c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x12883c) {
            ctx->pc = 0x128840u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12883Cu;
            // 0x128840: 0x8ea3000c  lw          $v1, 0xC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x128A0Cu;
            goto label_128a0c;
        }
    }
    ctx->pc = 0x128844u;
    // 0x128844: 0x8fa3011c  lw          $v1, 0x11C($sp)
    ctx->pc = 0x128844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x128848: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x128848u;
    {
        const bool branch_taken_0x128848 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12884Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128848u;
            // 0x12884c: 0x24160011  addiu       $s6, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128848) {
            ctx->pc = 0x12885Cu;
            goto label_12885c;
        }
    }
    ctx->pc = 0x128850u;
    // 0x128850: 0xc0496d8  jal         func_125B60
    ctx->pc = 0x128850u;
    SET_GPR_U32(ctx, 31, 0x128858u);
    ctx->pc = 0x128854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128850u;
            // 0x128854: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125B60u;
    if (runtime->hasFunction(0x125B60u)) {
        auto targetFn = runtime->lookupFunction(0x125B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128858u; }
        if (ctx->pc != 0x128858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_125b60_0x125bb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128858u; }
        if (ctx->pc != 0x128858u) { return; }
    }
    ctx->pc = 0x128858u;
    // 0x128858: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x128858u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12885c:
    // 0x12885c: 0x3c140033  lui         $s4, 0x33
    ctx->pc = 0x12885cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)51 << 16));
    // 0x128860: 0x8e83ed60  lw          $v1, -0x12A0($s4)
    ctx->pc = 0x128860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
    // 0x128864: 0x2c620100  sltiu       $v0, $v1, 0x100
    ctx->pc = 0x128864u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x128868: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x128868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x12886c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x12886Cu;
    {
        const bool branch_taken_0x12886c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x128870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12886Cu;
            // 0x128870: 0x8eb3006c  lw          $s3, 0x6C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12886c) {
            ctx->pc = 0x128898u;
            goto label_128898;
        }
    }
    ctx->pc = 0x128874u;
    // 0x128874: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x128874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x128878: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x128878u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12887c: 0x2442ed68  addiu       $v0, $v0, -0x1298
    ctx->pc = 0x12887cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962536));
    // 0x128880: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x128880u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x128884: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x128884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x128888: 0x8c84f168  lw          $a0, -0xE98($a0)
    ctx->pc = 0x128888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294963560)));
    // 0x12888c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12888cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x128890: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x128890u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x128894: 0x8e83ed60  lw          $v1, -0x12A0($s4)
    ctx->pc = 0x128894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
label_128898:
    // 0x128898: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x128898u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x12889c: 0x2630ed68  addiu       $s0, $s1, -0x1298
    ctx->pc = 0x12889cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962536));
    // 0x1288a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1288a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1288a4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1288a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1288a8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1288a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1288ac: 0xae83ed60  sw          $v1, -0x12A0($s4)
    ctx->pc = 0x1288acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294962528), GPR_U32(ctx, 3));
    // 0x1288b0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1288b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1288b4: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x1288B4u;
    SET_GPR_U32(ctx, 31, 0x1288BCu);
    ctx->pc = 0x1288B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1288B4u;
            // 0x1288b8: 0xac530000  sw          $s3, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1288BCu; }
        if (ctx->pc != 0x1288BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1288BCu; }
        if (ctx->pc != 0x1288BCu) { return; }
    }
    ctx->pc = 0x1288BCu;
    // 0x1288bc: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x1288bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
    // 0x1288c0: 0x26650018  addiu       $a1, $s3, 0x18
    ctx->pc = 0x1288c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x1288c4: 0x24c4bb98  addiu       $a0, $a2, -0x4468
    ctx->pc = 0x1288c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949784));
    // 0x1288c8: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1288c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1288cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1288ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1288d0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1288d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1288d4: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x1288d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x1288d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1288d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1288dc: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1288dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1288e0: 0x8e82ed60  lw          $v0, -0x12A0($s4)
    ctx->pc = 0x1288e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
    // 0x1288e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1288e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1288e8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1288e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1288ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1288ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1288f0: 0x8c620658  lw          $v0, 0x658($v1)
    ctx->pc = 0x1288f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1624)));
    // 0x1288f4: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1288f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1288f8: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1288f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1288fc: 0x40f809  jalr        $v0
    ctx->pc = 0x1288FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x128904u);
        ctx->pc = 0x128900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1288FCu;
            // 0x128900: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x128904u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x127FF0u: goto label_127ff0;
            case 0x128254u: goto label_128254;
            case 0x12828Cu: goto label_12828c;
            case 0x128290u: goto label_128290;
            case 0x1282BCu: goto label_1282bc;
            case 0x1282C0u: goto label_1282c0;
            case 0x1282C8u: goto label_1282c8;
            case 0x1282F0u: goto label_1282f0;
            case 0x128350u: goto label_128350;
            case 0x128410u: goto label_128410;
            case 0x128424u: goto label_128424;
            case 0x128438u: goto label_128438;
            case 0x128458u: goto label_128458;
            case 0x128480u: goto label_128480;
            case 0x1284A0u: goto label_1284a0;
            case 0x1284DCu: goto label_1284dc;
            case 0x128530u: goto label_128530;
            case 0x1285D8u: goto label_1285d8;
            case 0x1285F8u: goto label_1285f8;
            case 0x128620u: goto label_128620;
            case 0x128640u: goto label_128640;
            case 0x128678u: goto label_128678;
            case 0x128690u: goto label_128690;
            case 0x1286D0u: goto label_1286d0;
            case 0x128768u: goto label_128768;
            case 0x128780u: goto label_128780;
            case 0x1287A0u: goto label_1287a0;
            case 0x1287C8u: goto label_1287c8;
            case 0x1287E8u: goto label_1287e8;
            case 0x128820u: goto label_128820;
            case 0x128830u: goto label_128830;
            case 0x128834u: goto label_128834;
            case 0x12885Cu: goto label_12885c;
            case 0x128898u: goto label_128898;
            case 0x128950u: goto label_128950;
            case 0x128970u: goto label_128970;
            case 0x128998u: goto label_128998;
            case 0x1289B8u: goto label_1289b8;
            case 0x1289F0u: goto label_1289f0;
            case 0x128A08u: goto label_128a08;
            case 0x128A0Cu: goto label_128a0c;
            case 0x128A1Cu: goto label_128a1c;
            case 0x128A48u: goto label_128a48;
            case 0x128A68u: goto label_128a68;
            case 0x128A88u: goto label_128a88;
            case 0x128AD8u: goto label_128ad8;
            case 0x128B90u: goto label_128b90;
            case 0x128BB0u: goto label_128bb0;
            case 0x128BD8u: goto label_128bd8;
            case 0x128BF8u: goto label_128bf8;
            case 0x128C30u: goto label_128c30;
            case 0x128C48u: goto label_128c48;
            case 0x128C68u: goto label_128c68;
            case 0x128C88u: goto label_128c88;
            case 0x128C98u: goto label_128c98;
            case 0x128CC0u: goto label_128cc0;
            case 0x128CE0u: goto label_128ce0;
            case 0x128CF0u: goto label_128cf0;
            case 0x128D38u: goto label_128d38;
            case 0x128DD0u: goto label_128dd0;
            case 0x128DE8u: goto label_128de8;
            case 0x128E04u: goto label_128e04;
            case 0x128E98u: goto label_128e98;
            case 0x128EB0u: goto label_128eb0;
            case 0x128ECCu: goto label_128ecc;
            case 0x128ED0u: goto label_128ed0;
            case 0x128F14u: goto label_128f14;
            case 0x128F48u: goto label_128f48;
            case 0x129090u: goto label_129090;
            case 0x129190u: goto label_129190;
            case 0x1291A8u: goto label_1291a8;
            case 0x1291ACu: goto label_1291ac;
            case 0x1291D0u: goto label_1291d0;
            case 0x129204u: goto label_129204;
            case 0x129220u: goto label_129220;
            case 0x129224u: goto label_129224;
            case 0x129244u: goto label_129244;
            case 0x12927Cu: goto label_12927c;
            case 0x129290u: goto label_129290;
            case 0x1292B0u: goto label_1292b0;
            case 0x1292E0u: goto label_1292e0;
            case 0x129310u: goto label_129310;
            case 0x129324u: goto label_129324;
            case 0x129340u: goto label_129340;
            case 0x129368u: goto label_129368;
            case 0x1293C0u: goto label_1293c0;
            case 0x129438u: goto label_129438;
            case 0x129458u: goto label_129458;
            case 0x1294B0u: goto label_1294b0;
            case 0x1294D8u: goto label_1294d8;
            case 0x1294F0u: goto label_1294f0;
            case 0x129510u: goto label_129510;
            case 0x129538u: goto label_129538;
            case 0x129558u: goto label_129558;
            case 0x129590u: goto label_129590;
            case 0x1295B0u: goto label_1295b0;
            case 0x1295CCu: goto label_1295cc;
            case 0x129608u: goto label_129608;
            case 0x1296C0u: goto label_1296c0;
            case 0x1296E0u: goto label_1296e0;
            case 0x129708u: goto label_129708;
            case 0x129728u: goto label_129728;
            case 0x129760u: goto label_129760;
            case 0x129770u: goto label_129770;
            case 0x129774u: goto label_129774;
            case 0x129790u: goto label_129790;
            case 0x1297B0u: goto label_1297b0;
            case 0x1297C4u: goto label_1297c4;
            case 0x1297E0u: goto label_1297e0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x128904u; }
            if (ctx->pc != 0x128904u) { return; }
        }
        }
    }
    ctx->pc = 0x128904u;
    // 0x128904: 0x8e82ed60  lw          $v0, -0x12A0($s4)
    ctx->pc = 0x128904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
    // 0x128908: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x128908u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12890c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x12890cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x128910: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x128910u;
    SET_GPR_U32(ctx, 31, 0x128918u);
    ctx->pc = 0x128914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128910u;
            // 0x128914: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128918u; }
        if (ctx->pc != 0x128918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128918u; }
        if (ctx->pc != 0x128918u) { return; }
    }
    ctx->pc = 0x128918u;
    // 0x128918: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x128918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x12891c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12891cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128920: 0x8c46f1ac  lw          $a2, -0xE54($v0)
    ctx->pc = 0x128920u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963628)));
    // 0x128924: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x128924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128928: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x128928u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12892c: 0xc049c00  jal         func_127000
    ctx->pc = 0x12892Cu;
    SET_GPR_U32(ctx, 31, 0x128934u);
    ctx->pc = 0x128930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12892Cu;
            // 0x128930: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127000u;
    if (runtime->hasFunction(0x127000u)) {
        auto targetFn = runtime->lookupFunction(0x127000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128934u; }
        if (ctx->pc != 0x128934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127000_0x127000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128934u; }
        if (ctx->pc != 0x128934u) { return; }
    }
    ctx->pc = 0x128934u;
    // 0x128934: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x128934u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x128938: 0x8ca4f168  lw          $a0, -0xE98($a1)
    ctx->pc = 0x128938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294963560)));
    // 0x12893c: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x12893cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x128940: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x128940u;
    {
        const bool branch_taken_0x128940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x128944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128940u;
            // 0x128944: 0x24820008  addiu       $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128940) {
            ctx->pc = 0x128970u;
            goto label_128970;
        }
    }
    ctx->pc = 0x128948u;
    // 0x128948: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x128948u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x12894c: 0x0  nop
    ctx->pc = 0x12894cu;
    // NOP
label_128950:
    // 0x128950: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x128950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x128954: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x128954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x128958: 0x0  nop
    ctx->pc = 0x128958u;
    // NOP
    // 0x12895c: 0x0  nop
    ctx->pc = 0x12895cu;
    // NOP
    // 0x128960: 0x0  nop
    ctx->pc = 0x128960u;
    // NOP
    // 0x128964: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x128964u;
    {
        const bool branch_taken_0x128964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x128964) {
            ctx->pc = 0x128968u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x128964u;
            // 0x128968: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x128950u;
            runtime->cooperativeGuestYield();
            goto label_128950;
        }
    }
    ctx->pc = 0x12896Cu;
    // 0x12896c: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x12896cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_128970:
    // 0x128970: 0x3c036000  lui         $v1, 0x6000
    ctx->pc = 0x128970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24576 << 16));
    // 0x128974: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x128974u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x128978: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x128978u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x12897c: 0xaca2f168  sw          $v0, -0xE98($a1)
    ctx->pc = 0x12897cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294963560), GPR_U32(ctx, 2));
    // 0x128980: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x128980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128984: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x128984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x128988: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x128988u;
    {
        const bool branch_taken_0x128988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12898Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128988u;
            // 0x12898c: 0x8e82ed60  lw          $v0, -0x12A0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128988) {
            ctx->pc = 0x1289B8u;
            goto label_1289b8;
        }
    }
    ctx->pc = 0x128990u;
    // 0x128990: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x128990u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x128994: 0x0  nop
    ctx->pc = 0x128994u;
    // NOP
label_128998:
    // 0x128998: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x128998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x12899c: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x12899cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x1289a0: 0x0  nop
    ctx->pc = 0x1289a0u;
    // NOP
    // 0x1289a4: 0x0  nop
    ctx->pc = 0x1289a4u;
    // NOP
    // 0x1289a8: 0x0  nop
    ctx->pc = 0x1289a8u;
    // NOP
    // 0x1289ac: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1289ACu;
    {
        const bool branch_taken_0x1289ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1289ac) {
            ctx->pc = 0x1289B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1289ACu;
            // 0x1289b0: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x128998u;
            runtime->cooperativeGuestYield();
            goto label_128998;
        }
    }
    ctx->pc = 0x1289B4u;
    // 0x1289b4: 0x8e82ed60  lw          $v0, -0x12A0($s4)
    ctx->pc = 0x1289b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
label_1289b8:
    // 0x1289b8: 0x2631ed68  addiu       $s1, $s1, -0x1298
    ctx->pc = 0x1289b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962536));
    // 0x1289bc: 0xaca4f168  sw          $a0, -0xE98($a1)
    ctx->pc = 0x1289bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294963560), GPR_U32(ctx, 4));
    // 0x1289c0: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x1289c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1289c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1289c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1289c8: 0xae85ed60  sw          $a1, -0x12A0($s4)
    ctx->pc = 0x1289c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294962528), GPR_U32(ctx, 5));
    // 0x1289cc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1289ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1289d0: 0x2ca30100  sltiu       $v1, $a1, 0x100
    ctx->pc = 0x1289d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1289d4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1289d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1289d8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1289D8u;
    {
        const bool branch_taken_0x1289d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1289DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1289D8u;
            // 0x1289dc: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1289d8) {
            ctx->pc = 0x1289F0u;
            goto label_1289f0;
        }
    }
    ctx->pc = 0x1289E0u;
    // 0x1289e0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1289e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1289e4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1289e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1289e8: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x1289E8u;
    SET_GPR_U32(ctx, 31, 0x1289F0u);
    ctx->pc = 0x1289ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1289E8u;
            // 0x1289ec: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1289F0u; }
        if (ctx->pc != 0x1289F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1289F0u; }
        if (ctx->pc != 0x1289F0u) { return; }
    }
    ctx->pc = 0x1289F0u;
label_1289f0:
    // 0x1289f0: 0x3c07002d  lui         $a3, 0x2D
    ctx->pc = 0x1289f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)45 << 16));
    // 0x1289f4: 0x24e3bb98  addiu       $v1, $a3, -0x4468
    ctx->pc = 0x1289f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949784));
    // 0x1289f8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1289f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1289fc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1289fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x128a00: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x128a00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x128a04: 0x0  nop
    ctx->pc = 0x128a04u;
    // NOP
label_128a08:
    // 0x128a08: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x128a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_128a0c:
    // 0x128a0c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x128a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x128a10: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x128a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x128a14: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x128a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x128a18: 0xaea3000c  sw          $v1, 0xC($s5)
    ctx->pc = 0x128a18u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 3));
label_128a1c:
    // 0x128a1c: 0x8faa0118  lw          $t2, 0x118($sp)
    ctx->pc = 0x128a1cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x128a20: 0x51400368  beql        $t2, $zero, . + 4 + (0x368 << 2)
    ctx->pc = 0x128A20u;
    {
        const bool branch_taken_0x128a20 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x128a20) {
            ctx->pc = 0x128A24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x128A20u;
            // 0x128a24: 0x8ea20110  lw          $v0, 0x110($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 272)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1297C4u;
            goto label_1297c4;
        }
    }
    ctx->pc = 0x128A28u;
    // 0x128a28: 0x8e440080  lw          $a0, 0x80($s2)
    ctx->pc = 0x128a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x128a2c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x128A2Cu;
    {
        const bool branch_taken_0x128a2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x128a2c) {
            ctx->pc = 0x128A30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x128A2Cu;
            // 0x128a30: 0x8ea20060  lw          $v0, 0x60($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x128A48u;
            goto label_128a48;
        }
    }
    ctx->pc = 0x128A34u;
    // 0x128a34: 0xc059afa  jal         func_166BE8
    ctx->pc = 0x128A34u;
    SET_GPR_U32(ctx, 31, 0x128A3Cu);
    ctx->pc = 0x166BE8u;
    if (runtime->hasFunction(0x166BE8u)) {
        auto targetFn = runtime->lookupFunction(0x166BE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128A3Cu; }
        if (ctx->pc != 0x128A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166BE8_0x166be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128A3Cu; }
        if (ctx->pc != 0x128A3Cu) { return; }
    }
    ctx->pc = 0x128A3Cu;
    // 0x128a3c: 0xc059b16  jal         func_166C58
    ctx->pc = 0x128A3Cu;
    SET_GPR_U32(ctx, 31, 0x128A44u);
    ctx->pc = 0x128A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128A3Cu;
            // 0x128a40: 0x8e440080  lw          $a0, 0x80($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166C58u;
    if (runtime->hasFunction(0x166C58u)) {
        auto targetFn = runtime->lookupFunction(0x166C58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128A44u; }
        if (ctx->pc != 0x128A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166C58_0x166c58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128A44u; }
        if (ctx->pc != 0x128A44u) { return; }
    }
    ctx->pc = 0x128A44u;
    // 0x128a44: 0x8ea20060  lw          $v0, 0x60($s5)
    ctx->pc = 0x128a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
label_128a48:
    // 0x128a48: 0x3c160033  lui         $s6, 0x33
    ctx->pc = 0x128a48u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)51 << 16));
    // 0x128a4c: 0x8ec3f168  lw          $v1, -0xE98($s6)
    ctx->pc = 0x128a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294963560)));
    // 0x128a50: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x128a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x128a54: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x128a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x128a58: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x128A58u;
    {
        const bool branch_taken_0x128a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x128A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128A58u;
            // 0x128a5c: 0x3c025000  lui         $v0, 0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128a58) {
            ctx->pc = 0x128A88u;
            goto label_128a88;
        }
    }
    ctx->pc = 0x128A60u;
    // 0x128a60: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x128a60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x128a64: 0x0  nop
    ctx->pc = 0x128a64u;
    // NOP
label_128a68:
    // 0x128a68: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x128a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x128a6c: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x128a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x128a70: 0x0  nop
    ctx->pc = 0x128a70u;
    // NOP
    // 0x128a74: 0x0  nop
    ctx->pc = 0x128a74u;
    // NOP
    // 0x128a78: 0x0  nop
    ctx->pc = 0x128a78u;
    // NOP
    // 0x128a7c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x128A7Cu;
    {
        const bool branch_taken_0x128a7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x128a7c) {
            ctx->pc = 0x128A80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x128A7Cu;
            // 0x128a80: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x128A68u;
            runtime->cooperativeGuestYield();
            goto label_128a68;
        }
    }
    ctx->pc = 0x128A84u;
    // 0x128a84: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x128a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
label_128a88:
    // 0x128a88: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x128a88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x128a8c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x128a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x128a90: 0x24650008  addiu       $a1, $v1, 0x8
    ctx->pc = 0x128a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x128a94: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x128a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x128a98: 0x1040007f  beqz        $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x128A98u;
    {
        const bool branch_taken_0x128a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x128A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128A98u;
            // 0x128a9c: 0xaec5f168  sw          $a1, -0xE98($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4294963560), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128a98) {
            ctx->pc = 0x128C98u;
            goto label_128c98;
        }
    }
    ctx->pc = 0x128AA0u;
    // 0x128aa0: 0x13c00069  beqz        $fp, . + 4 + (0x69 << 2)
    ctx->pc = 0x128AA0u;
    {
        const bool branch_taken_0x128aa0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x128AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128AA0u;
            // 0x128aa4: 0x3c140033  lui         $s4, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128aa0) {
            ctx->pc = 0x128C48u;
            goto label_128c48;
        }
    }
    ctx->pc = 0x128AA8u;
    // 0x128aa8: 0x8e83ed60  lw          $v1, -0x12A0($s4)
    ctx->pc = 0x128aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
    // 0x128aac: 0x2c620100  sltiu       $v0, $v1, 0x100
    ctx->pc = 0x128aacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x128ab0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x128ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x128ab4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x128AB4u;
    {
        const bool branch_taken_0x128ab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x128AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128AB4u;
            // 0x128ab8: 0x8eb30064  lw          $s3, 0x64($s5) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128ab4) {
            ctx->pc = 0x128AD8u;
            goto label_128ad8;
        }
    }
    ctx->pc = 0x128ABCu;
    // 0x128abc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x128abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x128ac0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x128ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x128ac4: 0x2442ed68  addiu       $v0, $v0, -0x1298
    ctx->pc = 0x128ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962536));
    // 0x128ac8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x128ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x128acc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x128accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x128ad0: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x128ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x128ad4: 0x8e83ed60  lw          $v1, -0x12A0($s4)
    ctx->pc = 0x128ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
label_128ad8:
    // 0x128ad8: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x128ad8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x128adc: 0x2630ed68  addiu       $s0, $s1, -0x1298
    ctx->pc = 0x128adcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962536));
    // 0x128ae0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x128ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128ae4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x128ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x128ae8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x128ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x128aec: 0xae83ed60  sw          $v1, -0x12A0($s4)
    ctx->pc = 0x128aecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294962528), GPR_U32(ctx, 3));
    // 0x128af0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x128af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x128af4: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x128AF4u;
    SET_GPR_U32(ctx, 31, 0x128AFCu);
    ctx->pc = 0x128AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128AF4u;
            // 0x128af8: 0xac530000  sw          $s3, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128AFCu; }
        if (ctx->pc != 0x128AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128AFCu; }
        if (ctx->pc != 0x128AFCu) { return; }
    }
    ctx->pc = 0x128AFCu;
    // 0x128afc: 0x3c03002d  lui         $v1, 0x2D
    ctx->pc = 0x128afcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
    // 0x128b00: 0x26650018  addiu       $a1, $s3, 0x18
    ctx->pc = 0x128b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x128b04: 0x2464bb98  addiu       $a0, $v1, -0x4468
    ctx->pc = 0x128b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949784));
    // 0x128b08: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x128b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x128b0c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x128b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x128b10: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x128b10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x128b14: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x128b14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x128b18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x128b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x128b1c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x128b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x128b20: 0x8e82ed60  lw          $v0, -0x12A0($s4)
    ctx->pc = 0x128b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
    // 0x128b24: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x128b24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x128b28: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x128b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x128b2c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x128b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x128b30: 0x8c620658  lw          $v0, 0x658($v1)
    ctx->pc = 0x128b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1624)));
    // 0x128b34: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x128b34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x128b38: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x128b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x128b3c: 0x40f809  jalr        $v0
    ctx->pc = 0x128B3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x128B44u);
        ctx->pc = 0x128B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128B3Cu;
            // 0x128b40: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x128B44u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x127FF0u: goto label_127ff0;
            case 0x128254u: goto label_128254;
            case 0x12828Cu: goto label_12828c;
            case 0x128290u: goto label_128290;
            case 0x1282BCu: goto label_1282bc;
            case 0x1282C0u: goto label_1282c0;
            case 0x1282C8u: goto label_1282c8;
            case 0x1282F0u: goto label_1282f0;
            case 0x128350u: goto label_128350;
            case 0x128410u: goto label_128410;
            case 0x128424u: goto label_128424;
            case 0x128438u: goto label_128438;
            case 0x128458u: goto label_128458;
            case 0x128480u: goto label_128480;
            case 0x1284A0u: goto label_1284a0;
            case 0x1284DCu: goto label_1284dc;
            case 0x128530u: goto label_128530;
            case 0x1285D8u: goto label_1285d8;
            case 0x1285F8u: goto label_1285f8;
            case 0x128620u: goto label_128620;
            case 0x128640u: goto label_128640;
            case 0x128678u: goto label_128678;
            case 0x128690u: goto label_128690;
            case 0x1286D0u: goto label_1286d0;
            case 0x128768u: goto label_128768;
            case 0x128780u: goto label_128780;
            case 0x1287A0u: goto label_1287a0;
            case 0x1287C8u: goto label_1287c8;
            case 0x1287E8u: goto label_1287e8;
            case 0x128820u: goto label_128820;
            case 0x128830u: goto label_128830;
            case 0x128834u: goto label_128834;
            case 0x12885Cu: goto label_12885c;
            case 0x128898u: goto label_128898;
            case 0x128950u: goto label_128950;
            case 0x128970u: goto label_128970;
            case 0x128998u: goto label_128998;
            case 0x1289B8u: goto label_1289b8;
            case 0x1289F0u: goto label_1289f0;
            case 0x128A08u: goto label_128a08;
            case 0x128A0Cu: goto label_128a0c;
            case 0x128A1Cu: goto label_128a1c;
            case 0x128A48u: goto label_128a48;
            case 0x128A68u: goto label_128a68;
            case 0x128A88u: goto label_128a88;
            case 0x128AD8u: goto label_128ad8;
            case 0x128B90u: goto label_128b90;
            case 0x128BB0u: goto label_128bb0;
            case 0x128BD8u: goto label_128bd8;
            case 0x128BF8u: goto label_128bf8;
            case 0x128C30u: goto label_128c30;
            case 0x128C48u: goto label_128c48;
            case 0x128C68u: goto label_128c68;
            case 0x128C88u: goto label_128c88;
            case 0x128C98u: goto label_128c98;
            case 0x128CC0u: goto label_128cc0;
            case 0x128CE0u: goto label_128ce0;
            case 0x128CF0u: goto label_128cf0;
            case 0x128D38u: goto label_128d38;
            case 0x128DD0u: goto label_128dd0;
            case 0x128DE8u: goto label_128de8;
            case 0x128E04u: goto label_128e04;
            case 0x128E98u: goto label_128e98;
            case 0x128EB0u: goto label_128eb0;
            case 0x128ECCu: goto label_128ecc;
            case 0x128ED0u: goto label_128ed0;
            case 0x128F14u: goto label_128f14;
            case 0x128F48u: goto label_128f48;
            case 0x129090u: goto label_129090;
            case 0x129190u: goto label_129190;
            case 0x1291A8u: goto label_1291a8;
            case 0x1291ACu: goto label_1291ac;
            case 0x1291D0u: goto label_1291d0;
            case 0x129204u: goto label_129204;
            case 0x129220u: goto label_129220;
            case 0x129224u: goto label_129224;
            case 0x129244u: goto label_129244;
            case 0x12927Cu: goto label_12927c;
            case 0x129290u: goto label_129290;
            case 0x1292B0u: goto label_1292b0;
            case 0x1292E0u: goto label_1292e0;
            case 0x129310u: goto label_129310;
            case 0x129324u: goto label_129324;
            case 0x129340u: goto label_129340;
            case 0x129368u: goto label_129368;
            case 0x1293C0u: goto label_1293c0;
            case 0x129438u: goto label_129438;
            case 0x129458u: goto label_129458;
            case 0x1294B0u: goto label_1294b0;
            case 0x1294D8u: goto label_1294d8;
            case 0x1294F0u: goto label_1294f0;
            case 0x129510u: goto label_129510;
            case 0x129538u: goto label_129538;
            case 0x129558u: goto label_129558;
            case 0x129590u: goto label_129590;
            case 0x1295B0u: goto label_1295b0;
            case 0x1295CCu: goto label_1295cc;
            case 0x129608u: goto label_129608;
            case 0x1296C0u: goto label_1296c0;
            case 0x1296E0u: goto label_1296e0;
            case 0x129708u: goto label_129708;
            case 0x129728u: goto label_129728;
            case 0x129760u: goto label_129760;
            case 0x129770u: goto label_129770;
            case 0x129774u: goto label_129774;
            case 0x129790u: goto label_129790;
            case 0x1297B0u: goto label_1297b0;
            case 0x1297C4u: goto label_1297c4;
            case 0x1297E0u: goto label_1297e0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x128B44u; }
            if (ctx->pc != 0x128B44u) { return; }
        }
        }
    }
    ctx->pc = 0x128B44u;
    // 0x128b44: 0x8e82ed60  lw          $v0, -0x12A0($s4)
    ctx->pc = 0x128b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
    // 0x128b48: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x128b48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x128b4c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x128b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x128b50: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x128B50u;
    SET_GPR_U32(ctx, 31, 0x128B58u);
    ctx->pc = 0x128B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128B50u;
            // 0x128b54: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128B58u; }
        if (ctx->pc != 0x128B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128B58u; }
        if (ctx->pc != 0x128B58u) { return; }
    }
    ctx->pc = 0x128B58u;
    // 0x128b58: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x128b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x128b5c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x128b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128b60: 0x8c45f1ac  lw          $a1, -0xE54($v0)
    ctx->pc = 0x128b60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963628)));
    // 0x128b64: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x128b64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128b68: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x128b68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128b6c: 0xc049b3e  jal         func_126CF8
    ctx->pc = 0x128B6Cu;
    SET_GPR_U32(ctx, 31, 0x128B74u);
    ctx->pc = 0x128B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128B6Cu;
            // 0x128b70: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126CF8u;
    if (runtime->hasFunction(0x126CF8u)) {
        auto targetFn = runtime->lookupFunction(0x126CF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128B74u; }
        if (ctx->pc != 0x128B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126CF8_0x126cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128B74u; }
        if (ctx->pc != 0x128B74u) { return; }
    }
    ctx->pc = 0x128B74u;
    // 0x128b74: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x128b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128b78: 0x8ca4f168  lw          $a0, -0xE98($a1)
    ctx->pc = 0x128b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294963560)));
    // 0x128b7c: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x128b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x128b80: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x128B80u;
    {
        const bool branch_taken_0x128b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x128B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128B80u;
            // 0x128b84: 0x24820008  addiu       $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128b80) {
            ctx->pc = 0x128BB0u;
            goto label_128bb0;
        }
    }
    ctx->pc = 0x128B88u;
    // 0x128b88: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x128b88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x128b8c: 0x0  nop
    ctx->pc = 0x128b8cu;
    // NOP
label_128b90:
    // 0x128b90: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x128b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x128b94: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x128b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x128b98: 0x0  nop
    ctx->pc = 0x128b98u;
    // NOP
    // 0x128b9c: 0x0  nop
    ctx->pc = 0x128b9cu;
    // NOP
    // 0x128ba0: 0x0  nop
    ctx->pc = 0x128ba0u;
    // NOP
    // 0x128ba4: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x128BA4u;
    {
        const bool branch_taken_0x128ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x128ba4) {
            ctx->pc = 0x128BA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x128BA4u;
            // 0x128ba8: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x128B90u;
            runtime->cooperativeGuestYield();
            goto label_128b90;
        }
    }
    ctx->pc = 0x128BACu;
    // 0x128bac: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x128bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_128bb0:
    // 0x128bb0: 0x3c036000  lui         $v1, 0x6000
    ctx->pc = 0x128bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24576 << 16));
    // 0x128bb4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x128bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x128bb8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x128bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x128bbc: 0xaca2f168  sw          $v0, -0xE98($a1)
    ctx->pc = 0x128bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294963560), GPR_U32(ctx, 2));
    // 0x128bc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x128bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128bc4: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x128bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x128bc8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x128BC8u;
    {
        const bool branch_taken_0x128bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x128BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128BC8u;
            // 0x128bcc: 0x8e82ed60  lw          $v0, -0x12A0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128bc8) {
            ctx->pc = 0x128BF8u;
            goto label_128bf8;
        }
    }
    ctx->pc = 0x128BD0u;
    // 0x128bd0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x128bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x128bd4: 0x0  nop
    ctx->pc = 0x128bd4u;
    // NOP
label_128bd8:
    // 0x128bd8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x128bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x128bdc: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x128bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x128be0: 0x0  nop
    ctx->pc = 0x128be0u;
    // NOP
    // 0x128be4: 0x0  nop
    ctx->pc = 0x128be4u;
    // NOP
    // 0x128be8: 0x0  nop
    ctx->pc = 0x128be8u;
    // NOP
    // 0x128bec: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x128BECu;
    {
        const bool branch_taken_0x128bec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x128bec) {
            ctx->pc = 0x128BF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x128BECu;
            // 0x128bf0: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x128BD8u;
            runtime->cooperativeGuestYield();
            goto label_128bd8;
        }
    }
    ctx->pc = 0x128BF4u;
    // 0x128bf4: 0x8e82ed60  lw          $v0, -0x12A0($s4)
    ctx->pc = 0x128bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
label_128bf8:
    // 0x128bf8: 0x2631ed68  addiu       $s1, $s1, -0x1298
    ctx->pc = 0x128bf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962536));
    // 0x128bfc: 0xaca4f168  sw          $a0, -0xE98($a1)
    ctx->pc = 0x128bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294963560), GPR_U32(ctx, 4));
    // 0x128c00: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x128c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x128c04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x128c04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x128c08: 0xae85ed60  sw          $a1, -0x12A0($s4)
    ctx->pc = 0x128c08u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294962528), GPR_U32(ctx, 5));
    // 0x128c0c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x128c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x128c10: 0x2ca30100  sltiu       $v1, $a1, 0x100
    ctx->pc = 0x128c10u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x128c14: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x128c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x128c18: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x128C18u;
    {
        const bool branch_taken_0x128c18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x128C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128C18u;
            // 0x128c1c: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128c18) {
            ctx->pc = 0x128C30u;
            goto label_128c30;
        }
    }
    ctx->pc = 0x128C20u;
    // 0x128c20: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x128c20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x128c24: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x128c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x128c28: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x128C28u;
    SET_GPR_U32(ctx, 31, 0x128C30u);
    ctx->pc = 0x128C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128C28u;
            // 0x128c2c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128C30u; }
        if (ctx->pc != 0x128C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128C30u; }
        if (ctx->pc != 0x128C30u) { return; }
    }
    ctx->pc = 0x128C30u;
label_128c30:
    // 0x128c30: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x128c30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
    // 0x128c34: 0x24c3bb98  addiu       $v1, $a2, -0x4468
    ctx->pc = 0x128c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949784));
    // 0x128c38: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x128c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x128c3c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x128c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x128c40: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x128c40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x128c44: 0x0  nop
    ctx->pc = 0x128c44u;
    // NOP
label_128c48:
    // 0x128c48: 0x8ea20064  lw          $v0, 0x64($s5)
    ctx->pc = 0x128c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 100)));
    // 0x128c4c: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x128c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x128c50: 0x8cc4f168  lw          $a0, -0xE98($a2)
    ctx->pc = 0x128c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294963560)));
    // 0x128c54: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x128c54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x128c58: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x128c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x128c5c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x128C5Cu;
    {
        const bool branch_taken_0x128c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x128C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128C5Cu;
            // 0x128c60: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128c5c) {
            ctx->pc = 0x128C88u;
            goto label_128c88;
        }
    }
    ctx->pc = 0x128C64u;
    // 0x128c64: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x128c64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_128c68:
    // 0x128c68: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x128c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x128c6c: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x128c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x128c70: 0x0  nop
    ctx->pc = 0x128c70u;
    // NOP
    // 0x128c74: 0x0  nop
    ctx->pc = 0x128c74u;
    // NOP
    // 0x128c78: 0x0  nop
    ctx->pc = 0x128c78u;
    // NOP
    // 0x128c7c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x128C7Cu;
    {
        const bool branch_taken_0x128c7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x128c7c) {
            ctx->pc = 0x128C80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x128C7Cu;
            // 0x128c80: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x128C68u;
            runtime->cooperativeGuestYield();
            goto label_128c68;
        }
    }
    ctx->pc = 0x128C84u;
    // 0x128c84: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x128c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_128c88:
    // 0x128c88: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x128c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x128c8c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x128c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x128c90: 0xacc3f168  sw          $v1, -0xE98($a2)
    ctx->pc = 0x128c90u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294963560), GPR_U32(ctx, 3));
    // 0x128c94: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x128c94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
label_128c98:
    // 0x128c98: 0x8fa70120  lw          $a3, 0x120($sp)
    ctx->pc = 0x128c98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x128c9c: 0x10e00014  beqz        $a3, . + 4 + (0x14 << 2)
    ctx->pc = 0x128C9Cu;
    {
        const bool branch_taken_0x128c9c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x128CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128C9Cu;
            // 0x128ca0: 0x3c060033  lui         $a2, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128c9c) {
            ctx->pc = 0x128CF0u;
            goto label_128cf0;
        }
    }
    ctx->pc = 0x128CA4u;
    // 0x128ca4: 0x8ea20068  lw          $v0, 0x68($s5)
    ctx->pc = 0x128ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
    // 0x128ca8: 0x8cc4f168  lw          $a0, -0xE98($a2)
    ctx->pc = 0x128ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294963560)));
    // 0x128cac: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x128cacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x128cb0: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x128cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x128cb4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x128CB4u;
    {
        const bool branch_taken_0x128cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x128CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128CB4u;
            // 0x128cb8: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128cb4) {
            ctx->pc = 0x128CE0u;
            goto label_128ce0;
        }
    }
    ctx->pc = 0x128CBCu;
    // 0x128cbc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x128cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_128cc0:
    // 0x128cc0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x128cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x128cc4: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x128cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x128cc8: 0x0  nop
    ctx->pc = 0x128cc8u;
    // NOP
    // 0x128ccc: 0x0  nop
    ctx->pc = 0x128cccu;
    // NOP
    // 0x128cd0: 0x0  nop
    ctx->pc = 0x128cd0u;
    // NOP
    // 0x128cd4: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x128CD4u;
    {
        const bool branch_taken_0x128cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x128cd4) {
            ctx->pc = 0x128CD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x128CD4u;
            // 0x128cd8: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x128CC0u;
            runtime->cooperativeGuestYield();
            goto label_128cc0;
        }
    }
    ctx->pc = 0x128CDCu;
    // 0x128cdc: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x128cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_128ce0:
    // 0x128ce0: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x128ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x128ce4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x128ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x128ce8: 0xacc3f168  sw          $v1, -0xE98($a2)
    ctx->pc = 0x128ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294963560), GPR_U32(ctx, 3));
    // 0x128cec: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x128cecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
label_128cf0:
    // 0x128cf0: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x128cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x128cf4: 0x1040022e  beqz        $v0, . + 4 + (0x22E << 2)
    ctx->pc = 0x128CF4u;
    {
        const bool branch_taken_0x128cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x128CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128CF4u;
            // 0x128cf8: 0x3c140033  lui         $s4, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128cf4) {
            ctx->pc = 0x1295B0u;
            goto label_1295b0;
        }
    }
    ctx->pc = 0x128CFCu;
    // 0x128cfc: 0x8e83ed60  lw          $v1, -0x12A0($s4)
    ctx->pc = 0x128cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
    // 0x128d00: 0x2c620100  sltiu       $v0, $v1, 0x100
    ctx->pc = 0x128d00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x128d04: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x128d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x128d08: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x128D08u;
    {
        const bool branch_taken_0x128d08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x128D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128D08u;
            // 0x128d0c: 0x8eb3006c  lw          $s3, 0x6C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128d08) {
            ctx->pc = 0x128D38u;
            goto label_128d38;
        }
    }
    ctx->pc = 0x128D10u;
    // 0x128d10: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x128d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x128d14: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x128d14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x128d18: 0x2442ed68  addiu       $v0, $v0, -0x1298
    ctx->pc = 0x128d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962536));
    // 0x128d1c: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x128d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x128d20: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x128d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x128d24: 0x8c84f168  lw          $a0, -0xE98($a0)
    ctx->pc = 0x128d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294963560)));
    // 0x128d28: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x128d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x128d2c: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x128d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x128d30: 0x8e83ed60  lw          $v1, -0x12A0($s4)
    ctx->pc = 0x128d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
    // 0x128d34: 0x0  nop
    ctx->pc = 0x128d34u;
    // NOP
label_128d38:
    // 0x128d38: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x128d38u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x128d3c: 0x2630ed68  addiu       $s0, $s1, -0x1298
    ctx->pc = 0x128d3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962536));
    // 0x128d40: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x128d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128d44: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x128d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x128d48: 0x3c16002d  lui         $s6, 0x2D
    ctx->pc = 0x128d48u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)45 << 16));
    // 0x128d4c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x128d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x128d50: 0xae83ed60  sw          $v1, -0x12A0($s4)
    ctx->pc = 0x128d50u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294962528), GPR_U32(ctx, 3));
    // 0x128d54: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x128d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x128d58: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x128D58u;
    SET_GPR_U32(ctx, 31, 0x128D60u);
    ctx->pc = 0x128D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128D58u;
            // 0x128d5c: 0xac530000  sw          $s3, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128D60u; }
        if (ctx->pc != 0x128D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128D60u; }
        if (ctx->pc != 0x128D60u) { return; }
    }
    ctx->pc = 0x128D60u;
    // 0x128d60: 0x26650018  addiu       $a1, $s3, 0x18
    ctx->pc = 0x128d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x128d64: 0x26c4bb98  addiu       $a0, $s6, -0x4468
    ctx->pc = 0x128d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294949784));
    // 0x128d68: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x128d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x128d6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x128d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x128d70: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x128d70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x128d74: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x128d74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x128d78: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x128d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x128d7c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x128d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x128d80: 0x8e82ed60  lw          $v0, -0x12A0($s4)
    ctx->pc = 0x128d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
    // 0x128d84: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x128d84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x128d88: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x128d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x128d8c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x128d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x128d90: 0x8c620658  lw          $v0, 0x658($v1)
    ctx->pc = 0x128d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1624)));
    // 0x128d94: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x128d94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x128d98: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x128d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x128d9c: 0x40f809  jalr        $v0
    ctx->pc = 0x128D9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x128DA4u);
        ctx->pc = 0x128DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128D9Cu;
            // 0x128da0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x128DA4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x127FF0u: goto label_127ff0;
            case 0x128254u: goto label_128254;
            case 0x12828Cu: goto label_12828c;
            case 0x128290u: goto label_128290;
            case 0x1282BCu: goto label_1282bc;
            case 0x1282C0u: goto label_1282c0;
            case 0x1282C8u: goto label_1282c8;
            case 0x1282F0u: goto label_1282f0;
            case 0x128350u: goto label_128350;
            case 0x128410u: goto label_128410;
            case 0x128424u: goto label_128424;
            case 0x128438u: goto label_128438;
            case 0x128458u: goto label_128458;
            case 0x128480u: goto label_128480;
            case 0x1284A0u: goto label_1284a0;
            case 0x1284DCu: goto label_1284dc;
            case 0x128530u: goto label_128530;
            case 0x1285D8u: goto label_1285d8;
            case 0x1285F8u: goto label_1285f8;
            case 0x128620u: goto label_128620;
            case 0x128640u: goto label_128640;
            case 0x128678u: goto label_128678;
            case 0x128690u: goto label_128690;
            case 0x1286D0u: goto label_1286d0;
            case 0x128768u: goto label_128768;
            case 0x128780u: goto label_128780;
            case 0x1287A0u: goto label_1287a0;
            case 0x1287C8u: goto label_1287c8;
            case 0x1287E8u: goto label_1287e8;
            case 0x128820u: goto label_128820;
            case 0x128830u: goto label_128830;
            case 0x128834u: goto label_128834;
            case 0x12885Cu: goto label_12885c;
            case 0x128898u: goto label_128898;
            case 0x128950u: goto label_128950;
            case 0x128970u: goto label_128970;
            case 0x128998u: goto label_128998;
            case 0x1289B8u: goto label_1289b8;
            case 0x1289F0u: goto label_1289f0;
            case 0x128A08u: goto label_128a08;
            case 0x128A0Cu: goto label_128a0c;
            case 0x128A1Cu: goto label_128a1c;
            case 0x128A48u: goto label_128a48;
            case 0x128A68u: goto label_128a68;
            case 0x128A88u: goto label_128a88;
            case 0x128AD8u: goto label_128ad8;
            case 0x128B90u: goto label_128b90;
            case 0x128BB0u: goto label_128bb0;
            case 0x128BD8u: goto label_128bd8;
            case 0x128BF8u: goto label_128bf8;
            case 0x128C30u: goto label_128c30;
            case 0x128C48u: goto label_128c48;
            case 0x128C68u: goto label_128c68;
            case 0x128C88u: goto label_128c88;
            case 0x128C98u: goto label_128c98;
            case 0x128CC0u: goto label_128cc0;
            case 0x128CE0u: goto label_128ce0;
            case 0x128CF0u: goto label_128cf0;
            case 0x128D38u: goto label_128d38;
            case 0x128DD0u: goto label_128dd0;
            case 0x128DE8u: goto label_128de8;
            case 0x128E04u: goto label_128e04;
            case 0x128E98u: goto label_128e98;
            case 0x128EB0u: goto label_128eb0;
            case 0x128ECCu: goto label_128ecc;
            case 0x128ED0u: goto label_128ed0;
            case 0x128F14u: goto label_128f14;
            case 0x128F48u: goto label_128f48;
            case 0x129090u: goto label_129090;
            case 0x129190u: goto label_129190;
            case 0x1291A8u: goto label_1291a8;
            case 0x1291ACu: goto label_1291ac;
            case 0x1291D0u: goto label_1291d0;
            case 0x129204u: goto label_129204;
            case 0x129220u: goto label_129220;
            case 0x129224u: goto label_129224;
            case 0x129244u: goto label_129244;
            case 0x12927Cu: goto label_12927c;
            case 0x129290u: goto label_129290;
            case 0x1292B0u: goto label_1292b0;
            case 0x1292E0u: goto label_1292e0;
            case 0x129310u: goto label_129310;
            case 0x129324u: goto label_129324;
            case 0x129340u: goto label_129340;
            case 0x129368u: goto label_129368;
            case 0x1293C0u: goto label_1293c0;
            case 0x129438u: goto label_129438;
            case 0x129458u: goto label_129458;
            case 0x1294B0u: goto label_1294b0;
            case 0x1294D8u: goto label_1294d8;
            case 0x1294F0u: goto label_1294f0;
            case 0x129510u: goto label_129510;
            case 0x129538u: goto label_129538;
            case 0x129558u: goto label_129558;
            case 0x129590u: goto label_129590;
            case 0x1295B0u: goto label_1295b0;
            case 0x1295CCu: goto label_1295cc;
            case 0x129608u: goto label_129608;
            case 0x1296C0u: goto label_1296c0;
            case 0x1296E0u: goto label_1296e0;
            case 0x129708u: goto label_129708;
            case 0x129728u: goto label_129728;
            case 0x129760u: goto label_129760;
            case 0x129770u: goto label_129770;
            case 0x129774u: goto label_129774;
            case 0x129790u: goto label_129790;
            case 0x1297B0u: goto label_1297b0;
            case 0x1297C4u: goto label_1297c4;
            case 0x1297E0u: goto label_1297e0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x128DA4u; }
            if (ctx->pc != 0x128DA4u) { return; }
        }
        }
    }
    ctx->pc = 0x128DA4u;
    // 0x128da4: 0x8e82ed60  lw          $v0, -0x12A0($s4)
    ctx->pc = 0x128da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
    // 0x128da8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x128da8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x128dac: 0x26f30360  addiu       $s3, $s7, 0x360
    ctx->pc = 0x128dacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 864));
    // 0x128db0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x128db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x128db4: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x128DB4u;
    SET_GPR_U32(ctx, 31, 0x128DBCu);
    ctx->pc = 0x128DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128DB4u;
            // 0x128db8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128DBCu; }
        if (ctx->pc != 0x128DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128DBCu; }
        if (ctx->pc != 0x128DBCu) { return; }
    }
    ctx->pc = 0x128DBCu;
    // 0x128dbc: 0x8ee40360  lw          $a0, 0x360($s7)
    ctx->pc = 0x128dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 864)));
    // 0x128dc0: 0x10930003  beq         $a0, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x128DC0u;
    {
        const bool branch_taken_0x128dc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 19));
        ctx->pc = 0x128DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128DC0u;
            // 0x128dc4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128dc0) {
            ctx->pc = 0x128DD0u;
            goto label_128dd0;
        }
    }
    ctx->pc = 0x128DC8u;
    // 0x128dc8: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x128dc8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x128dcc: 0x0  nop
    ctx->pc = 0x128dccu;
    // NOP
label_128dd0:
    // 0x128dd0: 0x86030060  lh          $v1, 0x60($s0)
    ctx->pc = 0x128dd0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x128dd4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x128dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x128dd8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x128DD8u;
    {
        const bool branch_taken_0x128dd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x128DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128DD8u;
            // 0x128ddc: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128dd8) {
            ctx->pc = 0x128DE8u;
            goto label_128de8;
        }
    }
    ctx->pc = 0x128DE0u;
    // 0x128de0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x128DE0u;
    {
        const bool branch_taken_0x128de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128DE0u;
            // 0x128de4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128de0) {
            ctx->pc = 0x128E04u;
            goto label_128e04;
        }
    }
    ctx->pc = 0x128DE8u;
label_128de8:
    // 0x128de8: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x128de8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x128dec: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x128decu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x128df0: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x128DF0u;
    {
        const bool branch_taken_0x128df0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x128DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128DF0u;
            // 0x128df4: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128df0) {
            ctx->pc = 0x128E04u;
            goto label_128e04;
        }
    }
    ctx->pc = 0x128DF8u;
    // 0x128df8: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x128DF8u;
    SET_GPR_U32(ctx, 31, 0x128E00u);
    ctx->pc = 0x128DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128DF8u;
            // 0x128dfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128E00u; }
        if (ctx->pc != 0x128E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128E00u; }
        if (ctx->pc != 0x128E00u) { return; }
    }
    ctx->pc = 0x128E00u;
    // 0x128e00: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x128e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_128e04:
    // 0x128e04: 0x26a20020  addiu       $v0, $s5, 0x20
    ctx->pc = 0x128e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x128e08: 0xdaa60020  lqc2        $vf6, 0x20($s5)
    ctx->pc = 0x128e08u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x128e0c: 0xd8440030  lqc2        $vf4, 0x30($v0)
    ctx->pc = 0x128e0cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x128e10: 0xd8470010  lqc2        $vf7, 0x10($v0)
    ctx->pc = 0x128e10u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x128e14: 0xd8480020  lqc2        $vf8, 0x20($v0)
    ctx->pc = 0x128e14u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x128e18: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x128e18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x128e1c: 0xd8850030  lqc2        $vf5, 0x30($a0)
    ctx->pc = 0x128e1cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x128e20: 0xd8820010  lqc2        $vf2, 0x10($a0)
    ctx->pc = 0x128e20u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x128e24: 0xd8830020  lqc2        $vf3, 0x20($a0)
    ctx->pc = 0x128e24u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x128e28: 0x4be131bc  vmulax.xyzw $ACC, $vf6, $vf1x
    ctx->pc = 0x128e28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x128e2c: 0x4be138bd  vmadday.xyzw $ACC, $vf7, $vf1y
    ctx->pc = 0x128e2cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x128e30: 0x4be140be  vmaddaz.xyzw $ACC, $vf8, $vf1z
    ctx->pc = 0x128e30u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x128e34: 0x4be1204b  vmaddw.xyzw $vf1, $vf4, $vf1w
    ctx->pc = 0x128e34u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x128e38: 0x4be231bc  vmulax.xyzw $ACC, $vf6, $vf2x
    ctx->pc = 0x128e38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x128e3c: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x128e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x128e40: 0x4be238bd  vmadday.xyzw $ACC, $vf7, $vf2y
    ctx->pc = 0x128e40u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x128e44: 0x4be240be  vmaddaz.xyzw $ACC, $vf8, $vf2z
    ctx->pc = 0x128e44u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x128e48: 0x4be2208b  vmaddw.xyzw $vf2, $vf4, $vf2w
    ctx->pc = 0x128e48u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x128e4c: 0x4be331bc  vmulax.xyzw $ACC, $vf6, $vf3x
    ctx->pc = 0x128e4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x128e50: 0xfba20060  sqc2        $vf2, 0x60($sp)
    ctx->pc = 0x128e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x128e54: 0x4be338bd  vmadday.xyzw $ACC, $vf7, $vf3y
    ctx->pc = 0x128e54u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x128e58: 0x4be340be  vmaddaz.xyzw $ACC, $vf8, $vf3z
    ctx->pc = 0x128e58u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x128e5c: 0x4be320cb  vmaddw.xyzw $vf3, $vf4, $vf3w
    ctx->pc = 0x128e5cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x128e60: 0x4be531bc  vmulax.xyzw $ACC, $vf6, $vf5x
    ctx->pc = 0x128e60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x128e64: 0xfba30070  sqc2        $vf3, 0x70($sp)
    ctx->pc = 0x128e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x128e68: 0x4be538bd  vmadday.xyzw $ACC, $vf7, $vf5y
    ctx->pc = 0x128e68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x128e6c: 0x4be540be  vmaddaz.xyzw $ACC, $vf8, $vf5z
    ctx->pc = 0x128e6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x128e70: 0x4be5210b  vmaddw.xyzw $vf4, $vf4, $vf5w
    ctx->pc = 0x128e70u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x128e74: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x128e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x128e78: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x128e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x128e7c: 0x8ee30360  lw          $v1, 0x360($s7)
    ctx->pc = 0x128e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 864)));
    // 0x128e80: 0xfba20020  sqc2        $vf2, 0x20($sp)
    ctx->pc = 0x128e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x128e84: 0xfba30030  sqc2        $vf3, 0x30($sp)
    ctx->pc = 0x128e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x128e88: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x128e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x128e8c: 0x10730002  beq         $v1, $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x128E8Cu;
    {
        const bool branch_taken_0x128e8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x128E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128E8Cu;
            // 0x128e90: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128e8c) {
            ctx->pc = 0x128E98u;
            goto label_128e98;
        }
    }
    ctx->pc = 0x128E94u;
    // 0x128e94: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x128e94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_128e98:
    // 0x128e98: 0x86030060  lh          $v1, 0x60($s0)
    ctx->pc = 0x128e98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x128e9c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x128e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x128ea0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x128EA0u;
    {
        const bool branch_taken_0x128ea0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x128EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128EA0u;
            // 0x128ea4: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128ea0) {
            ctx->pc = 0x128EB0u;
            goto label_128eb0;
        }
    }
    ctx->pc = 0x128EA8u;
    // 0x128ea8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x128EA8u;
    {
        const bool branch_taken_0x128ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128EA8u;
            // 0x128eac: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128ea8) {
            ctx->pc = 0x128ECCu;
            goto label_128ecc;
        }
    }
    ctx->pc = 0x128EB0u;
label_128eb0:
    // 0x128eb0: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x128eb0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x128eb4: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x128eb4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x128eb8: 0x50650005  beql        $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x128EB8u;
    {
        const bool branch_taken_0x128eb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x128eb8) {
            ctx->pc = 0x128EBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x128EB8u;
            // 0x128ebc: 0x26050070  addiu       $a1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
            ctx->pc = 0x128ED0u;
            goto label_128ed0;
        }
    }
    ctx->pc = 0x128EC0u;
    // 0x128ec0: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x128EC0u;
    SET_GPR_U32(ctx, 31, 0x128EC8u);
    ctx->pc = 0x128EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128EC0u;
            // 0x128ec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128EC8u; }
        if (ctx->pc != 0x128EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128EC8u; }
        if (ctx->pc != 0x128EC8u) { return; }
    }
    ctx->pc = 0x128EC8u;
    // 0x128ec8: 0x26050070  addiu       $a1, $s0, 0x70
    ctx->pc = 0x128ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_128ecc:
    // 0x128ecc: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x128eccu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
label_128ed0:
    // 0x128ed0: 0xde0200f0  ld          $v0, 0xF0($s0)
    ctx->pc = 0x128ed0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x128ed4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x128ed4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x128ed8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x128ED8u;
    {
        const bool branch_taken_0x128ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x128EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128ED8u;
            // 0x128edc: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128ed8) {
            ctx->pc = 0x128F14u;
            goto label_128f14;
        }
    }
    ctx->pc = 0x128EE0u;
    // 0x128ee0: 0xc0614c6  jal         func_185318
    ctx->pc = 0x128EE0u;
    SET_GPR_U32(ctx, 31, 0x128EE8u);
    ctx->pc = 0x128EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128EE0u;
            // 0x128ee4: 0xfe0300f0  sd          $v1, 0xF0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 240), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185318u;
    if (runtime->hasFunction(0x185318u)) {
        auto targetFn = runtime->lookupFunction(0x185318u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128EE8u; }
        if (ctx->pc != 0x128EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185318_0x185318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128EE8u; }
        if (ctx->pc != 0x128EE8u) { return; }
    }
    ctx->pc = 0x128EE8u;
    // 0x128ee8: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x128ee8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x128eec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128ef0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x128ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128ef4: 0x7e0200b0  sq          $v0, 0xB0($s0)
    ctx->pc = 0x128ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 176), GPR_VEC(ctx, 2));
    // 0x128ef8: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x128ef8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x128efc: 0x7e0200c0  sq          $v0, 0xC0($s0)
    ctx->pc = 0x128efcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 192), GPR_VEC(ctx, 2));
    // 0x128f00: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x128f00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x128f04: 0x7e0200d0  sq          $v0, 0xD0($s0)
    ctx->pc = 0x128f04u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 208), GPR_VEC(ctx, 2));
    // 0x128f08: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x128f08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x128f0c: 0xc08ed6e  jal         func_23B5B8
    ctx->pc = 0x128F0Cu;
    SET_GPR_U32(ctx, 31, 0x128F14u);
    ctx->pc = 0x128F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128F0Cu;
            // 0x128f10: 0x7e0200e0  sq          $v0, 0xE0($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 224), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B5B8u;
    if (runtime->hasFunction(0x23B5B8u)) {
        auto targetFn = runtime->lookupFunction(0x23B5B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128F14u; }
        if (ctx->pc != 0x128F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23b5b8_0x23b5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128F14u; }
        if (ctx->pc != 0x128F14u) { return; }
    }
    ctx->pc = 0x128F14u;
label_128f14:
    // 0x128f14: 0x7a0200b0  lq          $v0, 0xB0($s0)
    ctx->pc = 0x128f14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x128f18: 0x260300b0  addiu       $v1, $s0, 0xB0
    ctx->pc = 0x128f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x128f1c: 0x7ea20020  sq          $v0, 0x20($s5)
    ctx->pc = 0x128f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 32), GPR_VEC(ctx, 2));
    // 0x128f20: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x128f20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x128f24: 0x7ea20030  sq          $v0, 0x30($s5)
    ctx->pc = 0x128f24u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 48), GPR_VEC(ctx, 2));
    // 0x128f28: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x128f28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x128f2c: 0x7ea20040  sq          $v0, 0x40($s5)
    ctx->pc = 0x128f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 64), GPR_VEC(ctx, 2));
    // 0x128f30: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x128f30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x128f34: 0x7ea20050  sq          $v0, 0x50($s5)
    ctx->pc = 0x128f34u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 80), GPR_VEC(ctx, 2));
    // 0x128f38: 0x8ee20360  lw          $v0, 0x360($s7)
    ctx->pc = 0x128f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 864)));
    // 0x128f3c: 0x54530002  bnel        $v0, $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x128F3Cu;
    {
        const bool branch_taken_0x128f3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x128f3c) {
            ctx->pc = 0x128F40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x128F3Cu;
            // 0x128f40: 0x8c420008  lw          $v0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x128F48u;
            goto label_128f48;
        }
    }
    ctx->pc = 0x128F44u;
    // 0x128f44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x128f44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_128f48:
    // 0x128f48: 0xc44000f8  lwc1        $f0, 0xF8($v0)
    ctx->pc = 0x128f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128f4c: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x128f4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x128f50: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x128f50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x128f54: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x128f54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x128f58: 0xda410040  lqc2        $vf1, 0x40($s2)
    ctx->pc = 0x128f58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x128f5c: 0x4600b003  div.s       $f0, $f22, $f0
    ctx->pc = 0x128f5cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[0] = ctx->f[22] / ctx->f[0];
    // 0x128f60: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x128f60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x128f64: 0x48aa1000  qmtc2.ni    $t2, $vf2
    ctx->pc = 0x128f64u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
    // 0x128f68: 0x4a220858  vmulx.w     $vf1, $vf1, $vf2x
    ctx->pc = 0x128f68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x128f6c: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x128f6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x128f70: 0x4b010043  vaddw.x     $vf1, $vf0, $vf1w
    ctx->pc = 0x128f70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x128f74: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x128f74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x128f78: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x128f78u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x128f7c: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x128f7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x128f80: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x128f80u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x128f84: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x128f84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x128f88: 0xc060efc  jal         func_183BF0
    ctx->pc = 0x128F88u;
    SET_GPR_U32(ctx, 31, 0x128F90u);
    ctx->pc = 0x183BF0u;
    if (runtime->hasFunction(0x183BF0u)) {
        auto targetFn = runtime->lookupFunction(0x183BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128F90u; }
        if (ctx->pc != 0x128F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183BF0_0x183bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128F90u; }
        if (ctx->pc != 0x128F90u) { return; }
    }
    ctx->pc = 0x128F90u;
    // 0x128f90: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x128f90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x128f94: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x128f94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x128f98: 0x46140542  mul.s       $f21, $f0, $f20
    ctx->pc = 0x128f98u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x128f9c: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x128f9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x128fa0: 0x4618a5c2  mul.s       $f23, $f20, $f24
    ctx->pc = 0x128fa0u;
    ctx->f[23] = FPU_MUL_S(ctx->f[20], ctx->f[24]);
    // 0x128fa4: 0x70021fc9  prot3w      $v1, $v0
    ctx->pc = 0x128fa4u;
    SET_GPR_VEC(ctx, 3, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x128fa8: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x128fa8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x128fac: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x128facu;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x128fb0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x128fb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x128fb4: 0x4616ad43  div.s       $f21, $f21, $f22
    ctx->pc = 0x128fb4u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[21] = ctx->f[21] / ctx->f[22];
    // 0x128fb8: 0xc060efc  jal         func_183BF0
    ctx->pc = 0x128FB8u;
    SET_GPR_U32(ctx, 31, 0x128FC0u);
    ctx->pc = 0x128FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128FB8u;
            // 0x128fbc: 0x4617ad41  sub.s       $f21, $f21, $f23 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x183BF0u;
    if (runtime->hasFunction(0x183BF0u)) {
        auto targetFn = runtime->lookupFunction(0x183BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128FC0u; }
        if (ctx->pc != 0x128FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183BF0_0x183bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128FC0u; }
        if (ctx->pc != 0x128FC0u) { return; }
    }
    ctx->pc = 0x128FC0u;
    // 0x128fc0: 0x46140502  mul.s       $f20, $f0, $f20
    ctx->pc = 0x128fc0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x128fc4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x128fc4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x128fc8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x128fc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x128fcc: 0x4616a503  div.s       $f20, $f20, $f22
    ctx->pc = 0x128fccu;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[22];
    // 0x128fd0: 0x4617a501  sub.s       $f20, $f20, $f23
    ctx->pc = 0x128fd0u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[23]);
    // 0x128fd4: 0xc060f5e  jal         func_183D78
    ctx->pc = 0x128FD4u;
    SET_GPR_U32(ctx, 31, 0x128FDCu);
    ctx->pc = 0x128FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128FD4u;
            // 0x128fd8: 0x4600a507  neg.s       $f20, $f20 (Delay Slot)
        ctx->f[20] = FPU_NEG_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x183D78u;
    if (runtime->hasFunction(0x183D78u)) {
        auto targetFn = runtime->lookupFunction(0x183D78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128FDCu; }
        if (ctx->pc != 0x128FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183d78_0x183e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128FDCu; }
        if (ctx->pc != 0x128FDCu) { return; }
    }
    ctx->pc = 0x128FDCu;
    // 0x128fdc: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x128fdcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x128fe0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x128fe0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128fe4: 0x4406a800  mfc1        $a2, $f21
    ctx->pc = 0x128fe4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x128fe8: 0x70461b89  pcpyld      $v1, $v0, $a2
    ctx->pc = 0x128fe8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x128fec: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x128fecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x128ff0: 0x70ea1389  pcpyld      $v0, $a3, $t2
    ctx->pc = 0x128ff0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 10)));
    // 0x128ff4: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x128ff4u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x128ff8: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x128ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x128ffc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x128ffcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x129000: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x129000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x129004: 0xda410040  lqc2        $vf1, 0x40($s2)
    ctx->pc = 0x129004u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x129008: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x129008u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12900c: 0xfa410040  sqc2        $vf1, 0x40($s2)
    ctx->pc = 0x12900cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x129010: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x129010u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x129014: 0x70031789  pexew       $v0, $v1
    ctx->pc = 0x129014u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x129018: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x129018u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x12901c: 0xc6430064  lwc1        $f3, 0x64($s2)
    ctx->pc = 0x12901cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x129020: 0x46002b06  mov.s       $f12, $f5
    ctx->pc = 0x129020u;
    ctx->f[12] = FPU_MOV_S(ctx->f[5]);
    // 0x129024: 0xc6420074  lwc1        $f2, 0x74($s2)
    ctx->pc = 0x129024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x129028: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x129028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x12902c: 0xc6410060  lwc1        $f1, 0x60($s2)
    ctx->pc = 0x12902cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x129030: 0xc6400070  lwc1        $f0, 0x70($s2)
    ctx->pc = 0x129030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129034: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x129034u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x129038: 0xc6440078  lwc1        $f4, 0x78($s2)
    ctx->pc = 0x129038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x12903c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x12903cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x129040: 0xc6430068  lwc1        $f3, 0x68($s2)
    ctx->pc = 0x129040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x129044: 0xc642005c  lwc1        $f2, 0x5C($s2)
    ctx->pc = 0x129044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x129048: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x129048u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x12904c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x12904cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x129050: 0xc643006c  lwc1        $f3, 0x6C($s2)
    ctx->pc = 0x129050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x129054: 0xc644007c  lwc1        $f4, 0x7C($s2)
    ctx->pc = 0x129054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x129058: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x129058u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x12905c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x12905cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x129060: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x129060u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x129064: 0xe642005c  swc1        $f2, 0x5C($s2)
    ctx->pc = 0x129064u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
    // 0x129068: 0x46180d42  mul.s       $f21, $f1, $f24
    ctx->pc = 0x129068u;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
    // 0x12906c: 0xc060ee2  jal         func_183B88
    ctx->pc = 0x12906Cu;
    SET_GPR_U32(ctx, 31, 0x129074u);
    ctx->pc = 0x129070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12906Cu;
            // 0x129070: 0x46180502  mul.s       $f20, $f0, $f24 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x183B88u;
    if (runtime->hasFunction(0x183B88u)) {
        auto targetFn = runtime->lookupFunction(0x183B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129074u; }
        if (ctx->pc != 0x129074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183B88_0x183b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129074u; }
        if (ctx->pc != 0x129074u) { return; }
    }
    ctx->pc = 0x129074u;
    // 0x129074: 0xc64c005c  lwc1        $f12, 0x5C($s2)
    ctx->pc = 0x129074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x129078: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x129078u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x12907c: 0xc060ee2  jal         func_183B88
    ctx->pc = 0x12907Cu;
    SET_GPR_U32(ctx, 31, 0x129084u);
    ctx->pc = 0x129080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12907Cu;
            // 0x129080: 0x27a40114  addiu       $a0, $sp, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183B88u;
    if (runtime->hasFunction(0x183B88u)) {
        auto targetFn = runtime->lookupFunction(0x183B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129084u; }
        if (ctx->pc != 0x129084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183B88_0x183b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129084u; }
        if (ctx->pc != 0x129084u) { return; }
    }
    ctx->pc = 0x129084u;
    // 0x129084: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x129084u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x129088: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x129088u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12908c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x12908cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_129090:
    // 0x129090: 0x26430060  addiu       $v1, $s2, 0x60
    ctx->pc = 0x129090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x129094: 0x26450070  addiu       $a1, $s2, 0x70
    ctx->pc = 0x129094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    // 0x129098: 0x681021  addu        $v0, $v1, $t0
    ctx->pc = 0x129098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x12909c: 0xa82021  addu        $a0, $a1, $t0
    ctx->pc = 0x12909cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x1290a0: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1290a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1290a4: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x1290a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1290a8: 0x46151081  sub.s       $f2, $f2, $f21
    ctx->pc = 0x1290a8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[21]);
    // 0x1290ac: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x1290acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1290b0: 0x461418c1  sub.s       $f3, $f3, $f20
    ctx->pc = 0x1290b0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[20]);
    // 0x1290b4: 0x8faa0114  lw          $t2, 0x114($sp)
    ctx->pc = 0x1290b4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x1290b8: 0x48aa1000  qmtc2.ni    $t2, $vf2
    ctx->pc = 0x1290b8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
    // 0x1290bc: 0xda410040  lqc2        $vf1, 0x40($s2)
    ctx->pc = 0x1290bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x1290c0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1290c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1290c4: 0x4603b042  mul.s       $f1, $f22, $f3
    ctx->pc = 0x1290c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[3]);
    // 0x1290c8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1290c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1290cc: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x1290ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x1290d0: 0x4b020898  vmulx.x     $vf2, $vf1, $vf2x
    ctx->pc = 0x1290d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1290d4: 0x48a91800  qmtc2.ni    $t1, $vf3
    ctx->pc = 0x1290d4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x1290d8: 0x4a830858  vmulx.y     $vf1, $vf1, $vf3x
    ctx->pc = 0x1290d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1290dc: 0x4b011085  vsuby.x     $vf2, $vf2, $vf1y
    ctx->pc = 0x1290dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1290e0: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x1290e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x1290e4: 0x48aa0800  qmtc2.ni    $t2, $vf1
    ctx->pc = 0x1290e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
    // 0x1290e8: 0x4b011080  vaddx.x     $vf2, $vf2, $vf1x
    ctx->pc = 0x1290e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1290ec: 0x482a1000  qmfc2.ni    $t2, $vf2
    ctx->pc = 0x1290ecu;
    SET_GPR_VEC(ctx, 10, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1290f0: 0x4602b082  mul.s       $f2, $f22, $f2
    ctx->pc = 0x1290f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[22], ctx->f[2]);
    // 0x1290f4: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x1290f4u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1290f8: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1290f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1290fc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1290fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x129100: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x129100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129104: 0xda420040  lqc2        $vf2, 0x40($s2)
    ctx->pc = 0x129104u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x129108: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x129108u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x12910c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x12910cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x129110: 0x46141080  add.s       $f2, $f2, $f20
    ctx->pc = 0x129110u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[20]);
    // 0x129114: 0x4b0310d8  vmulx.x     $vf3, $vf2, $vf3x
    ctx->pc = 0x129114u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x129118: 0x8fa30114  lw          $v1, 0x114($sp)
    ctx->pc = 0x129118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x12911c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x12911cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x129120: 0x4a811098  vmulx.y     $vf2, $vf2, $vf1x
    ctx->pc = 0x129120u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x129124: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x129124u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x129128: 0x4b0218c1  vaddy.x     $vf3, $vf3, $vf2y
    ctx->pc = 0x129128u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x12912c: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x12912cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x129130: 0x4b0118c0  vaddx.x     $vf3, $vf3, $vf1x
    ctx->pc = 0x129130u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x129134: 0x482a1800  qmfc2.ni    $t2, $vf3
    ctx->pc = 0x129134u;
    SET_GPR_VEC(ctx, 10, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x129138: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x129138u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12913c: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x12913cu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x129140: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x129140u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x129144: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x129144u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x129148: 0x4e1ffd1  bgez        $a3, . + 4 + (-0x2F << 2)
    ctx->pc = 0x129148u;
    {
        const bool branch_taken_0x129148 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x12914Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129148u;
            // 0x12914c: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x129148) {
            ctx->pc = 0x129090u;
            runtime->cooperativeGuestYield();
            goto label_129090;
        }
    }
    ctx->pc = 0x129150u;
    // 0x129150: 0xc64c0060  lwc1        $f12, 0x60($s2)
    ctx->pc = 0x129150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x129154: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x129154u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x129158: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x129158u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12915c: 0x0  nop
    ctx->pc = 0x12915cu;
    // NOP
    // 0x129160: 0x4502001b  bc1fl       . + 4 + (0x1B << 2)
    ctx->pc = 0x129160u;
    {
        const bool branch_taken_0x129160 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x129160) {
            ctx->pc = 0x129164u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x129160u;
            // 0x129164: 0xc64c0070  lwc1        $f12, 0x70($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1291D0u;
            goto label_1291d0;
        }
    }
    ctx->pc = 0x129168u;
    // 0x129168: 0xc0a14de  jal         func_285378
    ctx->pc = 0x129168u;
    SET_GPR_U32(ctx, 31, 0x129170u);
    ctx->pc = 0x12916Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129168u;
            // 0x12916c: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x285378u;
    if (runtime->hasFunction(0x285378u)) {
        auto targetFn = runtime->lookupFunction(0x285378u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129170u; }
        if (ctx->pc != 0x129170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_285378_0x285410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129170u; }
        if (ctx->pc != 0x129170u) { return; }
    }
    ctx->pc = 0x129170u;
    // 0x129170: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x129170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x129174: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x129174u;
    {
        const bool branch_taken_0x129174 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x129178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129174u;
            // 0x129178: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129174) {
            ctx->pc = 0x129190u;
            goto label_129190;
        }
    }
    ctx->pc = 0x12917Cu;
    // 0x12917c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12917cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x129180: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x129180u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x129184: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x129184u;
    {
        const bool branch_taken_0x129184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129184u;
            // 0x129188: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129184) {
            ctx->pc = 0x1291ACu;
            goto label_1291ac;
        }
    }
    ctx->pc = 0x12918Cu;
    // 0x12918c: 0x0  nop
    ctx->pc = 0x12918cu;
    // NOP
label_129190:
    // 0x129190: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x129190u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x129194: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x129194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x129198: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x129198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x12919c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12919cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1291a0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1291a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1291a4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1291a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1291a8:
    // 0x1291a8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1291a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1291ac:
    // 0x1291ac: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1291acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1291b0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1291b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1291b4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1291b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1291b8: 0x28830004  slti        $v1, $a0, 0x4
    ctx->pc = 0x1291b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1291bc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1291bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1291c0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1291C0u;
    {
        const bool branch_taken_0x1291c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1291C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1291C0u;
            // 0x1291c4: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1291c0) {
            ctx->pc = 0x1291A8u;
            runtime->cooperativeGuestYield();
            goto label_1291a8;
        }
    }
    ctx->pc = 0x1291C8u;
    // 0x1291c8: 0xc64c0070  lwc1        $f12, 0x70($s2)
    ctx->pc = 0x1291c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1291cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1291ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1291d0:
    // 0x1291d0: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1291d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1291d4: 0x0  nop
    ctx->pc = 0x1291d4u;
    // NOP
    // 0x1291d8: 0x4502001a  bc1fl       . + 4 + (0x1A << 2)
    ctx->pc = 0x1291D8u;
    {
        const bool branch_taken_0x1291d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1291d8) {
            ctx->pc = 0x1291DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1291D8u;
            // 0x1291dc: 0xc64c0060  lwc1        $f12, 0x60($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x129244u;
            goto label_129244;
        }
    }
    ctx->pc = 0x1291E0u;
    // 0x1291e0: 0xc0a14de  jal         func_285378
    ctx->pc = 0x1291E0u;
    SET_GPR_U32(ctx, 31, 0x1291E8u);
    ctx->pc = 0x1291E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1291E0u;
            // 0x1291e4: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x285378u;
    if (runtime->hasFunction(0x285378u)) {
        auto targetFn = runtime->lookupFunction(0x285378u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1291E8u; }
        if (ctx->pc != 0x1291E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_285378_0x285410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1291E8u; }
        if (ctx->pc != 0x1291E8u) { return; }
    }
    ctx->pc = 0x1291E8u;
    // 0x1291e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1291e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1291ec: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1291ECu;
    {
        const bool branch_taken_0x1291ec = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1291F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1291ECu;
            // 0x1291f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1291ec) {
            ctx->pc = 0x129204u;
            goto label_129204;
        }
    }
    ctx->pc = 0x1291F4u;
    // 0x1291f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1291f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1291f8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1291f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1291fc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1291FCu;
    {
        const bool branch_taken_0x1291fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1291FCu;
            // 0x129200: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1291fc) {
            ctx->pc = 0x129224u;
            goto label_129224;
        }
    }
    ctx->pc = 0x129204u;
label_129204:
    // 0x129204: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x129204u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x129208: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x129208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x12920c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x12920cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x129210: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x129210u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x129214: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x129214u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x129218: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x129218u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x12921c: 0x0  nop
    ctx->pc = 0x12921cu;
    // NOP
label_129220:
    // 0x129220: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x129220u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_129224:
    // 0x129224: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x129224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x129228: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x129228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x12922c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x12922cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129230: 0x28830004  slti        $v1, $a0, 0x4
    ctx->pc = 0x129230u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x129234: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x129234u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x129238: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x129238u;
    {
        const bool branch_taken_0x129238 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12923Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129238u;
            // 0x12923c: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x129238) {
            ctx->pc = 0x129220u;
            runtime->cooperativeGuestYield();
            goto label_129220;
        }
    }
    ctx->pc = 0x129240u;
    // 0x129240: 0xc64c0060  lwc1        $f12, 0x60($s2)
    ctx->pc = 0x129240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_129244:
    // 0x129244: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x129244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x129248: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x129248u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12924c: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x12924cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x129250: 0x0  nop
    ctx->pc = 0x129250u;
    // NOP
    // 0x129254: 0x45020022  bc1fl       . + 4 + (0x22 << 2)
    ctx->pc = 0x129254u;
    {
        const bool branch_taken_0x129254 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x129254) {
            ctx->pc = 0x129258u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x129254u;
            // 0x129258: 0xc64c0070  lwc1        $f12, 0x70($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1292E0u;
            goto label_1292e0;
        }
    }
    ctx->pc = 0x12925Cu;
    // 0x12925c: 0xc0a14de  jal         func_285378
    ctx->pc = 0x12925Cu;
    SET_GPR_U32(ctx, 31, 0x129264u);
    ctx->pc = 0x285378u;
    if (runtime->hasFunction(0x285378u)) {
        auto targetFn = runtime->lookupFunction(0x285378u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129264u; }
        if (ctx->pc != 0x129264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_285378_0x285410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129264u; }
        if (ctx->pc != 0x129264u) { return; }
    }
    ctx->pc = 0x129264u;
    // 0x129264: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x129264u;
    {
        const bool branch_taken_0x129264 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x129268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129264u;
            // 0x129268: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129264) {
            ctx->pc = 0x12927Cu;
            goto label_12927c;
        }
    }
    ctx->pc = 0x12926Cu;
    // 0x12926c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x12926cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x129270: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x129270u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x129274: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x129274u;
    {
        const bool branch_taken_0x129274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x129274) {
            ctx->pc = 0x129290u;
            goto label_129290;
        }
    }
    ctx->pc = 0x12927Cu;
label_12927c:
    // 0x12927c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x12927cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x129280: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x129280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x129284: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x129284u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x129288: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x129288u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x12928c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x12928cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_129290:
    // 0x129290: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x129290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x129294: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x129294u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x129298: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x129298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12929c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12929cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1292a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1292a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1292a4: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1292a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1292a8: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1292a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1292ac: 0x0  nop
    ctx->pc = 0x1292acu;
    // NOP
label_1292b0:
    // 0x1292b0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1292b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1292b4: 0x26420060  addiu       $v0, $s2, 0x60
    ctx->pc = 0x1292b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x1292b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1292b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1292bc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1292bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1292c0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1292c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1292c4: 0x28830004  slti        $v1, $a0, 0x4
    ctx->pc = 0x1292c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1292c8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1292c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1292cc: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1292CCu;
    {
        const bool branch_taken_0x1292cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1292D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1292CCu;
            // 0x1292d0: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1292cc) {
            ctx->pc = 0x1292B0u;
            runtime->cooperativeGuestYield();
            goto label_1292b0;
        }
    }
    ctx->pc = 0x1292D4u;
    // 0x1292d4: 0xc64c0070  lwc1        $f12, 0x70($s2)
    ctx->pc = 0x1292d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1292d8: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x1292d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x1292dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1292dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1292e0:
    // 0x1292e0: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x1292e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1292e4: 0x0  nop
    ctx->pc = 0x1292e4u;
    // NOP
    // 0x1292e8: 0x4502001f  bc1fl       . + 4 + (0x1F << 2)
    ctx->pc = 0x1292E8u;
    {
        const bool branch_taken_0x1292e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1292e8) {
            ctx->pc = 0x1292ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1292E8u;
            // 0x1292ec: 0xc6430074  lwc1        $f3, 0x74($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x129368u;
            goto label_129368;
        }
    }
    ctx->pc = 0x1292F0u;
    // 0x1292f0: 0xc0a14de  jal         func_285378
    ctx->pc = 0x1292F0u;
    SET_GPR_U32(ctx, 31, 0x1292F8u);
    ctx->pc = 0x285378u;
    if (runtime->hasFunction(0x285378u)) {
        auto targetFn = runtime->lookupFunction(0x285378u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1292F8u; }
        if (ctx->pc != 0x1292F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_285378_0x285410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1292F8u; }
        if (ctx->pc != 0x1292F8u) { return; }
    }
    ctx->pc = 0x1292F8u;
    // 0x1292f8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1292F8u;
    {
        const bool branch_taken_0x1292f8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1292FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1292F8u;
            // 0x1292fc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1292f8) {
            ctx->pc = 0x129310u;
            goto label_129310;
        }
    }
    ctx->pc = 0x129300u;
    // 0x129300: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x129300u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x129304: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x129304u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x129308: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x129308u;
    {
        const bool branch_taken_0x129308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x129308) {
            ctx->pc = 0x129324u;
            goto label_129324;
        }
    }
    ctx->pc = 0x129310u;
label_129310:
    // 0x129310: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x129310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x129314: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x129314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x129318: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x129318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12931c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x12931cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x129320: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x129320u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_129324:
    // 0x129324: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x129324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x129328: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x129328u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12932c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x12932cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129330: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x129330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x129334: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x129334u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x129338: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x129338u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x12933c: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x12933cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_129340:
    // 0x129340: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x129340u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x129344: 0x26420070  addiu       $v0, $s2, 0x70
    ctx->pc = 0x129344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    // 0x129348: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x129348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12934c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x12934cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x129350: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x129350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129354: 0x28830004  slti        $v1, $a0, 0x4
    ctx->pc = 0x129354u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x129358: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x129358u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x12935c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x12935Cu;
    {
        const bool branch_taken_0x12935c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x129360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12935Cu;
            // 0x129360: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12935c) {
            ctx->pc = 0x129340u;
            runtime->cooperativeGuestYield();
            goto label_129340;
        }
    }
    ctx->pc = 0x129364u;
    // 0x129364: 0xc6430074  lwc1        $f3, 0x74($s2)
    ctx->pc = 0x129364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_129368:
    // 0x129368: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x129368u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12936c: 0xc6400070  lwc1        $f0, 0x70($s2)
    ctx->pc = 0x12936cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129370: 0xc6420064  lwc1        $f2, 0x64($s2)
    ctx->pc = 0x129370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x129374: 0xc6410060  lwc1        $f1, 0x60($s2)
    ctx->pc = 0x129374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x129378: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x129378u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x12937c: 0xc6430078  lwc1        $f3, 0x78($s2)
    ctx->pc = 0x12937cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x129380: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x129380u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x129384: 0xc644007c  lwc1        $f4, 0x7C($s2)
    ctx->pc = 0x129384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x129388: 0xc6420068  lwc1        $f2, 0x68($s2)
    ctx->pc = 0x129388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12938c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x12938cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x129390: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x129390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x129394: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x129394u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x129398: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x129398u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x12939c: 0xda410040  lqc2        $vf1, 0x40($s2)
    ctx->pc = 0x12939cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x1293a0: 0xc642006c  lwc1        $f2, 0x6C($s2)
    ctx->pc = 0x1293a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1293a4: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x1293a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x1293a8: 0x4b010043  vaddw.x     $vf1, $vf0, $vf1w
    ctx->pc = 0x1293a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1293ac: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1293acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1293b0: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1293b0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1293b4: 0x46030502  mul.s       $f20, $f0, $f3
    ctx->pc = 0x1293b4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1293b8: 0x46030d42  mul.s       $f21, $f1, $f3
    ctx->pc = 0x1293b8u;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1293bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1293bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1293c0:
    // 0x1293c0: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x1293c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1293c4: 0x27b300e0  addiu       $s3, $sp, 0xE0
    ctx->pc = 0x1293c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1293c8: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x1293c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1293cc: 0x2632821  addu        $a1, $s3, $v1
    ctx->pc = 0x1293ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1293d0: 0xc4400060  lwc1        $f0, 0x60($v0)
    ctx->pc = 0x1293d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1293d4: 0x27b000f0  addiu       $s0, $sp, 0xF0
    ctx->pc = 0x1293d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1293d8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1293d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1293dc: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1293dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1293e0: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x1293e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x1293e4: 0x28e40004  slti        $a0, $a3, 0x4
    ctx->pc = 0x1293e4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1293e8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1293e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1293ec: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x1293ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x1293f0: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1293f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1293f4: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x1293f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1293f8: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1293f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1293fc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1293fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x129400: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x129400u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x129404: 0x1480ffee  bnez        $a0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x129404u;
    {
        const bool branch_taken_0x129404 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x129408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129404u;
            // 0x129408: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x129404) {
            ctx->pc = 0x1293C0u;
            runtime->cooperativeGuestYield();
            goto label_1293c0;
        }
    }
    ctx->pc = 0x12940Cu;
    // 0x12940c: 0xc640005c  lwc1        $f0, 0x5C($s2)
    ctx->pc = 0x12940cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129410: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x129410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x129414: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x129414u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x129418: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x129418u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12941c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x12941cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x129420: 0x0  nop
    ctx->pc = 0x129420u;
    // NOP
    // 0x129424: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x129424u;
    {
        const bool branch_taken_0x129424 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x129424) {
            ctx->pc = 0x129428u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x129424u;
            // 0x129428: 0xc641005c  lwc1        $f1, 0x5C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x129438u;
            goto label_129438;
        }
    }
    ctx->pc = 0x12942Cu;
    // 0x12942c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x12942cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x129430: 0xe640005c  swc1        $f0, 0x5C($s2)
    ctx->pc = 0x129430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
    // 0x129434: 0xc641005c  lwc1        $f1, 0x5C($s2)
    ctx->pc = 0x129434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_129438:
    // 0x129438: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x129438u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12943c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12943cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x129440: 0x0  nop
    ctx->pc = 0x129440u;
    // NOP
    // 0x129444: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x129444u;
    {
        const bool branch_taken_0x129444 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x129444) {
            ctx->pc = 0x129448u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x129444u;
            // 0x129448: 0xda420040  lqc2        $vf2, 0x40($s2) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x129458u;
            goto label_129458;
        }
    }
    ctx->pc = 0x12944Cu;
    // 0x12944c: 0x46020800  add.s       $f0, $f1, $f2
    ctx->pc = 0x12944cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x129450: 0xe640005c  swc1        $f0, 0x5C($s2)
    ctx->pc = 0x129450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
    // 0x129454: 0xda420040  lqc2        $vf2, 0x40($s2)
    ctx->pc = 0x129454u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 64)));
label_129458:
    // 0x129458: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x129458u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12945c: 0x4a220843  vaddw.w     $vf1, $vf1, $vf2w
    ctx->pc = 0x12945cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x129460: 0xfa410040  sqc2        $vf1, 0x40($s2)
    ctx->pc = 0x129460u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x129464: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x129464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x129468: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x129468u;
    {
        const bool branch_taken_0x129468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12946Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129468u;
            // 0x12946c: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129468) {
            ctx->pc = 0x1294B0u;
            goto label_1294b0;
        }
    }
    ctx->pc = 0x129470u;
    // 0x129470: 0xc0496d8  jal         func_125B60
    ctx->pc = 0x129470u;
    SET_GPR_U32(ctx, 31, 0x129478u);
    ctx->pc = 0x129474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129470u;
            // 0x129474: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125B60u;
    if (runtime->hasFunction(0x125B60u)) {
        auto targetFn = runtime->lookupFunction(0x125B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129478u; }
        if (ctx->pc != 0x129478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_125b60_0x125bb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129478u; }
        if (ctx->pc != 0x129478u) { return; }
    }
    ctx->pc = 0x129478u;
    // 0x129478: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x129478u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x12947c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x12947cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129480: 0x8e480080  lw          $t0, 0x80($s2)
    ctx->pc = 0x129480u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x129484: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x129484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129488: 0x8c66f1ac  lw          $a2, -0xE54($v1)
    ctx->pc = 0x129488u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963628)));
    // 0x12948c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x12948cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129490: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x129490u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129494: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x129494u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129498: 0x3be580b  movn        $t3, $sp, $fp
    ctx->pc = 0x129498u;
    if (GPR_U64(ctx, 30) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 29));
    // 0x12949c: 0xc049c90  jal         func_127240
    ctx->pc = 0x12949Cu;
    SET_GPR_U32(ctx, 31, 0x1294A4u);
    ctx->pc = 0x1294A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12949Cu;
            // 0x1294a0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127240u;
    if (runtime->hasFunction(0x127240u)) {
        auto targetFn = runtime->lookupFunction(0x127240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1294A4u; }
        if (ctx->pc != 0x1294A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127240_0x127240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1294A4u; }
        if (ctx->pc != 0x1294A4u) { return; }
    }
    ctx->pc = 0x1294A4u;
    // 0x1294a4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1294A4u;
    {
        const bool branch_taken_0x1294a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1294A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1294A4u;
            // 0x1294a8: 0x3c050033  lui         $a1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1294a4) {
            ctx->pc = 0x1294D8u;
            goto label_1294d8;
        }
    }
    ctx->pc = 0x1294ACu;
    // 0x1294ac: 0x0  nop
    ctx->pc = 0x1294acu;
    // NOP
label_1294b0:
    // 0x1294b0: 0x8e480080  lw          $t0, 0x80($s2)
    ctx->pc = 0x1294b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x1294b4: 0x8c46f1ac  lw          $a2, -0xE54($v0)
    ctx->pc = 0x1294b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963628)));
    // 0x1294b8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1294b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1294bc: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x1294bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1294c0: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x1294c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1294c4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1294c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1294c8: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x1294c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1294cc: 0xc049c90  jal         func_127240
    ctx->pc = 0x1294CCu;
    SET_GPR_U32(ctx, 31, 0x1294D4u);
    ctx->pc = 0x1294D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1294CCu;
            // 0x1294d0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127240u;
    if (runtime->hasFunction(0x127240u)) {
        auto targetFn = runtime->lookupFunction(0x127240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1294D4u; }
        if (ctx->pc != 0x1294D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127240_0x127240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1294D4u; }
        if (ctx->pc != 0x1294D4u) { return; }
    }
    ctx->pc = 0x1294D4u;
    // 0x1294d4: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x1294d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_1294d8:
    // 0x1294d8: 0x8ca4f168  lw          $a0, -0xE98($a1)
    ctx->pc = 0x1294d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294963560)));
    // 0x1294dc: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x1294dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x1294e0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1294E0u;
    {
        const bool branch_taken_0x1294e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1294E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1294E0u;
            // 0x1294e4: 0x24820008  addiu       $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1294e0) {
            ctx->pc = 0x129510u;
            goto label_129510;
        }
    }
    ctx->pc = 0x1294E8u;
    // 0x1294e8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1294e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1294ec: 0x0  nop
    ctx->pc = 0x1294ecu;
    // NOP
label_1294f0:
    // 0x1294f0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1294f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1294f4: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x1294f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x1294f8: 0x0  nop
    ctx->pc = 0x1294f8u;
    // NOP
    // 0x1294fc: 0x0  nop
    ctx->pc = 0x1294fcu;
    // NOP
    // 0x129500: 0x0  nop
    ctx->pc = 0x129500u;
    // NOP
    // 0x129504: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x129504u;
    {
        const bool branch_taken_0x129504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x129504) {
            ctx->pc = 0x129508u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x129504u;
            // 0x129508: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1294F0u;
            runtime->cooperativeGuestYield();
            goto label_1294f0;
        }
    }
    ctx->pc = 0x12950Cu;
    // 0x12950c: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x12950cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_129510:
    // 0x129510: 0x3c036000  lui         $v1, 0x6000
    ctx->pc = 0x129510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24576 << 16));
    // 0x129514: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x129514u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x129518: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x129518u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x12951c: 0xaca2f168  sw          $v0, -0xE98($a1)
    ctx->pc = 0x12951cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294963560), GPR_U32(ctx, 2));
    // 0x129520: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x129520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129524: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x129524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x129528: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x129528u;
    {
        const bool branch_taken_0x129528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12952Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129528u;
            // 0x12952c: 0x8e82ed60  lw          $v0, -0x12A0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129528) {
            ctx->pc = 0x129558u;
            goto label_129558;
        }
    }
    ctx->pc = 0x129530u;
    // 0x129530: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x129530u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x129534: 0x0  nop
    ctx->pc = 0x129534u;
    // NOP
label_129538:
    // 0x129538: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x129538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x12953c: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x12953cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x129540: 0x0  nop
    ctx->pc = 0x129540u;
    // NOP
    // 0x129544: 0x0  nop
    ctx->pc = 0x129544u;
    // NOP
    // 0x129548: 0x0  nop
    ctx->pc = 0x129548u;
    // NOP
    // 0x12954c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12954Cu;
    {
        const bool branch_taken_0x12954c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12954c) {
            ctx->pc = 0x129550u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12954Cu;
            // 0x129550: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x129538u;
            runtime->cooperativeGuestYield();
            goto label_129538;
        }
    }
    ctx->pc = 0x129554u;
    // 0x129554: 0x8e82ed60  lw          $v0, -0x12A0($s4)
    ctx->pc = 0x129554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
label_129558:
    // 0x129558: 0x2631ed68  addiu       $s1, $s1, -0x1298
    ctx->pc = 0x129558u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962536));
    // 0x12955c: 0xaca4f168  sw          $a0, -0xE98($a1)
    ctx->pc = 0x12955cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294963560), GPR_U32(ctx, 4));
    // 0x129560: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x129560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x129564: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x129564u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x129568: 0xae85ed60  sw          $a1, -0x12A0($s4)
    ctx->pc = 0x129568u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294962528), GPR_U32(ctx, 5));
    // 0x12956c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x12956cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x129570: 0x2ca30100  sltiu       $v1, $a1, 0x100
    ctx->pc = 0x129570u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x129574: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x129574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x129578: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x129578u;
    {
        const bool branch_taken_0x129578 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12957Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129578u;
            // 0x12957c: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129578) {
            ctx->pc = 0x129590u;
            goto label_129590;
        }
    }
    ctx->pc = 0x129580u;
    // 0x129580: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x129580u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x129584: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x129584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x129588: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x129588u;
    SET_GPR_U32(ctx, 31, 0x129590u);
    ctx->pc = 0x12958Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129588u;
            // 0x12958c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129590u; }
        if (ctx->pc != 0x129590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129590u; }
        if (ctx->pc != 0x129590u) { return; }
    }
    ctx->pc = 0x129590u;
label_129590:
    // 0x129590: 0x26c3bb98  addiu       $v1, $s6, -0x4468
    ctx->pc = 0x129590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294949784));
    // 0x129594: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x129594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x129598: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x129598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12959c: 0x8e440080  lw          $a0, 0x80($s2)
    ctx->pc = 0x12959cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x1295a0: 0xc059ade  jal         func_166B78
    ctx->pc = 0x1295A0u;
    SET_GPR_U32(ctx, 31, 0x1295A8u);
    ctx->pc = 0x1295A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1295A0u;
            // 0x1295a4: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166B78u;
    if (runtime->hasFunction(0x166B78u)) {
        auto targetFn = runtime->lookupFunction(0x166B78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1295A8u; }
        if (ctx->pc != 0x1295A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166B78_0x166b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1295A8u; }
        if (ctx->pc != 0x1295A8u) { return; }
    }
    ctx->pc = 0x1295A8u;
    // 0x1295a8: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x1295A8u;
    {
        const bool branch_taken_0x1295a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1295ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1295A8u;
            // 0x1295ac: 0x8ea2006c  lw          $v0, 0x6C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1295a8) {
            ctx->pc = 0x129774u;
            goto label_129774;
        }
    }
    ctx->pc = 0x1295B0u;
label_1295b0:
    // 0x1295b0: 0x13c0006f  beqz        $fp, . + 4 + (0x6F << 2)
    ctx->pc = 0x1295B0u;
    {
        const bool branch_taken_0x1295b0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x1295B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1295B0u;
            // 0x1295b4: 0x8fa3011c  lw          $v1, 0x11C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1295b0) {
            ctx->pc = 0x129770u;
            goto label_129770;
        }
    }
    ctx->pc = 0x1295B8u;
    // 0x1295b8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1295B8u;
    {
        const bool branch_taken_0x1295b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1295BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1295B8u;
            // 0x1295bc: 0x24160011  addiu       $s6, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1295b8) {
            ctx->pc = 0x1295CCu;
            goto label_1295cc;
        }
    }
    ctx->pc = 0x1295C0u;
    // 0x1295c0: 0xc0496d8  jal         func_125B60
    ctx->pc = 0x1295C0u;
    SET_GPR_U32(ctx, 31, 0x1295C8u);
    ctx->pc = 0x1295C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1295C0u;
            // 0x1295c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125B60u;
    if (runtime->hasFunction(0x125B60u)) {
        auto targetFn = runtime->lookupFunction(0x125B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1295C8u; }
        if (ctx->pc != 0x1295C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_125b60_0x125bb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1295C8u; }
        if (ctx->pc != 0x1295C8u) { return; }
    }
    ctx->pc = 0x1295C8u;
    // 0x1295c8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1295c8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1295cc:
    // 0x1295cc: 0x3c140033  lui         $s4, 0x33
    ctx->pc = 0x1295ccu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)51 << 16));
    // 0x1295d0: 0x8e83ed60  lw          $v1, -0x12A0($s4)
    ctx->pc = 0x1295d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
    // 0x1295d4: 0x2c620100  sltiu       $v0, $v1, 0x100
    ctx->pc = 0x1295d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1295d8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1295d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1295dc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1295DCu;
    {
        const bool branch_taken_0x1295dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1295E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1295DCu;
            // 0x1295e0: 0x8eb3006c  lw          $s3, 0x6C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1295dc) {
            ctx->pc = 0x129608u;
            goto label_129608;
        }
    }
    ctx->pc = 0x1295E4u;
    // 0x1295e4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1295e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1295e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1295e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1295ec: 0x2442ed68  addiu       $v0, $v0, -0x1298
    ctx->pc = 0x1295ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962536));
    // 0x1295f0: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x1295f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x1295f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1295f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1295f8: 0x8c84f168  lw          $a0, -0xE98($a0)
    ctx->pc = 0x1295f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294963560)));
    // 0x1295fc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1295fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x129600: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x129600u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x129604: 0x8e83ed60  lw          $v1, -0x12A0($s4)
    ctx->pc = 0x129604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
label_129608:
    // 0x129608: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x129608u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x12960c: 0x2630ed68  addiu       $s0, $s1, -0x1298
    ctx->pc = 0x12960cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962536));
    // 0x129610: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x129610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129614: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x129614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x129618: 0x3c1e002d  lui         $fp, 0x2D
    ctx->pc = 0x129618u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)45 << 16));
    // 0x12961c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x12961cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x129620: 0xae83ed60  sw          $v1, -0x12A0($s4)
    ctx->pc = 0x129620u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294962528), GPR_U32(ctx, 3));
    // 0x129624: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x129624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x129628: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x129628u;
    SET_GPR_U32(ctx, 31, 0x129630u);
    ctx->pc = 0x12962Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129628u;
            // 0x12962c: 0xac530000  sw          $s3, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129630u; }
        if (ctx->pc != 0x129630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129630u; }
        if (ctx->pc != 0x129630u) { return; }
    }
    ctx->pc = 0x129630u;
    // 0x129630: 0x26650018  addiu       $a1, $s3, 0x18
    ctx->pc = 0x129630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x129634: 0x27c4bb98  addiu       $a0, $fp, -0x4468
    ctx->pc = 0x129634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294949784));
    // 0x129638: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x129638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x12963c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12963cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x129640: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x129640u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x129644: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x129644u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x129648: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x129648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12964c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x12964cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x129650: 0x8e82ed60  lw          $v0, -0x12A0($s4)
    ctx->pc = 0x129650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
    // 0x129654: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x129654u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x129658: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x129658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x12965c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x12965cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x129660: 0x8c620658  lw          $v0, 0x658($v1)
    ctx->pc = 0x129660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1624)));
    // 0x129664: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x129664u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x129668: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x129668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x12966c: 0x40f809  jalr        $v0
    ctx->pc = 0x12966Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x129674u);
        ctx->pc = 0x129670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12966Cu;
            // 0x129670: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x129674u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x127FF0u: goto label_127ff0;
            case 0x128254u: goto label_128254;
            case 0x12828Cu: goto label_12828c;
            case 0x128290u: goto label_128290;
            case 0x1282BCu: goto label_1282bc;
            case 0x1282C0u: goto label_1282c0;
            case 0x1282C8u: goto label_1282c8;
            case 0x1282F0u: goto label_1282f0;
            case 0x128350u: goto label_128350;
            case 0x128410u: goto label_128410;
            case 0x128424u: goto label_128424;
            case 0x128438u: goto label_128438;
            case 0x128458u: goto label_128458;
            case 0x128480u: goto label_128480;
            case 0x1284A0u: goto label_1284a0;
            case 0x1284DCu: goto label_1284dc;
            case 0x128530u: goto label_128530;
            case 0x1285D8u: goto label_1285d8;
            case 0x1285F8u: goto label_1285f8;
            case 0x128620u: goto label_128620;
            case 0x128640u: goto label_128640;
            case 0x128678u: goto label_128678;
            case 0x128690u: goto label_128690;
            case 0x1286D0u: goto label_1286d0;
            case 0x128768u: goto label_128768;
            case 0x128780u: goto label_128780;
            case 0x1287A0u: goto label_1287a0;
            case 0x1287C8u: goto label_1287c8;
            case 0x1287E8u: goto label_1287e8;
            case 0x128820u: goto label_128820;
            case 0x128830u: goto label_128830;
            case 0x128834u: goto label_128834;
            case 0x12885Cu: goto label_12885c;
            case 0x128898u: goto label_128898;
            case 0x128950u: goto label_128950;
            case 0x128970u: goto label_128970;
            case 0x128998u: goto label_128998;
            case 0x1289B8u: goto label_1289b8;
            case 0x1289F0u: goto label_1289f0;
            case 0x128A08u: goto label_128a08;
            case 0x128A0Cu: goto label_128a0c;
            case 0x128A1Cu: goto label_128a1c;
            case 0x128A48u: goto label_128a48;
            case 0x128A68u: goto label_128a68;
            case 0x128A88u: goto label_128a88;
            case 0x128AD8u: goto label_128ad8;
            case 0x128B90u: goto label_128b90;
            case 0x128BB0u: goto label_128bb0;
            case 0x128BD8u: goto label_128bd8;
            case 0x128BF8u: goto label_128bf8;
            case 0x128C30u: goto label_128c30;
            case 0x128C48u: goto label_128c48;
            case 0x128C68u: goto label_128c68;
            case 0x128C88u: goto label_128c88;
            case 0x128C98u: goto label_128c98;
            case 0x128CC0u: goto label_128cc0;
            case 0x128CE0u: goto label_128ce0;
            case 0x128CF0u: goto label_128cf0;
            case 0x128D38u: goto label_128d38;
            case 0x128DD0u: goto label_128dd0;
            case 0x128DE8u: goto label_128de8;
            case 0x128E04u: goto label_128e04;
            case 0x128E98u: goto label_128e98;
            case 0x128EB0u: goto label_128eb0;
            case 0x128ECCu: goto label_128ecc;
            case 0x128ED0u: goto label_128ed0;
            case 0x128F14u: goto label_128f14;
            case 0x128F48u: goto label_128f48;
            case 0x129090u: goto label_129090;
            case 0x129190u: goto label_129190;
            case 0x1291A8u: goto label_1291a8;
            case 0x1291ACu: goto label_1291ac;
            case 0x1291D0u: goto label_1291d0;
            case 0x129204u: goto label_129204;
            case 0x129220u: goto label_129220;
            case 0x129224u: goto label_129224;
            case 0x129244u: goto label_129244;
            case 0x12927Cu: goto label_12927c;
            case 0x129290u: goto label_129290;
            case 0x1292B0u: goto label_1292b0;
            case 0x1292E0u: goto label_1292e0;
            case 0x129310u: goto label_129310;
            case 0x129324u: goto label_129324;
            case 0x129340u: goto label_129340;
            case 0x129368u: goto label_129368;
            case 0x1293C0u: goto label_1293c0;
            case 0x129438u: goto label_129438;
            case 0x129458u: goto label_129458;
            case 0x1294B0u: goto label_1294b0;
            case 0x1294D8u: goto label_1294d8;
            case 0x1294F0u: goto label_1294f0;
            case 0x129510u: goto label_129510;
            case 0x129538u: goto label_129538;
            case 0x129558u: goto label_129558;
            case 0x129590u: goto label_129590;
            case 0x1295B0u: goto label_1295b0;
            case 0x1295CCu: goto label_1295cc;
            case 0x129608u: goto label_129608;
            case 0x1296C0u: goto label_1296c0;
            case 0x1296E0u: goto label_1296e0;
            case 0x129708u: goto label_129708;
            case 0x129728u: goto label_129728;
            case 0x129760u: goto label_129760;
            case 0x129770u: goto label_129770;
            case 0x129774u: goto label_129774;
            case 0x129790u: goto label_129790;
            case 0x1297B0u: goto label_1297b0;
            case 0x1297C4u: goto label_1297c4;
            case 0x1297E0u: goto label_1297e0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x129674u; }
            if (ctx->pc != 0x129674u) { return; }
        }
        }
    }
    ctx->pc = 0x129674u;
    // 0x129674: 0x8e82ed60  lw          $v0, -0x12A0($s4)
    ctx->pc = 0x129674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
    // 0x129678: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x129678u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12967c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x12967cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x129680: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x129680u;
    SET_GPR_U32(ctx, 31, 0x129688u);
    ctx->pc = 0x129684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129680u;
            // 0x129684: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129688u; }
        if (ctx->pc != 0x129688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129688u; }
        if (ctx->pc != 0x129688u) { return; }
    }
    ctx->pc = 0x129688u;
    // 0x129688: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x129688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x12968c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12968cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129690: 0x8c46f1ac  lw          $a2, -0xE54($v0)
    ctx->pc = 0x129690u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963628)));
    // 0x129694: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x129694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129698: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x129698u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12969c: 0xc049c00  jal         func_127000
    ctx->pc = 0x12969Cu;
    SET_GPR_U32(ctx, 31, 0x1296A4u);
    ctx->pc = 0x1296A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12969Cu;
            // 0x1296a0: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127000u;
    if (runtime->hasFunction(0x127000u)) {
        auto targetFn = runtime->lookupFunction(0x127000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1296A4u; }
        if (ctx->pc != 0x1296A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127000_0x127000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1296A4u; }
        if (ctx->pc != 0x1296A4u) { return; }
    }
    ctx->pc = 0x1296A4u;
    // 0x1296a4: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x1296a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x1296a8: 0x8ca4f168  lw          $a0, -0xE98($a1)
    ctx->pc = 0x1296a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294963560)));
    // 0x1296ac: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x1296acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x1296b0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1296B0u;
    {
        const bool branch_taken_0x1296b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1296B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1296B0u;
            // 0x1296b4: 0x24820008  addiu       $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1296b0) {
            ctx->pc = 0x1296E0u;
            goto label_1296e0;
        }
    }
    ctx->pc = 0x1296B8u;
    // 0x1296b8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1296b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1296bc: 0x0  nop
    ctx->pc = 0x1296bcu;
    // NOP
label_1296c0:
    // 0x1296c0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1296c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1296c4: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x1296c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x1296c8: 0x0  nop
    ctx->pc = 0x1296c8u;
    // NOP
    // 0x1296cc: 0x0  nop
    ctx->pc = 0x1296ccu;
    // NOP
    // 0x1296d0: 0x0  nop
    ctx->pc = 0x1296d0u;
    // NOP
    // 0x1296d4: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1296D4u;
    {
        const bool branch_taken_0x1296d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1296d4) {
            ctx->pc = 0x1296D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1296D4u;
            // 0x1296d8: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1296C0u;
            runtime->cooperativeGuestYield();
            goto label_1296c0;
        }
    }
    ctx->pc = 0x1296DCu;
    // 0x1296dc: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x1296dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_1296e0:
    // 0x1296e0: 0x3c036000  lui         $v1, 0x6000
    ctx->pc = 0x1296e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24576 << 16));
    // 0x1296e4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1296e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1296e8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1296e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1296ec: 0xaca2f168  sw          $v0, -0xE98($a1)
    ctx->pc = 0x1296ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294963560), GPR_U32(ctx, 2));
    // 0x1296f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1296f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1296f4: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x1296f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x1296f8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1296F8u;
    {
        const bool branch_taken_0x1296f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1296FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1296F8u;
            // 0x1296fc: 0x8e82ed60  lw          $v0, -0x12A0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1296f8) {
            ctx->pc = 0x129728u;
            goto label_129728;
        }
    }
    ctx->pc = 0x129700u;
    // 0x129700: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x129700u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x129704: 0x0  nop
    ctx->pc = 0x129704u;
    // NOP
label_129708:
    // 0x129708: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x129708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x12970c: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x12970cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x129710: 0x0  nop
    ctx->pc = 0x129710u;
    // NOP
    // 0x129714: 0x0  nop
    ctx->pc = 0x129714u;
    // NOP
    // 0x129718: 0x0  nop
    ctx->pc = 0x129718u;
    // NOP
    // 0x12971c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12971Cu;
    {
        const bool branch_taken_0x12971c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12971c) {
            ctx->pc = 0x129720u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12971Cu;
            // 0x129720: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x129708u;
            runtime->cooperativeGuestYield();
            goto label_129708;
        }
    }
    ctx->pc = 0x129724u;
    // 0x129724: 0x8e82ed60  lw          $v0, -0x12A0($s4)
    ctx->pc = 0x129724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
label_129728:
    // 0x129728: 0x2631ed68  addiu       $s1, $s1, -0x1298
    ctx->pc = 0x129728u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962536));
    // 0x12972c: 0xaca4f168  sw          $a0, -0xE98($a1)
    ctx->pc = 0x12972cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294963560), GPR_U32(ctx, 4));
    // 0x129730: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x129730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x129734: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x129734u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x129738: 0xae85ed60  sw          $a1, -0x12A0($s4)
    ctx->pc = 0x129738u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294962528), GPR_U32(ctx, 5));
    // 0x12973c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x12973cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x129740: 0x2ca30100  sltiu       $v1, $a1, 0x100
    ctx->pc = 0x129740u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x129744: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x129744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x129748: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x129748u;
    {
        const bool branch_taken_0x129748 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12974Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129748u;
            // 0x12974c: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129748) {
            ctx->pc = 0x129760u;
            goto label_129760;
        }
    }
    ctx->pc = 0x129750u;
    // 0x129750: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x129750u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x129754: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x129754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x129758: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x129758u;
    SET_GPR_U32(ctx, 31, 0x129760u);
    ctx->pc = 0x12975Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129758u;
            // 0x12975c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129760u; }
        if (ctx->pc != 0x129760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129760u; }
        if (ctx->pc != 0x129760u) { return; }
    }
    ctx->pc = 0x129760u;
label_129760:
    // 0x129760: 0x27c3bb98  addiu       $v1, $fp, -0x4468
    ctx->pc = 0x129760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294949784));
    // 0x129764: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x129764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x129768: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x129768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12976c: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x12976cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_129770:
    // 0x129770: 0x8ea2006c  lw          $v0, 0x6C($s5)
    ctx->pc = 0x129770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
label_129774:
    // 0x129774: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x129774u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x129778: 0x8cc4f168  lw          $a0, -0xE98($a2)
    ctx->pc = 0x129778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294963560)));
    // 0x12977c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x12977cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x129780: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x129780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x129784: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x129784u;
    {
        const bool branch_taken_0x129784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129784u;
            // 0x129788: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129784) {
            ctx->pc = 0x1297B0u;
            goto label_1297b0;
        }
    }
    ctx->pc = 0x12978Cu;
    // 0x12978c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x12978cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_129790:
    // 0x129790: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x129790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x129794: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x129794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x129798: 0x0  nop
    ctx->pc = 0x129798u;
    // NOP
    // 0x12979c: 0x0  nop
    ctx->pc = 0x12979cu;
    // NOP
    // 0x1297a0: 0x0  nop
    ctx->pc = 0x1297a0u;
    // NOP
    // 0x1297a4: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1297A4u;
    {
        const bool branch_taken_0x1297a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1297a4) {
            ctx->pc = 0x1297A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1297A4u;
            // 0x1297a8: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x129790u;
            runtime->cooperativeGuestYield();
            goto label_129790;
        }
    }
    ctx->pc = 0x1297ACu;
    // 0x1297ac: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x1297acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_1297b0:
    // 0x1297b0: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x1297b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x1297b4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1297b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1297b8: 0xacc3f168  sw          $v1, -0xE98($a2)
    ctx->pc = 0x1297b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294963560), GPR_U32(ctx, 3));
    // 0x1297bc: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x1297bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x1297c0: 0x8ea20110  lw          $v0, 0x110($s5)
    ctx->pc = 0x1297c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 272)));
label_1297c4:
    // 0x1297c4: 0x26a30080  addiu       $v1, $s5, 0x80
    ctx->pc = 0x1297c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
    // 0x1297c8: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1297C8u;
    {
        const bool branch_taken_0x1297c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1297CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1297C8u;
            // 0x1297cc: 0x7bb001c0  lq          $s0, 0x1C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1297c8) {
            ctx->pc = 0x1297E0u;
            goto label_1297e0;
        }
    }
    ctx->pc = 0x1297D0u;
    // 0x1297d0: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x1297d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x1297d4: 0xaea30110  sw          $v1, 0x110($s5)
    ctx->pc = 0x1297d4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 272), GPR_U32(ctx, 3));
    // 0x1297d8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1297d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1297dc: 0xaea2000c  sw          $v0, 0xC($s5)
    ctx->pc = 0x1297dcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
label_1297e0:
    // 0x1297e0: 0x7bb101b0  lq          $s1, 0x1B0($sp)
    ctx->pc = 0x1297e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1297e4: 0x7bb201a0  lq          $s2, 0x1A0($sp)
    ctx->pc = 0x1297e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1297e8: 0x7bb30190  lq          $s3, 0x190($sp)
    ctx->pc = 0x1297e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1297ec: 0x7bb40180  lq          $s4, 0x180($sp)
    ctx->pc = 0x1297ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1297f0: 0x7bb50170  lq          $s5, 0x170($sp)
    ctx->pc = 0x1297f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1297f4: 0x7bb60160  lq          $s6, 0x160($sp)
    ctx->pc = 0x1297f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1297f8: 0x7bb70150  lq          $s7, 0x150($sp)
    ctx->pc = 0x1297f8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1297fc: 0x7bbe0140  lq          $fp, 0x140($sp)
    ctx->pc = 0x1297fcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x129800: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x129800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x129804: 0xc7b801f0  lwc1        $f24, 0x1F0($sp)
    ctx->pc = 0x129804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x129808: 0xc7b701e8  lwc1        $f23, 0x1E8($sp)
    ctx->pc = 0x129808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x12980c: 0xc7b601e0  lwc1        $f22, 0x1E0($sp)
    ctx->pc = 0x12980cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x129810: 0xc7b501d8  lwc1        $f21, 0x1D8($sp)
    ctx->pc = 0x129810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x129814: 0xc7b401d0  lwc1        $f20, 0x1D0($sp)
    ctx->pc = 0x129814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x129818: 0x3e00008  jr          $ra
    ctx->pc = 0x129818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12981Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129818u;
            // 0x12981c: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x127FF0u: goto label_127ff0;
            case 0x128254u: goto label_128254;
            case 0x12828Cu: goto label_12828c;
            case 0x128290u: goto label_128290;
            case 0x1282BCu: goto label_1282bc;
            case 0x1282C0u: goto label_1282c0;
            case 0x1282C8u: goto label_1282c8;
            case 0x1282F0u: goto label_1282f0;
            case 0x128350u: goto label_128350;
            case 0x128410u: goto label_128410;
            case 0x128424u: goto label_128424;
            case 0x128438u: goto label_128438;
            case 0x128458u: goto label_128458;
            case 0x128480u: goto label_128480;
            case 0x1284A0u: goto label_1284a0;
            case 0x1284DCu: goto label_1284dc;
            case 0x128530u: goto label_128530;
            case 0x1285D8u: goto label_1285d8;
            case 0x1285F8u: goto label_1285f8;
            case 0x128620u: goto label_128620;
            case 0x128640u: goto label_128640;
            case 0x128678u: goto label_128678;
            case 0x128690u: goto label_128690;
            case 0x1286D0u: goto label_1286d0;
            case 0x128768u: goto label_128768;
            case 0x128780u: goto label_128780;
            case 0x1287A0u: goto label_1287a0;
            case 0x1287C8u: goto label_1287c8;
            case 0x1287E8u: goto label_1287e8;
            case 0x128820u: goto label_128820;
            case 0x128830u: goto label_128830;
            case 0x128834u: goto label_128834;
            case 0x12885Cu: goto label_12885c;
            case 0x128898u: goto label_128898;
            case 0x128950u: goto label_128950;
            case 0x128970u: goto label_128970;
            case 0x128998u: goto label_128998;
            case 0x1289B8u: goto label_1289b8;
            case 0x1289F0u: goto label_1289f0;
            case 0x128A08u: goto label_128a08;
            case 0x128A0Cu: goto label_128a0c;
            case 0x128A1Cu: goto label_128a1c;
            case 0x128A48u: goto label_128a48;
            case 0x128A68u: goto label_128a68;
            case 0x128A88u: goto label_128a88;
            case 0x128AD8u: goto label_128ad8;
            case 0x128B90u: goto label_128b90;
            case 0x128BB0u: goto label_128bb0;
            case 0x128BD8u: goto label_128bd8;
            case 0x128BF8u: goto label_128bf8;
            case 0x128C30u: goto label_128c30;
            case 0x128C48u: goto label_128c48;
            case 0x128C68u: goto label_128c68;
            case 0x128C88u: goto label_128c88;
            case 0x128C98u: goto label_128c98;
            case 0x128CC0u: goto label_128cc0;
            case 0x128CE0u: goto label_128ce0;
            case 0x128CF0u: goto label_128cf0;
            case 0x128D38u: goto label_128d38;
            case 0x128DD0u: goto label_128dd0;
            case 0x128DE8u: goto label_128de8;
            case 0x128E04u: goto label_128e04;
            case 0x128E98u: goto label_128e98;
            case 0x128EB0u: goto label_128eb0;
            case 0x128ECCu: goto label_128ecc;
            case 0x128ED0u: goto label_128ed0;
            case 0x128F14u: goto label_128f14;
            case 0x128F48u: goto label_128f48;
            case 0x129090u: goto label_129090;
            case 0x129190u: goto label_129190;
            case 0x1291A8u: goto label_1291a8;
            case 0x1291ACu: goto label_1291ac;
            case 0x1291D0u: goto label_1291d0;
            case 0x129204u: goto label_129204;
            case 0x129220u: goto label_129220;
            case 0x129224u: goto label_129224;
            case 0x129244u: goto label_129244;
            case 0x12927Cu: goto label_12927c;
            case 0x129290u: goto label_129290;
            case 0x1292B0u: goto label_1292b0;
            case 0x1292E0u: goto label_1292e0;
            case 0x129310u: goto label_129310;
            case 0x129324u: goto label_129324;
            case 0x129340u: goto label_129340;
            case 0x129368u: goto label_129368;
            case 0x1293C0u: goto label_1293c0;
            case 0x129438u: goto label_129438;
            case 0x129458u: goto label_129458;
            case 0x1294B0u: goto label_1294b0;
            case 0x1294D8u: goto label_1294d8;
            case 0x1294F0u: goto label_1294f0;
            case 0x129510u: goto label_129510;
            case 0x129538u: goto label_129538;
            case 0x129558u: goto label_129558;
            case 0x129590u: goto label_129590;
            case 0x1295B0u: goto label_1295b0;
            case 0x1295CCu: goto label_1295cc;
            case 0x129608u: goto label_129608;
            case 0x1296C0u: goto label_1296c0;
            case 0x1296E0u: goto label_1296e0;
            case 0x129708u: goto label_129708;
            case 0x129728u: goto label_129728;
            case 0x129760u: goto label_129760;
            case 0x129770u: goto label_129770;
            case 0x129774u: goto label_129774;
            case 0x129790u: goto label_129790;
            case 0x1297B0u: goto label_1297b0;
            case 0x1297C4u: goto label_1297c4;
            case 0x1297E0u: goto label_1297e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x129820u;
}
