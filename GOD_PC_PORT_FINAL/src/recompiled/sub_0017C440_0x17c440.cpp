#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017C440
// Address: 0x17c440 - 0x17c628
void sub_0017C440_0x17c440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C440_0x17c440");
#endif

    ctx->pc = 0x17c440u;

    // 0x17c440: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17c440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17c444: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17c444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17c448: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17c448u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c44c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17c44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17c450: 0xe7b90048  swc1        $f25, 0x48($sp)
    ctx->pc = 0x17c450u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x17c454: 0xe7b80040  swc1        $f24, 0x40($sp)
    ctx->pc = 0x17c454u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x17c458: 0xe7b70038  swc1        $f23, 0x38($sp)
    ctx->pc = 0x17c458u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x17c45c: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x17c45cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x17c460: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x17c460u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x17c464: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x17c464u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x17c468: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x17c468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x17c46c: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x17c46cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x17c470: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x17c470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x17c474: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x17c474u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x17c478: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x17c478u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x17c47c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17c47cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x17c480: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x17c480u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x17c484: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17c484u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17c488: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x17c488u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17c48c: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x17c48cu;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[4];
    // 0x17c490: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x17c490u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x17c494: 0x46170841  sub.s       $f1, $f1, $f23
    ctx->pc = 0x17c494u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[23]);
    // 0x17c498: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x17c498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x17c49c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x17c49cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17c4a0: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x17c4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17c4a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c4a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c4a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17c4a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17c4ac: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x17c4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x17c4b0: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x17c4b0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x17c4b4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x17c4b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x17c4b8: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x17c4b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x17c4bc: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x17c4bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x17c4c0: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x17c4c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x17c4c4: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x17c4c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x17c4c8: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x17c4c8u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x17c4cc: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x17c4ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x17c4d0: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x17c4d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x17c4d4: 0x46181082  mul.s       $f2, $f2, $f24
    ctx->pc = 0x17c4d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[24]);
    // 0x17c4d8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x17c4d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x17c4dc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x17c4dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x17c4e0: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x17c4e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x17c4e4: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x17c4e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x17c4e8: 0x46170001  sub.s       $f0, $f0, $f23
    ctx->pc = 0x17c4e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[23]);
    // 0x17c4ec: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x17c4ecu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x17c4f0: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x17c4f0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x17c4f4: 0x461818c2  mul.s       $f3, $f3, $f24
    ctx->pc = 0x17c4f4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[24]);
    // 0x17c4f8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x17c4f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x17c4fc: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x17c4fcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x17c500: 0xc060efc  jal         func_183BF0
    ctx->pc = 0x17C500u;
    SET_GPR_U32(ctx, 31, 0x17C508u);
    ctx->pc = 0x17C504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C500u;
            // 0x17c504: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x183BF0u;
    if (runtime->hasFunction(0x183BF0u)) {
        auto targetFn = runtime->lookupFunction(0x183BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C508u; }
        if (ctx->pc != 0x17C508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183BF0_0x183bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C508u; }
        if (ctx->pc != 0x17C508u) { return; }
    }
    ctx->pc = 0x17C508u;
    // 0x17c508: 0x46190003  div.s       $f0, $f0, $f25
    ctx->pc = 0x17c508u;
    if (ctx->f[25] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[25];
    // 0x17c50c: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x17c50cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x17c510: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x17c510u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17c514: 0x46160542  mul.s       $f21, $f0, $f22
    ctx->pc = 0x17c514u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x17c518: 0x4600ab05  abs.s       $f12, $f21
    ctx->pc = 0x17c518u;
    ctx->f[12] = FPU_ABS_S(ctx->f[21]);
    // 0x17c51c: 0x460c0834  c.lt.s      $f1, $f12
    ctx->pc = 0x17c51cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17c520: 0x0  nop
    ctx->pc = 0x17c520u;
    // NOP
    // 0x17c524: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
    ctx->pc = 0x17C524u;
    {
        const bool branch_taken_0x17c524 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17c524) {
            ctx->pc = 0x17C528u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17C524u;
            // 0x17c528: 0x460cb301  sub.s       $f12, $f22, $f12 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[22], ctx->f[12]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x17C530u;
            goto label_17c530;
        }
    }
    ctx->pc = 0x17C52Cu;
    // 0x17c52c: 0x0  nop
    ctx->pc = 0x17c52cu;
    // NOP
label_17c530:
    // 0x17c530: 0x3c014234  lui         $at, 0x4234
    ctx->pc = 0x17c530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16948 << 16));
    // 0x17c534: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17c534u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c538: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x17c538u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17c53c: 0x0  nop
    ctx->pc = 0x17c53cu;
    // NOP
    // 0x17c540: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x17C540u;
    {
        const bool branch_taken_0x17c540 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17c540) {
            ctx->pc = 0x17C544u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17C540u;
            // 0x17c544: 0x460c0b01  sub.s       $f12, $f1, $f12 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x17C548u;
            goto label_17c548;
        }
    }
    ctx->pc = 0x17C548u;
