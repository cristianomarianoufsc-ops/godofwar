#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D7FD8
// Address: 0x1d7fd8 - 0x1d8130
void sub_001D7FD8_0x1d7fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D7FD8_0x1d7fd8");
#endif

    ctx->pc = 0x1d7fd8u;

    // 0x1d7fd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d7fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d7fdc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d7fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d7fe0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d7fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d7fe4: 0xc06f9e8  jal         func_1BE7A0
    ctx->pc = 0x1D7FE4u;
    SET_GPR_U32(ctx, 31, 0x1D7FECu);
    ctx->pc = 0x1D7FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7FE4u;
            // 0x1d7fe8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE7A0u;
    if (runtime->hasFunction(0x1BE7A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7FECu; }
        if (ctx->pc != 0x1D7FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1be7a0_0x1be7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7FECu; }
        if (ctx->pc != 0x1D7FECu) { return; }
    }
    ctx->pc = 0x1D7FECu;
    // 0x1d7fec: 0x5440004b  bnel        $v0, $zero, . + 4 + (0x4B << 2)
    ctx->pc = 0x1D7FECu;
    {
        const bool branch_taken_0x1d7fec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7fec) {
            ctx->pc = 0x1D7FF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7FECu;
            // 0x1d7ff0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D811Cu;
            goto label_1d811c;
        }
    }
    ctx->pc = 0x1D7FF4u;
    // 0x1d7ff4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1d7ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d7ff8: 0x54400048  bnel        $v0, $zero, . + 4 + (0x48 << 2)
    ctx->pc = 0x1D7FF8u;
    {
        const bool branch_taken_0x1d7ff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7ff8) {
            ctx->pc = 0x1D7FFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7FF8u;
            // 0x1d7ffc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D811Cu;
            goto label_1d811c;
        }
    }
    ctx->pc = 0x1D8000u;
    // 0x1d8000: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d8000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1d8004: 0x8c42cd58  lw          $v0, -0x32A8($v0)
    ctx->pc = 0x1d8004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x1d8008: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1d8008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d800c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d800cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d8010: 0xc44a0038  lwc1        $f10, 0x38($v0)
    ctx->pc = 0x1d8010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x1d8014: 0xc449003c  lwc1        $f9, 0x3C($v0)
    ctx->pc = 0x1d8014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x1d8018: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d8018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d801c: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1d801cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1d8020: 0x460a5042  mul.s       $f1, $f10, $f10
    ctx->pc = 0x1d8020u;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x1d8024: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x1d8024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x1d8028: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1d8028u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1d802c: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1d802cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x1d8030: 0x460948c2  mul.s       $f3, $f9, $f9
    ctx->pc = 0x1d8030u;
    ctx->f[3] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
    // 0x1d8034: 0xc6000054  lwc1        $f0, 0x54($s0)
    ctx->pc = 0x1d8034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8038: 0xc6020058  lwc1        $f2, 0x58($s0)
    ctx->pc = 0x1d8038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d803c: 0x46005001  sub.s       $f0, $f10, $f0
    ctx->pc = 0x1d803cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[10], ctx->f[0]);
    // 0x1d8040: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1d8040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1d8044: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1d8044u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1d8048: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1d8048u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1d804c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1d804cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x1d8050: 0xe6090058  swc1        $f9, 0x58($s0)
    ctx->pc = 0x1d8050u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x1d8054: 0x46010044  c1          0x10044
    ctx->pc = 0x1d8054u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1d8058: 0x46024881  sub.s       $f2, $f9, $f2
    ctx->pc = 0x1d8058u;
    ctx->f[2] = FPU_SUB_S(ctx->f[9], ctx->f[2]);
    // 0x1d805c: 0x46013841  sub.s       $f1, $f7, $f1
    ctx->pc = 0x1d805cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[7], ctx->f[1]);
    // 0x1d8060: 0xe60a0054  swc1        $f10, 0x54($s0)
    ctx->pc = 0x1d8060u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x1d8064: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1d8064u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1d8068: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x1d8068u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x1d806c: 0x46080842  mul.s       $f1, $f1, $f8
    ctx->pc = 0x1d806cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x1d8070: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1d8070u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1d8074: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x1d8074u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x1d8078: 0x46000004  c1          0x4
    ctx->pc = 0x1d8078u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1d807c: 0x46040942  mul.s       $f5, $f1, $f4
    ctx->pc = 0x1d807cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1d8080: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x1d8080u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x1d8084: 0xc44a0058  lwc1        $f10, 0x58($v0)
    ctx->pc = 0x1d8084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x1d8088: 0xc449005c  lwc1        $f9, 0x5C($v0)
    ctx->pc = 0x1d8088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x1d808c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d808cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1d8090: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1d8090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1d8094: 0x46094982  mul.s       $f6, $f9, $f9
    ctx->pc = 0x1d8094u;
    ctx->f[6] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
    // 0x1d8098: 0xc600005c  lwc1        $f0, 0x5C($s0)
    ctx->pc = 0x1d8098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d809c: 0x460a5042  mul.s       $f1, $f10, $f10
    ctx->pc = 0x1d809cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x1d80a0: 0xc6020060  lwc1        $f2, 0x60($s0)
    ctx->pc = 0x1d80a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d80a4: 0x46005001  sub.s       $f0, $f10, $f0
    ctx->pc = 0x1d80a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[10], ctx->f[0]);
    // 0x1d80a8: 0xc6030050  lwc1        $f3, 0x50($s0)
    ctx->pc = 0x1d80a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1d80ac: 0x46024881  sub.s       $f2, $f9, $f2
    ctx->pc = 0x1d80acu;
    ctx->f[2] = FPU_SUB_S(ctx->f[9], ctx->f[2]);
    // 0x1d80b0: 0xe6090060  swc1        $f9, 0x60($s0)
    ctx->pc = 0x1d80b0u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x1d80b4: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x1d80b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x1d80b8: 0xe60a005c  swc1        $f10, 0x5C($s0)
    ctx->pc = 0x1d80b8u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    // 0x1d80bc: 0x46010044  c1          0x10044
    ctx->pc = 0x1d80bcu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1d80c0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1d80c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1d80c4: 0x46013841  sub.s       $f1, $f7, $f1
    ctx->pc = 0x1d80c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[7], ctx->f[1]);
    // 0x1d80c8: 0xc446c658  lwc1        $f6, -0x39A8($v0)
    ctx->pc = 0x1d80c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1d80cc: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x1d80ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x1d80d0: 0x44804800  mtc1        $zero, $f9
    ctx->pc = 0x1d80d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x1d80d4: 0x46080842  mul.s       $f1, $f1, $f8
    ctx->pc = 0x1d80d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x1d80d8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1d80d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1d80dc: 0x46000004  c1          0x4
    ctx->pc = 0x1d80dcu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1d80e0: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x1d80e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x1d80e4: 0x46040902  mul.s       $f4, $f1, $f4
    ctx->pc = 0x1d80e4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1d80e8: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x1d80e8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x1d80ec: 0x46042968  max.s       $f5, $f5, $f4
    ctx->pc = 0x1d80ecu;
    ctx->f[5] = std::max(ctx->f[5], ctx->f[4]);
    // 0x1d80f0: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x1d80f0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x1d80f4: 0xe6030050  swc1        $f3, 0x50($s0)
    ctx->pc = 0x1d80f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x1d80f8: 0xc460292c  lwc1        $f0, 0x292C($v1)
    ctx->pc = 0x1d80f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 10540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d80fc: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x1d80fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x1d8100: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x1d8100u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x1d8104: 0x46091834  c.lt.s      $f3, $f9
    ctx->pc = 0x1d8104u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d8108: 0x0  nop
    ctx->pc = 0x1d8108u;
    // NOP
    // 0x1d810c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1D810Cu;
    {
        const bool branch_taken_0x1d810c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D8110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D810Cu;
            // 0x1d8110: 0xe6030050  swc1        $f3, 0x50($s0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d810c) {
            ctx->pc = 0x1D8118u;
            goto label_1d8118;
        }
    }
    ctx->pc = 0x1D8114u;
    // 0x1d8114: 0xe6090050  swc1        $f9, 0x50($s0)
    ctx->pc = 0x1d8114u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
label_1d8118:
    // 0x1d8118: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d8118u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d811c:
    // 0x1d811c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d811cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8120: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8120u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8120u;
            // 0x1d8124: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D8118u: goto label_1d8118;
            case 0x1D811Cu: goto label_1d811c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D8128u;
    // 0x1d8128: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1d8128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1d812c: 0x0  nop
    ctx->pc = 0x1d812cu;
    // NOP
}