label_17c548:
    // 0x17c548: 0x46166303  div.s       $f12, $f12, $f22
    ctx->pc = 0x17c548u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[22];
    // 0x17c54c: 0xc6140000  lwc1        $f20, 0x0($s0)
    ctx->pc = 0x17c54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17c550: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x17c550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c554: 0x4614a502  mul.s       $f20, $f20, $f20
    ctx->pc = 0x17c554u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x17c558: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x17c558u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x17c55c: 0x46196302  mul.s       $f12, $f12, $f25
    ctx->pc = 0x17c55cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[25]);
    // 0x17c560: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x17c560u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x17c564: 0x46140504  c1          0x140504
    ctx->pc = 0x17c564u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x17c568: 0xc060e52  jal         func_183948
    ctx->pc = 0x17C568u;
    SET_GPR_U32(ctx, 31, 0x17C570u);
    ctx->pc = 0x183948u;
    if (runtime->hasFunction(0x183948u)) {
        auto targetFn = runtime->lookupFunction(0x183948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C570u; }
        if (ctx->pc != 0x17C570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183948_0x183a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C570u; }
        if (ctx->pc != 0x17C570u) { return; }
    }
    ctx->pc = 0x17C570u;
    // 0x17c570: 0x46170000  add.s       $f0, $f0, $f23
    ctx->pc = 0x17c570u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
    // 0x17c574: 0x3c013ea8  lui         $at, 0x3EA8
    ctx->pc = 0x17c574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16040 << 16));
    // 0x17c578: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x17c578u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x17c57c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x17c57cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17c580: 0x3c013f2b  lui         $at, 0x3F2B
    ctx->pc = 0x17c580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16171 << 16));
    // 0x17c584: 0x3421851e  ori         $at, $at, 0x851E
    ctx->pc = 0x17c584u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34078);
    // 0x17c588: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x17c588u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x17c58c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x17c58cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17c590: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x17c590u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x17c594: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x17c594u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x17c598: 0x4602a501  sub.s       $f20, $f20, $f2
    ctx->pc = 0x17c598u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
    // 0x17c59c: 0x4603a503  div.s       $f20, $f20, $f3
    ctx->pc = 0x17c59cu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[3];
    // 0x17c5a0: 0x4601a528  max.s       $f20, $f20, $f1
    ctx->pc = 0x17c5a0u;
    ctx->f[20] = std::max(ctx->f[20], ctx->f[1]);
    // 0x17c5a4: 0x4617a529  min.s       $f20, $f20, $f23
    ctx->pc = 0x17c5a4u;
    ctx->f[20] = std::min(ctx->f[20], ctx->f[23]);
    // 0x17c5a8: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x17c5a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17c5ac: 0x0  nop
    ctx->pc = 0x17c5acu;
    // NOP
    // 0x17c5b0: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x17C5B0u;
    {
        const bool branch_taken_0x17c5b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17C5B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C5B0u;
            // 0x17c5b4: 0xe614000c  swc1        $f20, 0xC($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c5b0) {
            ctx->pc = 0x17C5E0u;
            goto label_17c5e0;
        }
    }
    ctx->pc = 0x17C5B8u;
    // 0x17c5b8: 0x4616ad03  div.s       $f20, $f21, $f22
    ctx->pc = 0x17c5b8u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[20] = ctx->f[21] / ctx->f[22];
    // 0x17c5bc: 0xe6150008  swc1        $f21, 0x8($s0)
    ctx->pc = 0x17c5bcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x17c5c0: 0x4619a502  mul.s       $f20, $f20, $f25
    ctx->pc = 0x17c5c0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[25]);
    // 0x17c5c4: 0xc060e80  jal         func_183A00
    ctx->pc = 0x17C5C4u;
    SET_GPR_U32(ctx, 31, 0x17C5CCu);
    ctx->pc = 0x17C5C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C5C4u;
            // 0x17c5c8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x183A00u;
    if (runtime->hasFunction(0x183A00u)) {
        auto targetFn = runtime->lookupFunction(0x183A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C5CCu; }
        if (ctx->pc != 0x17C5CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183a00_0x183ab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C5CCu; }
        if (ctx->pc != 0x17C5CCu) { return; }
    }
    ctx->pc = 0x17C5CCu;
    // 0x17c5cc: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x17c5ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x17c5d0: 0xc060e52  jal         func_183948
    ctx->pc = 0x17C5D0u;
    SET_GPR_U32(ctx, 31, 0x17C5D8u);
    ctx->pc = 0x17C5D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C5D0u;
            // 0x17c5d4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x183948u;
    if (runtime->hasFunction(0x183948u)) {
        auto targetFn = runtime->lookupFunction(0x183948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C5D8u; }
        if (ctx->pc != 0x17C5D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183948_0x183a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C5D8u; }
        if (ctx->pc != 0x17C5D8u) { return; }
    }
    ctx->pc = 0x17C5D8u;
    // 0x17c5d8: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x17c5d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x17c5dc: 0x0  nop
    ctx->pc = 0x17c5dcu;
    // NOP
label_17c5e0:
    // 0x17c5e0: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x17c5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c5e4: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x17c5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c5e8: 0xc6020014  lwc1        $f2, 0x14($s0)
    ctx->pc = 0x17c5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17c5ec: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x17c5ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17c5f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17c5f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c5f4: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x17c5f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x17c5f8: 0xc7b90048  lwc1        $f25, 0x48($sp)
    ctx->pc = 0x17c5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x17c5fc: 0xc7b80040  lwc1        $f24, 0x40($sp)
    ctx->pc = 0x17c5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x17c600: 0xe6010018  swc1        $f1, 0x18($s0)
    ctx->pc = 0x17c600u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x17c604: 0xe602001c  swc1        $f2, 0x1C($s0)
    ctx->pc = 0x17c604u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x17c608: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17c608u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c60c: 0xc7b70038  lwc1        $f23, 0x38($sp)
    ctx->pc = 0x17c60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x17c610: 0xc7b60030  lwc1        $f22, 0x30($sp)
    ctx->pc = 0x17c610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x17c614: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x17c614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x17c618: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x17c618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17c61c: 0x3e00008  jr          $ra
    ctx->pc = 0x17C61Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C61Cu;
            // 0x17c620: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17C530u: goto label_17c530;
            case 0x17C548u: goto label_17c548;
            case 0x17C5E0u: goto label_17c5e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17C624u;
    // 0x17c624: 0x0  nop
    ctx->pc = 0x17c624u;
    // NOP
}
