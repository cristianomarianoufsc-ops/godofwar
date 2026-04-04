#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C9888
// Address: 0x1c9888 - 0x1ca2a0
void sub_001C9888_0x1c9888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C9888_0x1c9888");
#endif

    ctx->pc = 0x1c9888u;

    // 0x1c9888: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x1c9888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x1c988c: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1c988cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1c9890: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c9890u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c9894: 0x7fb00170  sq          $s0, 0x170($sp)
    ctx->pc = 0x1c9894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 16));
    // 0x1c9898: 0x7fb10160  sq          $s1, 0x160($sp)
    ctx->pc = 0x1c9898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 17));
    // 0x1c989c: 0x7fb40130  sq          $s4, 0x130($sp)
    ctx->pc = 0x1c989cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 20));
    // 0x1c98a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c98a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c98a4: 0xe7b901a8  swc1        $f25, 0x1A8($sp)
    ctx->pc = 0x1c98a4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
    // 0x1c98a8: 0x7006a4a9  por         $s4, $zero, $a2
    ctx->pc = 0x1c98a8u;
    SET_GPR_VEC(ctx, 20, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 6)));
    // 0x1c98ac: 0xe7b50188  swc1        $f21, 0x188($sp)
    ctx->pc = 0x1c98acu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x1c98b0: 0xe7b40180  swc1        $f20, 0x180($sp)
    ctx->pc = 0x1c98b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x1c98b4: 0x7fa50060  sq          $a1, 0x60($sp)
    ctx->pc = 0x1c98b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 5));
    // 0x1c98b8: 0x7fb20150  sq          $s2, 0x150($sp)
    ctx->pc = 0x1c98b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 18));
    // 0x1c98bc: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1c98bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1c98c0: 0x7fb30140  sq          $s3, 0x140($sp)
    ctx->pc = 0x1c98c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 19));
    // 0x1c98c4: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x1c98c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x1c98c8: 0xe7bb01b8  swc1        $f27, 0x1B8($sp)
    ctx->pc = 0x1c98c8u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
    // 0x1c98cc: 0xe7ba01b0  swc1        $f26, 0x1B0($sp)
    ctx->pc = 0x1c98ccu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x1c98d0: 0xe7b801a0  swc1        $f24, 0x1A0($sp)
    ctx->pc = 0x1c98d0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x1c98d4: 0xe7b70198  swc1        $f23, 0x198($sp)
    ctx->pc = 0x1c98d4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x1c98d8: 0xe7b60190  swc1        $f22, 0x190($sp)
    ctx->pc = 0x1c98d8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x1c98dc: 0xc4b4c658  lwc1        $f20, -0x39A8($a1)
    ctx->pc = 0x1c98dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c98e0: 0x8e220320  lw          $v0, 0x320($s1)
    ctx->pc = 0x1c98e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x1c98e4: 0xc63b0168  lwc1        $f27, 0x168($s1)
    ctx->pc = 0x1c98e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x1c98e8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1c98e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c98ec: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1c98ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c98f0: 0xc4410238  lwc1        $f1, 0x238($v0)
    ctx->pc = 0x1c98f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c98f4: 0xc440023c  lwc1        $f0, 0x23C($v0)
    ctx->pc = 0x1c98f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c98f8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1c98f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1c98fc: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x1c98fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
    // 0x1c9900: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1c9900u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1c9904: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x1c9904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
    // 0x1c9908: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x1c9908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1c990c: 0x461b0842  mul.s       $f1, $f1, $f27
    ctx->pc = 0x1c990cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[27]);
    // 0x1c9910: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x1c9910u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x1c9914: 0x40f809  jalr        $v0
    ctx->pc = 0x1C9914u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C991Cu);
        ctx->pc = 0x1C9918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9914u;
            // 0x1c9918: 0x461b0542  mul.s       $f21, $f0, $f27 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[27]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C991Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C9964u: goto label_1c9964;
            case 0x1C99A0u: goto label_1c99a0;
            case 0x1C9A20u: goto label_1c9a20;
            case 0x1C9A2Cu: goto label_1c9a2c;
            case 0x1C9AC8u: goto label_1c9ac8;
            case 0x1C9AF4u: goto label_1c9af4;
            case 0x1C9AF8u: goto label_1c9af8;
            case 0x1C9B30u: goto label_1c9b30;
            case 0x1C9B58u: goto label_1c9b58;
            case 0x1C9C38u: goto label_1c9c38;
            case 0x1C9C3Cu: goto label_1c9c3c;
            case 0x1C9C6Cu: goto label_1c9c6c;
            case 0x1C9CF0u: goto label_1c9cf0;
            case 0x1C9CF4u: goto label_1c9cf4;
            case 0x1C9DA0u: goto label_1c9da0;
            case 0x1C9DB0u: goto label_1c9db0;
            case 0x1C9E98u: goto label_1c9e98;
            case 0x1C9EB4u: goto label_1c9eb4;
            case 0x1C9EC0u: goto label_1c9ec0;
            case 0x1C9F38u: goto label_1c9f38;
            case 0x1C9F80u: goto label_1c9f80;
            case 0x1C9F88u: goto label_1c9f88;
            case 0x1C9FC8u: goto label_1c9fc8;
            case 0x1C9FF8u: goto label_1c9ff8;
            case 0x1CA048u: goto label_1ca048;
            case 0x1CA088u: goto label_1ca088;
            case 0x1CA090u: goto label_1ca090;
            case 0x1CA0F0u: goto label_1ca0f0;
            case 0x1CA10Cu: goto label_1ca10c;
            case 0x1CA218u: goto label_1ca218;
            case 0x1CA21Cu: goto label_1ca21c;
            case 0x1CA234u: goto label_1ca234;
            case 0x1CA260u: goto label_1ca260;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C991Cu; }
            if (ctx->pc != 0x1C991Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1C991Cu;
    // 0x1c991c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1c991cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1c9920: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c9920u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c9924: 0x26260120  addiu       $a2, $s1, 0x120
    ctx->pc = 0x1c9924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x1c9928: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1c9928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x1c992c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1c992cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c9930: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c9930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9934: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c9934u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c9938: 0xc622016c  lwc1        $f2, 0x16C($s1)
    ctx->pc = 0x1c9938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c993c: 0x7a220120  lq          $v0, 0x120($s1)
    ctx->pc = 0x1c993cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x1c9940: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c9940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c9944: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1c9944u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1c9948: 0x44901800  mtc1        $s0, $f3
    ctx->pc = 0x1c9948u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c994c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1c994cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1c9950: 0x46030832  c.eq.s      $f1, $f3
    ctx->pc = 0x1c9950u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c9954: 0x0  nop
    ctx->pc = 0x1c9954u;
    // NOP
    // 0x1c9958: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1C9958u;
    {
        const bool branch_taken_0x1c9958 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C995Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9958u;
            // 0x1c995c: 0x4600a642  mul.s       $f25, $f20, $f0 (Delay Slot)
        ctx->f[25] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9958) {
            ctx->pc = 0x1C9964u;
            goto label_1c9964;
        }
    }
    ctx->pc = 0x1C9960u;
    // 0x1c9960: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1c9960u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c9964:
    // 0x1c9964: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1C9964u;
    {
        const bool branch_taken_0x1c9964 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9964u;
            // 0x1c9968: 0x26230150  addiu       $v1, $s1, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9964) {
            ctx->pc = 0x1C99A0u;
            goto label_1c99a0;
        }
    }
    ctx->pc = 0x1C996Cu;
    // 0x1c996c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1c996cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1c9970: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c9970u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c9974: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c9974u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c9978: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x1c9978u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x1c997c: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x1c997cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x1c9980: 0x3c013f8e  lui         $at, 0x3F8E
    ctx->pc = 0x1c9980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16270 << 16));
    // 0x1c9984: 0x3421353f  ori         $at, $at, 0x353F
    ctx->pc = 0x1c9984u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13631);
    // 0x1c9988: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c9988u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c998c: 0x8e220174  lw          $v0, 0x174($s1)
    ctx->pc = 0x1c998cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x1c9990: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x1c9990u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1c9994: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1c9994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1c9998: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1c9998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1c999c: 0xae220174  sw          $v0, 0x174($s1)
    ctx->pc = 0x1c999cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 372), GPR_U32(ctx, 2));
label_1c99a0:
    // 0x1c99a0: 0x72101b89  pcpyld      $v1, $s0, $s0
    ctx->pc = 0x1c99a0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 16), GPR_VEC(ctx, 16)));
    // 0x1c99a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c99a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c99a8: 0x70f01389  pcpyld      $v0, $a3, $s0
    ctx->pc = 0x1c99a8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 16)));
    // 0x1c99ac: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1c99acu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1c99b0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1c99b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1c99b4: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x1c99b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x1c99b8: 0x4404a800  mfc1        $a0, $f21
    ctx->pc = 0x1c99b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1c99bc: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x1c99bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1c99c0: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x1c99c0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c99c4: 0xfba20100  sqc2        $vf2, 0x100($sp)
    ctx->pc = 0x1c99c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c99c8: 0x4a811080  vaddx.y     $vf2, $vf2, $vf1x
    ctx->pc = 0x1c99c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c99cc: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x1c99ccu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1c99d0: 0x7e220120  sq          $v0, 0x120($s1)
    ctx->pc = 0x1c99d0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 288), GPR_VEC(ctx, 2));
    // 0x1c99d4: 0x4a821845  vsuby.y     $vf1, $vf3, $vf2y
    ctx->pc = 0x1c99d4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c99d8: 0xf8c20010  sqc2        $vf2, 0x10($a2)
    ctx->pc = 0x1c99d8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c99dc: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1c99dcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c99e0: 0x26330260  addiu       $s3, $s1, 0x260
    ctx->pc = 0x1c99e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 608));
    // 0x1c99e4: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x1c99e4u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1c99e8: 0xacc20020  sw          $v0, 0x20($a2)
    ctx->pc = 0x1c99e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 2));
    // 0x1c99ec: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x1c99ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1c99f0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1c99f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1c99f4: 0xda210260  lqc2        $vf1, 0x260($s1)
    ctx->pc = 0x1c99f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x1c99f8: 0x4b020040  vaddx.x     $vf1, $vf0, $vf2x
    ctx->pc = 0x1c99f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c99fc: 0x8e240324  lw          $a0, 0x324($s1)
    ctx->pc = 0x1c99fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 804)));
    // 0x1c9a00: 0xfa210260  sqc2        $vf1, 0x260($s1)
    ctx->pc = 0x1c9a00u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 608), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c9a04: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x1c9a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1c9a08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C9A08u;
    {
        const bool branch_taken_0x1c9a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9a08) {
            ctx->pc = 0x1C9A20u;
            goto label_1c9a20;
        }
    }
    ctx->pc = 0x1C9A10u;
    // 0x1c9a10: 0xc090d56  jal         func_243558
    ctx->pc = 0x1C9A10u;
    SET_GPR_U32(ctx, 31, 0x1C9A18u);
    ctx->pc = 0x243558u;
    if (runtime->hasFunction(0x243558u)) {
        auto targetFn = runtime->lookupFunction(0x243558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9A18u; }
        if (ctx->pc != 0x1C9A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243558_0x243560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9A18u; }
        if (ctx->pc != 0x1C9A18u) { return; }
    }
    ctx->pc = 0x1C9A18u;
    // 0x1c9a18: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C9A18u;
    {
        const bool branch_taken_0x1c9a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9A18u;
            // 0x1c9a1c: 0x90420012  lbu         $v0, 0x12($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9a18) {
            ctx->pc = 0x1C9A2Cu;
            goto label_1c9a2c;
        }
    }
    ctx->pc = 0x1C9A20u;
label_1c9a20:
    // 0x1c9a20: 0xc090d54  jal         func_243550
    ctx->pc = 0x1C9A20u;
    SET_GPR_U32(ctx, 31, 0x1C9A28u);
    ctx->pc = 0x243550u;
    if (runtime->hasFunction(0x243550u)) {
        auto targetFn = runtime->lookupFunction(0x243550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9A28u; }
        if (ctx->pc != 0x1C9A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243550_0x243558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9A28u; }
        if (ctx->pc != 0x1C9A28u) { return; }
    }
    ctx->pc = 0x1C9A28u;
    // 0x1c9a28: 0x94420038  lhu         $v0, 0x38($v0)
    ctx->pc = 0x1c9a28u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1c9a2c:
    // 0x1c9a2c: 0x30420018  andi        $v0, $v0, 0x18
    ctx->pc = 0x1c9a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24);
    // 0x1c9a30: 0x104001af  beqz        $v0, . + 4 + (0x1AF << 2)
    ctx->pc = 0x1C9A30u;
    {
        const bool branch_taken_0x1c9a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9A30u;
            // 0x1c9a34: 0xdba10060  lqc2        $vf1, 0x60($sp) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9a30) {
            ctx->pc = 0x1CA0F0u;
            goto label_1ca0f0;
        }
    }
    ctx->pc = 0x1C9A38u;
    // 0x1c9a38: 0xdba20100  lqc2        $vf2, 0x100($sp)
    ctx->pc = 0x1c9a38u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1c9a3c: 0x4be1106c  vsub.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x1c9a3cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c9a40: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x1c9a40u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c9a44: 0x8e220320  lw          $v0, 0x320($s1)
    ctx->pc = 0x1c9a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x1c9a48: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x1c9a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
    // 0x1c9a4c: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x1c9a4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x1c9a50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c9a50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9a54: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1c9a54u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c9a58: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1c9a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c9a5c: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x1c9a5cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c9a60: 0x26320050  addiu       $s2, $s1, 0x50
    ctx->pc = 0x1c9a60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x1c9a64: 0x70041f89  pexew       $v1, $a0
    ctx->pc = 0x1c9a64u;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1c9a68: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1c9a68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c9a6c: 0x7a500020  lq          $s0, 0x20($s2)
    ctx->pc = 0x1c9a6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1c9a70: 0x4600ce03  div.s       $f24, $f25, $f0
    ctx->pc = 0x1c9a70u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[24] = copysignf(INFINITY, ctx->f[25] * 0.0f); } else ctx->f[24] = ctx->f[25] / ctx->f[0];
    // 0x1c9a74: 0xc060efc  jal         func_183BF0
    ctx->pc = 0x1C9A74u;
    SET_GPR_U32(ctx, 31, 0x1C9A7Cu);
    ctx->pc = 0x1C9A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9A74u;
            // 0x1c9a78: 0xc45a01e8  lwc1        $f26, 0x1E8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x183BF0u;
    if (runtime->hasFunction(0x183BF0u)) {
        auto targetFn = runtime->lookupFunction(0x183BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9A7Cu; }
        if (ctx->pc != 0x1C9A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183BF0_0x183bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9A7Cu; }
        if (ctx->pc != 0x1C9A7Cu) { return; }
    }
    ctx->pc = 0x1C9A7Cu;
    // 0x1c9a7c: 0x44906800  mtc1        $s0, $f13
    ctx->pc = 0x1c9a7cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c9a80: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1c9a80u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1c9a84: 0x70101789  pexew       $v0, $s0
    ctx->pc = 0x1c9a84u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1c9a88: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c9a88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c9a8c: 0xc060efc  jal         func_183BF0
    ctx->pc = 0x1C9A8Cu;
    SET_GPR_U32(ctx, 31, 0x1C9A94u);
    ctx->pc = 0x183BF0u;
    if (runtime->hasFunction(0x183BF0u)) {
        auto targetFn = runtime->lookupFunction(0x183BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9A94u; }
        if (ctx->pc != 0x1C9A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183BF0_0x183bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9A94u; }
        if (ctx->pc != 0x1C9A94u) { return; }
    }
    ctx->pc = 0x1C9A94u;
    // 0x1c9a94: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1c9a94u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1c9a98: 0x460ca041  sub.s       $f1, $f20, $f12
    ctx->pc = 0x1c9a98u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[12]);
    // 0x1c9a9c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1c9a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1c9aa0: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x1c9aa0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x1c9aa4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c9aa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9aa8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c9aa8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c9aac: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1C9AACu;
    {
        const bool branch_taken_0x1c9aac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c9aac) {
            ctx->pc = 0x1C9AC8u;
            goto label_1c9ac8;
        }
    }
    ctx->pc = 0x1C9AB4u;
    // 0x1c9ab4: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x1c9ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x1c9ab8: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x1c9ab8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x1c9abc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c9abcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9ac0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1C9AC0u;
    {
        const bool branch_taken_0x1c9ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9AC0u;
            // 0x1c9ac4: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9ac0) {
            ctx->pc = 0x1C9AF4u;
            goto label_1c9af4;
        }
    }
    ctx->pc = 0x1C9AC8u;
label_1c9ac8:
    // 0x1c9ac8: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x1c9ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
    // 0x1c9acc: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x1c9accu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x1c9ad0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c9ad0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9ad4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c9ad4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c9ad8: 0x0  nop
    ctx->pc = 0x1c9ad8u;
    // NOP
    // 0x1c9adc: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x1C9ADCu;
    {
        const bool branch_taken_0x1c9adc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c9adc) {
            ctx->pc = 0x1C9AE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9ADCu;
            // 0x1c9ae0: 0x460ca501  sub.s       $f20, $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[12]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C9AF8u;
            goto label_1c9af8;
        }
    }
    ctx->pc = 0x1C9AE4u;
    // 0x1c9ae4: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x1c9ae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x1c9ae8: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x1c9ae8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x1c9aec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c9aecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9af0: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1c9af0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1c9af4:
    // 0x1c9af4: 0x460ca501  sub.s       $f20, $f20, $f12
    ctx->pc = 0x1c9af4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[12]);
label_1c9af8:
    // 0x1c9af8: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1c9af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1c9afc: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x1c9afcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x1c9b00: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c9b00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c9b04: 0x461aa002  mul.s       $f0, $f20, $f26
    ctx->pc = 0x1c9b04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[26]);
    // 0x1c9b08: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x1c9b08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x1c9b0c: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x1c9b0cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x1c9b10: 0x460c0834  c.lt.s      $f1, $f12
    ctx->pc = 0x1c9b10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c9b14: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1C9B14u;
    {
        const bool branch_taken_0x1c9b14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c9b14) {
            ctx->pc = 0x1C9B30u;
            goto label_1c9b30;
        }
    }
    ctx->pc = 0x1C9B1Cu;
    // 0x1c9b1c: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x1c9b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x1c9b20: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x1c9b20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x1c9b24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c9b24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9b28: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1C9B28u;
    {
        const bool branch_taken_0x1c9b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9B28u;
            // 0x1c9b2c: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9b28) {
            ctx->pc = 0x1C9B58u;
            goto label_1c9b58;
        }
    }
    ctx->pc = 0x1C9B30u;
label_1c9b30:
    // 0x1c9b30: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x1c9b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
    // 0x1c9b34: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x1c9b34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x1c9b38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c9b38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9b3c: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1c9b3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c9b40: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1C9B40u;
    {
        const bool branch_taken_0x1c9b40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c9b40) {
            ctx->pc = 0x1C9B58u;
            goto label_1c9b58;
        }
    }
    ctx->pc = 0x1C9B48u;
    // 0x1c9b48: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x1c9b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x1c9b4c: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x1c9b4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x1c9b50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c9b50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9b54: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x1c9b54u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_1c9b58:
    // 0x1c9b58: 0xc060ee2  jal         func_183B88
    ctx->pc = 0x1C9B58u;
    SET_GPR_U32(ctx, 31, 0x1C9B60u);
    ctx->pc = 0x1C9B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9B58u;
            // 0x1c9b5c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183B88u;
    if (runtime->hasFunction(0x183B88u)) {
        auto targetFn = runtime->lookupFunction(0x183B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9B60u; }
        if (ctx->pc != 0x1C9B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183B88_0x183b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9B60u; }
        if (ctx->pc != 0x1C9B60u) { return; }
    }
    ctx->pc = 0x1C9B60u;
    // 0x1c9b60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c9b60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9b64: 0x8fa70070  lw          $a3, 0x70($sp)
    ctx->pc = 0x1c9b64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c9b68: 0x70c71b89  pcpyld      $v1, $a2, $a3
    ctx->pc = 0x1c9b68u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 7)));
    // 0x1c9b6c: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x1c9b6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1c9b70: 0x70c71389  pcpyld      $v0, $a2, $a3
    ctx->pc = 0x1c9b70u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 7)));
    // 0x1c9b74: 0x704324c8  ppacw       $a0, $v0, $v1
    ctx->pc = 0x1c9b74u;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1c9b78: 0x48a41800  qmtc2.ni    $a0, $vf3
    ctx->pc = 0x1c9b78u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1c9b7c: 0xfba30010  sqc2        $vf3, 0x10($sp)
    ctx->pc = 0x1c9b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1c9b80: 0xfba30080  sqc2        $vf3, 0x80($sp)
    ctx->pc = 0x1c9b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1c9b84: 0xfa430020  sqc2        $vf3, 0x20($s2)
    ctx->pc = 0x1c9b84u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1c9b88: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c9b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c9b8c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1c9b8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1c9b90: 0xdba20100  lqc2        $vf2, 0x100($sp)
    ctx->pc = 0x1c9b90u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1c9b94: 0x4a811080  vaddx.y     $vf2, $vf2, $vf1x
    ctx->pc = 0x1c9b94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c9b98: 0x4be3192a  vmul.xyzw   $vf4, $vf3, $vf3
    ctx->pc = 0x1c9b98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1c9b9c: 0xfa420010  sqc2        $vf2, 0x10($s2)
    ctx->pc = 0x1c9b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c9ba0: 0x4b042041  vaddy.x     $vf1, $vf4, $vf4y
    ctx->pc = 0x1c9ba0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c9ba4: 0x4b040842  vaddz.x     $vf1, $vf1, $vf4z
    ctx->pc = 0x1c9ba4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c9ba8: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1c9ba8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1c9bac: 0x4a0003bf  vwaitq
    ctx->pc = 0x1c9bacu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1c9bb0: 0x4bc018dc  vmulq.xyz   $vf3, $vf3, $Q
    ctx->pc = 0x1c9bb0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1c9bb4: 0x4a0002ff  vnop
    ctx->pc = 0x1c9bb4u;
    // NOP operation, no action needed for VU0
    // 0x1c9bb8: 0x4a0002ff  vnop
    ctx->pc = 0x1c9bb8u;
    // NOP operation, no action needed for VU0
    // 0x1c9bbc: 0x4bc312fe  vopmula.xyz $ACC, $vf2, $vf3
    ctx->pc = 0x1c9bbcu;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[3]);
    // 0x1c9bc0: 0xfba30020  sqc2        $vf3, 0x20($sp)
    ctx->pc = 0x1c9bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1c9bc4: 0x4bc218ae  vopmsub.xyz $vf2, $vf3, $vf2
    ctx->pc = 0x1c9bc4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1c9bc8: 0xfa430020  sqc2        $vf3, 0x20($s2)
    ctx->pc = 0x1c9bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1c9bcc: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x1c9bccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c9bd0: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x1c9bd0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1c9bd4: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1c9bd4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c9bd8: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1c9bd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c9bdc: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1c9bdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1c9be0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1c9be0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c9be4: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1c9be4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1c9be8: 0x4a0003bf  vwaitq
    ctx->pc = 0x1c9be8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1c9bec: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x1c9becu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c9bf0: 0x4a0002ff  vnop
    ctx->pc = 0x1c9bf0u;
    // NOP operation, no action needed for VU0
    // 0x1c9bf4: 0x4a0002ff  vnop
    ctx->pc = 0x1c9bf4u;
    // NOP operation, no action needed for VU0
    // 0x1c9bf8: 0xfa420000  sqc2        $vf2, 0x0($s2)
    ctx->pc = 0x1c9bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c9bfc: 0xfba20030  sqc2        $vf2, 0x30($sp)
    ctx->pc = 0x1c9bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c9c00: 0x8e240320  lw          $a0, 0x320($s1)
    ctx->pc = 0x1c9c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x1c9c04: 0x8e220174  lw          $v0, 0x174($s1)
    ctx->pc = 0x1c9c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x1c9c08: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c9c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c9c0c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1c9c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1c9c10: 0xc46001e4  lwc1        $f0, 0x1E4($v1)
    ctx->pc = 0x1c9c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9c14: 0xc46101e0  lwc1        $f1, 0x1E0($v1)
    ctx->pc = 0x1c9c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c9c18: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x1c9c18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x1c9c1c: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x1c9c1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x1c9c20: 0x461905c2  mul.s       $f23, $f0, $f25
    ctx->pc = 0x1c9c20u;
    ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[25]);
    // 0x1c9c24: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C9C24u;
    {
        const bool branch_taken_0x1c9c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9C24u;
            // 0x1c9c28: 0x46190d82  mul.s       $f22, $f1, $f25 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[25]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9c24) {
            ctx->pc = 0x1C9C38u;
            goto label_1c9c38;
        }
    }
    ctx->pc = 0x1C9C2Cu;
    // 0x1c9c2c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C9C2Cu;
    {
        const bool branch_taken_0x1c9c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9C2Cu;
            // 0x1c9c30: 0xc46001d8  lwc1        $f0, 0x1D8($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9c2c) {
            ctx->pc = 0x1C9C3Cu;
            goto label_1c9c3c;
        }
    }
    ctx->pc = 0x1C9C34u;
    // 0x1c9c34: 0x0  nop
    ctx->pc = 0x1c9c34u;
    // NOP
label_1c9c38:
    // 0x1c9c38: 0xc46001d4  lwc1        $f0, 0x1D4($v1)
    ctx->pc = 0x1c9c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c9c3c:
    // 0x1c9c3c: 0x460c0542  mul.s       $f21, $f0, $f12
    ctx->pc = 0x1c9c3cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x1c9c40: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c9c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c9c44: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1c9c44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1c9c48: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c9c48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c9c4c: 0xc46001dc  lwc1        $f0, 0x1DC($v1)
    ctx->pc = 0x1c9c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9c50: 0x8e2202d8  lw          $v0, 0x2D8($s1)
    ctx->pc = 0x1c9c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 728)));
    // 0x1c9c54: 0x46010402  mul.s       $f16, $f0, $f1
    ctx->pc = 0x1c9c54u;
    ctx->f[16] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c9c58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c9c58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c9c5c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c9c5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c9c60: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1c9c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1c9c64: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C9C64u;
    {
        const bool branch_taken_0x1c9c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9c64) {
            ctx->pc = 0x1C9C68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9C64u;
            // 0x1c9c68: 0xc4610230  lwc1        $f1, 0x230($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C9C6Cu;
            goto label_1c9c6c;
        }
    }
    ctx->pc = 0x1C9C6Cu;
label_1c9c6c:
    // 0x1c9c6c: 0xdba10060  lqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1c9c6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c9c70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c9c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9c74: 0x4b010043  vaddw.x     $vf1, $vf0, $vf1w
    ctx->pc = 0x1c9c74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c9c78: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c9c78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c9c7c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1c9c7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c9c80: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1c9c80u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c9c84: 0x7a220260  lq          $v0, 0x260($s1)
    ctx->pc = 0x1c9c84u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x1c9c88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c9c88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9c8c: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x1c9c8cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1c9c90: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1c9c90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c9c94: 0x46006329  min.s       $f12, $f12, $f0
    ctx->pc = 0x1c9c94u;
    ctx->f[12] = std::min(ctx->f[12], ctx->f[0]);
    // 0x1c9c98: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x1c9c98u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x1c9c9c: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x1c9c9cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x1c9ca0: 0x4600bbc6  mov.s       $f15, $f23
    ctx->pc = 0x1c9ca0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[23]);
    // 0x1c9ca4: 0x46006305  abs.s       $f12, $f12
    ctx->pc = 0x1c9ca4u;
    ctx->f[12] = FPU_ABS_S(ctx->f[12]);
    // 0x1c9ca8: 0xc07950a  jal         func_1E5428
    ctx->pc = 0x1C9CA8u;
    SET_GPR_U32(ctx, 31, 0x1C9CB0u);
    ctx->pc = 0x1C9CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9CA8u;
            // 0x1c9cac: 0x460cab02  mul.s       $f12, $f21, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5428u;
    if (runtime->hasFunction(0x1E5428u)) {
        auto targetFn = runtime->lookupFunction(0x1E5428u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9CB0u; }
        if (ctx->pc != 0x1C9CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1e5428_0x1e54c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9CB0u; }
        if (ctx->pc != 0x1C9CB0u) { return; }
    }
    ctx->pc = 0x1C9CB0u;
    // 0x1c9cb0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c9cb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c9cb4: 0x46000828  max.s       $f0, $f1, $f0
    ctx->pc = 0x1c9cb4u;
    ctx->f[0] = std::max(ctx->f[1], ctx->f[0]);
    // 0x1c9cb8: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1c9cb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1c9cbc: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x1c9cbcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1c9cc0: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1c9cc0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1c9cc4: 0x4a420040  vaddx.z     $vf1, $vf0, $vf2x
    ctx->pc = 0x1c9cc4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c9cc8: 0x8e220174  lw          $v0, 0x174($s1)
    ctx->pc = 0x1c9cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x1c9ccc: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1c9cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x1c9cd0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C9CD0u;
    {
        const bool branch_taken_0x1c9cd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9CD0u;
            // 0x1c9cd4: 0xfa610000  sqc2        $vf1, 0x0($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9cd0) {
            ctx->pc = 0x1C9CF0u;
            goto label_1c9cf0;
        }
    }
    ctx->pc = 0x1C9CD8u;
    // 0x1c9cd8: 0x8e2202d8  lw          $v0, 0x2D8($s1)
    ctx->pc = 0x1c9cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 728)));
    // 0x1c9cdc: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x1c9cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x1c9ce0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1c9ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1c9ce4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C9CE4u;
    {
        const bool branch_taken_0x1c9ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9CE4u;
            // 0x1c9ce8: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9ce4) {
            ctx->pc = 0x1C9CF4u;
            goto label_1c9cf4;
        }
    }
    ctx->pc = 0x1C9CECu;
    // 0x1c9cec: 0x0  nop
    ctx->pc = 0x1c9cecu;
    // NOP
label_1c9cf0:
    // 0x1c9cf0: 0x4600a007  neg.s       $f0, $f20
    ctx->pc = 0x1c9cf0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
label_1c9cf4:
    // 0x1c9cf4: 0x461a0002  mul.s       $f0, $f0, $f26
    ctx->pc = 0x1c9cf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[26]);
    // 0x1c9cf8: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x1c9cf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
    // 0x1c9cfc: 0x3421d97a  ori         $at, $at, 0xD97A
    ctx->pc = 0x1c9cfcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55674);
    // 0x1c9d00: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c9d00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c9d04: 0x3c01bfa0  lui         $at, 0xBFA0
    ctx->pc = 0x1c9d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49056 << 16));
    // 0x1c9d08: 0x3421d97a  ori         $at, $at, 0xD97A
    ctx->pc = 0x1c9d08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55674);
    // 0x1c9d0c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c9d0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c9d10: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x1c9d10u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x1c9d14: 0xc62302bc  lwc1        $f3, 0x2BC($s1)
    ctx->pc = 0x1c9d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c9d18: 0x46020029  min.s       $f0, $f0, $f2
    ctx->pc = 0x1c9d18u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[2]);
    // 0x1c9d1c: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x1c9d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x1c9d20: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1c9d20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1c9d24: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c9d24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c9d28: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1c9d28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1c9d2c: 0x8e230174  lw          $v1, 0x174($s1)
    ctx->pc = 0x1c9d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x1c9d30: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x1c9d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x1c9d34: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c9d34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c9d38: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x1c9d38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x1c9d3c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1c9d3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1c9d40: 0x104000a1  beqz        $v0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x1C9D40u;
    {
        const bool branch_taken_0x1c9d40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9D40u;
            // 0x1c9d44: 0xe62002bc  swc1        $f0, 0x2BC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 700), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9d40) {
            ctx->pc = 0x1C9FC8u;
            goto label_1c9fc8;
        }
    }
    ctx->pc = 0x1C9D48u;
    // 0x1c9d48: 0x8e2202d8  lw          $v0, 0x2D8($s1)
    ctx->pc = 0x1c9d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 728)));
    // 0x1c9d4c: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1c9d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x1c9d50: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1c9d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1c9d54: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x1C9D54u;
    {
        const bool branch_taken_0x1c9d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9D54u;
            // 0x1c9d58: 0x8e230310  lw          $v1, 0x310($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9d54) {
            ctx->pc = 0x1C9E98u;
            goto label_1c9e98;
        }
    }
    ctx->pc = 0x1C9D5Cu;
    // 0x1c9d5c: 0xc62102b8  lwc1        $f1, 0x2B8($s1)
    ctx->pc = 0x1c9d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c9d60: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c9d60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c9d64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c9d64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9d68: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c9d68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c9d6c: 0x4500004a  bc1f        . + 4 + (0x4A << 2)
    ctx->pc = 0x1C9D6Cu;
    {
        const bool branch_taken_0x1c9d6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c9d6c) {
            ctx->pc = 0x1C9E98u;
            goto label_1c9e98;
        }
    }
    ctx->pc = 0x1C9D74u;
    // 0x1c9d74: 0xc62102c4  lwc1        $f1, 0x2C4($s1)
    ctx->pc = 0x1c9d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c9d78: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1c9d78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1c9d7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c9d7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9d80: 0x31183  sra         $v0, $v1, 6
    ctx->pc = 0x1c9d80u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 6));
    // 0x1c9d84: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c9d84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c9d88: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c9d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c9d8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C9D8Cu;
    {
        const bool branch_taken_0x1c9d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9D8Cu;
            // 0x1c9d90: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9d8c) {
            ctx->pc = 0x1C9DA0u;
            goto label_1c9da0;
        }
    }
    ctx->pc = 0x1C9D94u;
    // 0x1c9d94: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C9D94u;
    {
        const bool branch_taken_0x1c9d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9D94u;
            // 0x1c9d98: 0x4600a307  neg.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9d94) {
            ctx->pc = 0x1C9DB0u;
            goto label_1c9db0;
        }
    }
    ctx->pc = 0x1C9D9Cu;
    // 0x1c9d9c: 0x0  nop
    ctx->pc = 0x1c9d9cu;
    // NOP
label_1c9da0:
    // 0x1c9da0: 0x31143  sra         $v0, $v1, 5
    ctx->pc = 0x1c9da0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
    // 0x1c9da4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c9da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c9da8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C9DA8u;
    {
        const bool branch_taken_0x1c9da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9da8) {
            ctx->pc = 0x1C9DACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9DA8u;
            // 0x1c9dac: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C9DB0u;
            goto label_1c9db0;
        }
    }
    ctx->pc = 0x1C9DB0u;
label_1c9db0:
    // 0x1c9db0: 0x4615a383  div.s       $f14, $f20, $f21
    ctx->pc = 0x1c9db0u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[14] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[14] = ctx->f[20] / ctx->f[21];
    // 0x1c9db4: 0x7a220260  lq          $v0, 0x260($s1)
    ctx->pc = 0x1c9db4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x1c9db8: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x1c9db8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x1c9dbc: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x1c9dbcu;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1c9dc0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1c9dc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c9dc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c9dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9dc8: 0x460ebbc2  mul.s       $f15, $f23, $f14
    ctx->pc = 0x1c9dc8u;
    ctx->f[15] = FPU_MUL_S(ctx->f[23], ctx->f[14]);
    // 0x1c9dcc: 0xc07950a  jal         func_1E5428
    ctx->pc = 0x1C9DCCu;
    SET_GPR_U32(ctx, 31, 0x1C9DD4u);
    ctx->pc = 0x1C9DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9DCCu;
            // 0x1c9dd0: 0x460eb382  mul.s       $f14, $f22, $f14 (Delay Slot)
        ctx->f[14] = FPU_MUL_S(ctx->f[22], ctx->f[14]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5428u;
    if (runtime->hasFunction(0x1E5428u)) {
        auto targetFn = runtime->lookupFunction(0x1E5428u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9DD4u; }
        if (ctx->pc != 0x1C9DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1e5428_0x1e54c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9DD4u; }
        if (ctx->pc != 0x1C9DD4u) { return; }
    }
    ctx->pc = 0x1C9DD4u;
    // 0x1c9dd4: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1c9dd4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1c9dd8: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x1c9dd8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1c9ddc: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1c9ddcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1c9de0: 0x4a820040  vaddx.y     $vf1, $vf0, $vf2x
    ctx->pc = 0x1c9de0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c9de4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c9de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9de8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c9de8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9dec: 0xfa610000  sqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1c9decu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c9df0: 0x7a220260  lq          $v0, 0x260($s1)
    ctx->pc = 0x1c9df0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x1c9df4: 0x70021fc9  prot3w      $v1, $v0
    ctx->pc = 0x1c9df4u;
    SET_GPR_VEC(ctx, 3, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1c9df8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1c9df8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9dfc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c9dfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c9e00: 0x70441b89  pcpyld      $v1, $v0, $a0
    ctx->pc = 0x1c9e00u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x1c9e04: 0x46000805  abs.s       $f0, $f1
    ctx->pc = 0x1c9e04u;
    ctx->f[0] = FPU_ABS_S(ctx->f[1]);
    // 0x1c9e08: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1c9e08u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1c9e0c: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x1c9e0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x1c9e10: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1c9e10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1c9e14: 0x70e41389  pcpyld      $v0, $a3, $a0
    ctx->pc = 0x1c9e14u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 4)));
    // 0x1c9e18: 0x70432cc8  ppacw       $a1, $v0, $v1
    ctx->pc = 0x1c9e18u;
    SET_GPR_VEC(ctx, 5, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1c9e1c: 0x48a51800  qmtc2.ni    $a1, $vf3
    ctx->pc = 0x1c9e1cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1c9e20: 0xfa230260  sqc2        $vf3, 0x260($s1)
    ctx->pc = 0x1c9e20u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 608), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1c9e24: 0xfba30040  sqc2        $vf3, 0x40($sp)
    ctx->pc = 0x1c9e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1c9e28: 0xda440010  lqc2        $vf4, 0x10($s2)
    ctx->pc = 0x1c9e28u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1c9e2c: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1c9e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1c9e30: 0x4be12118  vmulx.xyzw  $vf4, $vf4, $vf1x
    ctx->pc = 0x1c9e30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1c9e34: 0xda410020  lqc2        $vf1, 0x20($s2)
    ctx->pc = 0x1c9e34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1c9e38: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x1c9e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c9e3c: 0xdba20100  lqc2        $vf2, 0x100($sp)
    ctx->pc = 0x1c9e3cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1c9e40: 0x4be1106c  vsub.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x1c9e40u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c9e44: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x1c9e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c9e48: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x1c9e48u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1c9e4c: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1c9e4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c9e50: 0x4be120a8  vadd.xyzw   $vf2, $vf4, $vf1
    ctx->pc = 0x1c9e50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c9e54: 0xfa2200e0  sqc2        $vf2, 0xE0($s1)
    ctx->pc = 0x1c9e54u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 224), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c9e58: 0x4be318ea  vmul.xyzw   $vf3, $vf3, $vf3
    ctx->pc = 0x1c9e58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1c9e5c: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1c9e5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c9e60: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1c9e60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c9e64: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1c9e64u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c9e68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c9e68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9e6c: 0x46000004  c1          0x4
    ctx->pc = 0x1c9e6cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1c9e70: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1c9e70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c9e74: 0x450000a5  bc1f        . + 4 + (0xA5 << 2)
    ctx->pc = 0x1C9E74u;
    {
        const bool branch_taken_0x1c9e74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c9e74) {
            ctx->pc = 0x1CA10Cu;
            goto label_1ca10c;
        }
    }
    ctx->pc = 0x1C9E7Cu;
    // 0x1c9e7c: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x1c9e7cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[0] = ctx->f[20] / ctx->f[0];
    // 0x1c9e80: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1c9e80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1c9e84: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x1c9e84u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1c9e88: 0x4be11058  vmulx.xyzw  $vf1, $vf2, $vf1x
    ctx->pc = 0x1c9e88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c9e8c: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x1C9E8Cu;
    {
        const bool branch_taken_0x1c9e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9E8Cu;
            // 0x1c9e90: 0xfa2100e0  sqc2        $vf1, 0xE0($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 224), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9e8c) {
            ctx->pc = 0x1CA10Cu;
            goto label_1ca10c;
        }
    }
    ctx->pc = 0x1C9E94u;
    // 0x1c9e94: 0x0  nop
    ctx->pc = 0x1c9e94u;
    // NOP
label_1c9e98:
    // 0x1c9e98: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c9e98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c9e9c: 0x31183  sra         $v0, $v1, 6
    ctx->pc = 0x1c9e9cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 6));
    // 0x1c9ea0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c9ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c9ea4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C9EA4u;
    {
        const bool branch_taken_0x1c9ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9EA4u;
            // 0x1c9ea8: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9ea4) {
            ctx->pc = 0x1C9EB4u;
            goto label_1c9eb4;
        }
    }
    ctx->pc = 0x1C9EACu;
    // 0x1c9eac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C9EACu;
    {
        const bool branch_taken_0x1c9eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9EACu;
            // 0x1c9eb0: 0x4600ab07  neg.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9eac) {
            ctx->pc = 0x1C9EC0u;
            goto label_1c9ec0;
        }
    }
    ctx->pc = 0x1C9EB4u;
label_1c9eb4:
    // 0x1c9eb4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c9eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c9eb8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C9EB8u;
    {
        const bool branch_taken_0x1c9eb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9eb8) {
            ctx->pc = 0x1C9EBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9EB8u;
            // 0x1c9ebc: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C9EC0u;
            goto label_1c9ec0;
        }
    }
    ctx->pc = 0x1C9EC0u;
label_1c9ec0:
    // 0x1c9ec0: 0x7a220260  lq          $v0, 0x260($s1)
    ctx->pc = 0x1c9ec0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x1c9ec4: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x1c9ec4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x1c9ec8: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x1c9ec8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x1c9ecc: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x1c9eccu;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1c9ed0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1c9ed0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c9ed4: 0x4600bbc6  mov.s       $f15, $f23
    ctx->pc = 0x1c9ed4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[23]);
    // 0x1c9ed8: 0xc07950a  jal         func_1E5428
    ctx->pc = 0x1C9ED8u;
    SET_GPR_U32(ctx, 31, 0x1C9EE0u);
    ctx->pc = 0x1C9EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9ED8u;
            // 0x1c9edc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5428u;
    if (runtime->hasFunction(0x1E5428u)) {
        auto targetFn = runtime->lookupFunction(0x1E5428u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9EE0u; }
        if (ctx->pc != 0x1C9EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1e5428_0x1e54c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9EE0u; }
        if (ctx->pc != 0x1C9EE0u) { return; }
    }
    ctx->pc = 0x1C9EE0u;
    // 0x1c9ee0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1c9ee0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1c9ee4: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x1c9ee4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1c9ee8: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1c9ee8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1c9eec: 0x4a820040  vaddx.y     $vf1, $vf0, $vf2x
    ctx->pc = 0x1c9eecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c9ef0: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x1c9ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x1c9ef4: 0x8e2202d8  lw          $v0, 0x2D8($s1)
    ctx->pc = 0x1c9ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 728)));
    // 0x1c9ef8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1c9ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1c9efc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1C9EFCu;
    {
        const bool branch_taken_0x1c9efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9EFCu;
            // 0x1c9f00: 0xfa610000  sqc2        $vf1, 0x0($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9efc) {
            ctx->pc = 0x1C9F38u;
            goto label_1c9f38;
        }
    }
    ctx->pc = 0x1C9F04u;
    // 0x1c9f04: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1c9f04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1c9f08: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c9f08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c9f0c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c9f0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c9f10: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c9f10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c9f14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c9f14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9f18: 0x4601c042  mul.s       $f1, $f24, $f1
    ctx->pc = 0x1c9f18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[24], ctx->f[1]);
    // 0x1c9f1c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c9f1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1c9f20: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1c9f20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1c9f24: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x1c9f24u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1c9f28: 0xda2100e0  lqc2        $vf1, 0xE0($s1)
    ctx->pc = 0x1c9f28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x1c9f2c: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1c9f2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c9f30: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x1C9F30u;
    {
        const bool branch_taken_0x1c9f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9F30u;
            // 0x1c9f34: 0xfa2100e0  sqc2        $vf1, 0xE0($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 224), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9f30) {
            ctx->pc = 0x1CA10Cu;
            goto label_1ca10c;
        }
    }
    ctx->pc = 0x1C9F38u;
label_1c9f38:
    // 0x1c9f38: 0xda420010  lqc2        $vf2, 0x10($s2)
    ctx->pc = 0x1c9f38u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1c9f3c: 0xda240260  lqc2        $vf4, 0x260($s1)
    ctx->pc = 0x1c9f3cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x1c9f40: 0x4be41099  vmuly.xyzw  $vf2, $vf2, $vf4y
    ctx->pc = 0x1c9f40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c9f44: 0xda410020  lqc2        $vf1, 0x20($s2)
    ctx->pc = 0x1c9f44u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1c9f48: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x1c9f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c9f4c: 0xdba30100  lqc2        $vf3, 0x100($sp)
    ctx->pc = 0x1c9f4cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1c9f50: 0x4be1186c  vsub.xyzw   $vf1, $vf3, $vf1
    ctx->pc = 0x1c9f50u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c9f54: 0x4be4085a  vmulz.xyzw  $vf1, $vf1, $vf4z
    ctx->pc = 0x1c9f54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c9f58: 0x4be110e8  vadd.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x1c9f58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1c9f5c: 0xfa2300e0  sqc2        $vf3, 0xE0($s1)
    ctx->pc = 0x1c9f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 224), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1c9f60: 0x48232000  qmfc2.ni    $v1, $vf4
    ctx->pc = 0x1c9f60u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1c9f64: 0x70031789  pexew       $v0, $v1
    ctx->pc = 0x1c9f64u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1c9f68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c9f68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9f6c: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1c9f6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c9f70: 0x0  nop
    ctx->pc = 0x1c9f70u;
    // NOP
    // 0x1c9f74: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1C9F74u;
    {
        const bool branch_taken_0x1c9f74 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C9F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9F74u;
            // 0x1c9f78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9f74) {
            ctx->pc = 0x1C9F80u;
            goto label_1c9f80;
        }
    }
    ctx->pc = 0x1C9F7Cu;
    // 0x1c9f7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c9f7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c9f80:
    // 0x1c9f80: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C9F80u;
    {
        const bool branch_taken_0x1c9f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9f80) {
            ctx->pc = 0x1C9F84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9F80u;
            // 0x1c9f84: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C9F88u;
            goto label_1c9f88;
        }
    }
    ctx->pc = 0x1C9F88u;
label_1c9f88:
    // 0x1c9f88: 0x4be420aa  vmul.xyzw   $vf2, $vf4, $vf4
    ctx->pc = 0x1c9f88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c9f8c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1c9f8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c9f90: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1c9f90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c9f94: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1c9f94u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c9f98: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1c9f98u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9f9c: 0x46000004  c1          0x4
    ctx->pc = 0x1c9f9cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1c9fa0: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1c9fa0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c9fa4: 0x45000059  bc1f        . + 4 + (0x59 << 2)
    ctx->pc = 0x1C9FA4u;
    {
        const bool branch_taken_0x1c9fa4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c9fa4) {
            ctx->pc = 0x1CA10Cu;
            goto label_1ca10c;
        }
    }
    ctx->pc = 0x1C9FACu;
    // 0x1c9fac: 0x4600a803  div.s       $f0, $f21, $f0
    ctx->pc = 0x1c9facu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[0] = ctx->f[21] / ctx->f[0];
    // 0x1c9fb0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1c9fb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1c9fb4: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x1c9fb4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1c9fb8: 0x4be11858  vmulx.xyzw  $vf1, $vf3, $vf1x
    ctx->pc = 0x1c9fb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c9fbc: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x1C9FBCu;
    {
        const bool branch_taken_0x1c9fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9FBCu;
            // 0x1c9fc0: 0xfa2100e0  sqc2        $vf1, 0xE0($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 224), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9fbc) {
            ctx->pc = 0x1CA10Cu;
            goto label_1ca10c;
        }
    }
    ctx->pc = 0x1C9FC4u;
    // 0x1c9fc4: 0x0  nop
    ctx->pc = 0x1c9fc4u;
    // NOP
label_1c9fc8:
    // 0x1c9fc8: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x1c9fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x1c9fcc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C9FCCu;
    {
        const bool branch_taken_0x1c9fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9FCCu;
            // 0x1c9fd0: 0x3c030010  lui         $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9fcc) {
            ctx->pc = 0x1C9FF8u;
            goto label_1c9ff8;
        }
    }
    ctx->pc = 0x1C9FD4u;
    // 0x1c9fd4: 0x8e2202d8  lw          $v0, 0x2D8($s1)
    ctx->pc = 0x1c9fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 728)));
    // 0x1c9fd8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1c9fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1c9fdc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C9FDCu;
    {
        const bool branch_taken_0x1c9fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9fdc) {
            ctx->pc = 0x1C9FF8u;
            goto label_1c9ff8;
        }
    }
    ctx->pc = 0x1C9FE4u;
    // 0x1c9fe4: 0xda210260  lqc2        $vf1, 0x260($s1)
    ctx->pc = 0x1c9fe4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x1c9fe8: 0xda2200e0  lqc2        $vf2, 0xE0($s1)
    ctx->pc = 0x1c9fe8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x1c9fec: 0x4a820041  vaddy.y     $vf1, $vf0, $vf2y
    ctx->pc = 0x1c9fecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c9ff0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1C9FF0u;
    {
        const bool branch_taken_0x1c9ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9FF0u;
            // 0x1c9ff4: 0xfa210260  sqc2        $vf1, 0x260($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 608), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9ff0) {
            ctx->pc = 0x1CA088u;
            goto label_1ca088;
        }
    }
    ctx->pc = 0x1C9FF8u;
label_1c9ff8:
    // 0x1c9ff8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c9ff8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c9ffc: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x1c9ffcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x1ca000: 0x7a220260  lq          $v0, 0x260($s1)
    ctx->pc = 0x1ca000u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x1ca004: 0x4600bbc6  mov.s       $f15, $f23
    ctx->pc = 0x1ca004u;
    ctx->f[15] = FPU_MOV_S(ctx->f[23]);
    // 0x1ca008: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x1ca008u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1ca00c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1ca00cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1ca010: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ca010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca014: 0xc07950a  jal         func_1E5428
    ctx->pc = 0x1CA014u;
    SET_GPR_U32(ctx, 31, 0x1CA01Cu);
    ctx->pc = 0x1CA018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA014u;
            // 0x1ca018: 0x46006406  mov.s       $f16, $f12 (Delay Slot)
        ctx->f[16] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5428u;
    if (runtime->hasFunction(0x1E5428u)) {
        auto targetFn = runtime->lookupFunction(0x1E5428u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA01Cu; }
        if (ctx->pc != 0x1CA01Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1e5428_0x1e54c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA01Cu; }
        if (ctx->pc != 0x1CA01Cu) { return; }
    }
    ctx->pc = 0x1CA01Cu;
    // 0x1ca01c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1ca01cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1ca020: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x1ca020u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1ca024: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1ca024u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1ca028: 0x4a820040  vaddx.y     $vf1, $vf0, $vf2x
    ctx->pc = 0x1ca028u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ca02c: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1ca02cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x1ca030: 0x8e220174  lw          $v0, 0x174($s1)
    ctx->pc = 0x1ca030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x1ca034: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1ca034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1ca038: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CA038u;
    {
        const bool branch_taken_0x1ca038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA03Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA038u;
            // 0x1ca03c: 0xfa610000  sqc2        $vf1, 0x0($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca038) {
            ctx->pc = 0x1CA048u;
            goto label_1ca048;
        }
    }
    ctx->pc = 0x1CA040u;
    // 0x1ca040: 0xc07a3ec  jal         func_1E8FB0
    ctx->pc = 0x1CA040u;
    SET_GPR_U32(ctx, 31, 0x1CA048u);
    ctx->pc = 0x1CA044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA040u;
            // 0x1ca044: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8FB0u;
    if (runtime->hasFunction(0x1E8FB0u)) {
        auto targetFn = runtime->lookupFunction(0x1E8FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA048u; }
        if (ctx->pc != 0x1CA048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8FB0_0x1e8fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA048u; }
        if (ctx->pc != 0x1CA048u) { return; }
    }
    ctx->pc = 0x1CA048u;
label_1ca048:
    // 0x1ca048: 0x8e220174  lw          $v0, 0x174($s1)
    ctx->pc = 0x1ca048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x1ca04c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1ca04cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1ca050: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1CA050u;
    {
        const bool branch_taken_0x1ca050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca050) {
            ctx->pc = 0x1CA054u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA050u;
            // 0x1ca054: 0xda2100e0  lqc2        $vf1, 0xE0($s1) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 224)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CA090u;
            goto label_1ca090;
        }
    }
    ctx->pc = 0x1CA058u;
    // 0x1ca058: 0xda410010  lqc2        $vf1, 0x10($s2)
    ctx->pc = 0x1ca058u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1ca05c: 0xda230260  lqc2        $vf3, 0x260($s1)
    ctx->pc = 0x1ca05cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x1ca060: 0x4be30859  vmuly.xyzw  $vf1, $vf1, $vf3y
    ctx->pc = 0x1ca060u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ca064: 0xda420020  lqc2        $vf2, 0x20($s2)
    ctx->pc = 0x1ca064u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1ca068: 0xfba200d0  sqc2        $vf2, 0xD0($sp)
    ctx->pc = 0x1ca068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ca06c: 0xdba40100  lqc2        $vf4, 0x100($sp)
    ctx->pc = 0x1ca06cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1ca070: 0x4be220ac  vsub.xyzw   $vf2, $vf4, $vf2
    ctx->pc = 0x1ca070u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ca074: 0x4be3109a  vmulz.xyzw  $vf2, $vf2, $vf3z
    ctx->pc = 0x1ca074u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ca078: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1ca078u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ca07c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1CA07Cu;
    {
        const bool branch_taken_0x1ca07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA07Cu;
            // 0x1ca080: 0xfa2100e0  sqc2        $vf1, 0xE0($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 224), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca07c) {
            ctx->pc = 0x1CA10Cu;
            goto label_1ca10c;
        }
    }
    ctx->pc = 0x1CA084u;
    // 0x1ca084: 0x0  nop
    ctx->pc = 0x1ca084u;
    // NOP
label_1ca088:
    // 0x1ca088: 0xda2100e0  lqc2        $vf1, 0xE0($s1)
    ctx->pc = 0x1ca088u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x1ca08c: 0x0  nop
    ctx->pc = 0x1ca08cu;
    // NOP
label_1ca090:
    // 0x1ca090: 0xdba30100  lqc2        $vf3, 0x100($sp)
    ctx->pc = 0x1ca090u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1ca094: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1ca094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1ca098: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ca098u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ca09c: 0x4a8118c1  vaddy.y     $vf3, $vf3, $vf1y
    ctx->pc = 0x1ca09cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1ca0a0: 0x8e220320  lw          $v0, 0x320($s1)
    ctx->pc = 0x1ca0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x1ca0a4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1ca0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ca0a8: 0xc44001f0  lwc1        $f0, 0x1F0($v0)
    ctx->pc = 0x1ca0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca0ac: 0x46190002  mul.s       $f0, $f0, $f25
    ctx->pc = 0x1ca0acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[25]);
    // 0x1ca0b0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ca0b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ca0b4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1ca0b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1ca0b8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1ca0b8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1ca0bc: 0xdba10100  lqc2        $vf1, 0x100($sp)
    ctx->pc = 0x1ca0bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1ca0c0: 0x4a820840  vaddx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x1ca0c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ca0c4: 0x4be118e8  vadd.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x1ca0c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1ca0c8: 0xda410020  lqc2        $vf1, 0x20($s2)
    ctx->pc = 0x1ca0c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1ca0cc: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x1ca0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ca0d0: 0xdba20100  lqc2        $vf2, 0x100($sp)
    ctx->pc = 0x1ca0d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1ca0d4: 0x4be1106c  vsub.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x1ca0d4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ca0d8: 0xda220260  lqc2        $vf2, 0x260($s1)
    ctx->pc = 0x1ca0d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x1ca0dc: 0x4be2085a  vmulz.xyzw  $vf1, $vf1, $vf2z
    ctx->pc = 0x1ca0dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ca0e0: 0x4be30868  vadd.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x1ca0e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ca0e4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1CA0E4u;
    {
        const bool branch_taken_0x1ca0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA0E4u;
            // 0x1ca0e8: 0xfa2100e0  sqc2        $vf1, 0xE0($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 224), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca0e4) {
            ctx->pc = 0x1CA10Cu;
            goto label_1ca10c;
        }
    }
    ctx->pc = 0x1CA0ECu;
    // 0x1ca0ec: 0x0  nop
    ctx->pc = 0x1ca0ecu;
    // NOP
label_1ca0f0:
    // 0x1ca0f0: 0x8e220320  lw          $v0, 0x320($s1)
    ctx->pc = 0x1ca0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x1ca0f4: 0x4600cb46  mov.s       $f13, $f25
    ctx->pc = 0x1ca0f4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
    // 0x1ca0f8: 0x7a2400e0  lq          $a0, 0xE0($s1)
    ctx->pc = 0x1ca0f8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x1ca0fc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1ca0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ca100: 0xc077f54  jal         func_1DFD50
    ctx->pc = 0x1CA100u;
    SET_GPR_U32(ctx, 31, 0x1CA108u);
    ctx->pc = 0x1CA104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA100u;
            // 0x1ca104: 0xc44c0088  lwc1        $f12, 0x88($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFD50u;
    if (runtime->hasFunction(0x1DFD50u)) {
        auto targetFn = runtime->lookupFunction(0x1DFD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA108u; }
        if (ctx->pc != 0x1CA108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFD50_0x1dfd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA108u; }
        if (ctx->pc != 0x1CA108u) { return; }
    }
    ctx->pc = 0x1CA108u;
    // 0x1ca108: 0x7e2200e0  sq          $v0, 0xE0($s1)
    ctx->pc = 0x1ca108u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 224), GPR_VEC(ctx, 2));
label_1ca10c:
    // 0x1ca10c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1ca10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1ca110: 0xae20024c  sw          $zero, 0x24C($s1)
    ctx->pc = 0x1ca110u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 588), GPR_U32(ctx, 0));
    // 0x1ca114: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ca114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1ca118: 0x70142ca9  por         $a1, $zero, $s4
    ctx->pc = 0x1ca118u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 20)));
    // 0x1ca11c: 0xae220250  sw          $v0, 0x250($s1)
    ctx->pc = 0x1ca11cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
    // 0x1ca120: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x1ca120u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    // 0x1ca124: 0xc0794f6  jal         func_1E53D8
    ctx->pc = 0x1CA124u;
    SET_GPR_U32(ctx, 31, 0x1CA12Cu);
    ctx->pc = 0x1CA128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA124u;
            // 0x1ca128: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E53D8u;
    if (runtime->hasFunction(0x1E53D8u)) {
        auto targetFn = runtime->lookupFunction(0x1E53D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA12Cu; }
        if (ctx->pc != 0x1CA12Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1e53d8_0x1e5428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA12Cu; }
        if (ctx->pc != 0x1CA12Cu) { return; }
    }
    ctx->pc = 0x1CA12Cu;
    // 0x1ca12c: 0x8e2302dc  lw          $v1, 0x2DC($s1)
    ctx->pc = 0x1ca12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 732)));
    // 0x1ca130: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1ca130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1ca134: 0x10600038  beqz        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x1CA134u;
    {
        const bool branch_taken_0x1ca134 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA134u;
            // 0x1ca138: 0x48a21800  qmtc2.ni    $v0, $vf3 (Delay Slot)
        ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca134) {
            ctx->pc = 0x1CA218u;
            goto label_1ca218;
        }
    }
    ctx->pc = 0x1CA13Cu;
    // 0x1ca13c: 0x8e220174  lw          $v0, 0x174($s1)
    ctx->pc = 0x1ca13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x1ca140: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1ca140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x1ca144: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1ca144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1ca148: 0x54400034  bnel        $v0, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x1CA148u;
    {
        const bool branch_taken_0x1ca148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ca148) {
            ctx->pc = 0x1CA14Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA148u;
            // 0x1ca14c: 0x8e2202dc  lw          $v0, 0x2DC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 732)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CA21Cu;
            goto label_1ca21c;
        }
    }
    ctx->pc = 0x1CA150u;
    // 0x1ca150: 0x7ba60060  lq          $a2, 0x60($sp)
    ctx->pc = 0x1ca150u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ca154: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x1ca154u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1ca158: 0xc071b18  jal         func_1C6C60
    ctx->pc = 0x1CA158u;
    SET_GPR_U32(ctx, 31, 0x1CA160u);
    ctx->pc = 0x1CA15Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA158u;
            // 0x1ca15c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C6C60u;
    if (runtime->hasFunction(0x1C6C60u)) {
        auto targetFn = runtime->lookupFunction(0x1C6C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA160u; }
        if (ctx->pc != 0x1CA160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C6C60_0x1c6c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA160u; }
        if (ctx->pc != 0x1CA160u) { return; }
    }
    ctx->pc = 0x1CA160u;
    // 0x1ca160: 0x8e230174  lw          $v1, 0x174($s1)
    ctx->pc = 0x1ca160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x1ca164: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x1ca164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1ca168: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x1CA168u;
    {
        const bool branch_taken_0x1ca168 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA16Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA168u;
            // 0x1ca16c: 0x48a21800  qmtc2.ni    $v0, $vf3 (Delay Slot)
        ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca168) {
            ctx->pc = 0x1CA218u;
            goto label_1ca218;
        }
    }
    ctx->pc = 0x1CA170u;
    // 0x1ca170: 0x8e220320  lw          $v0, 0x320($s1)
    ctx->pc = 0x1ca170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x1ca174: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1ca174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1ca178: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ca178u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ca17c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1ca17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ca180: 0xda220120  lqc2        $vf2, 0x120($s1)
    ctx->pc = 0x1ca180u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x1ca184: 0xc4400234  lwc1        $f0, 0x234($v0)
    ctx->pc = 0x1ca184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca188: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ca188u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ca18c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1ca18cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x1ca190: 0x461b0002  mul.s       $f0, $f0, $f27
    ctx->pc = 0x1ca190u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[27]);
    // 0x1ca194: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1ca194u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1ca198: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1ca198u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1ca19c: 0x4a411084  vsubx.z     $vf2, $vf2, $vf1x
    ctx->pc = 0x1ca19cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ca1a0: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x1ca1a0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ca1a4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1ca1a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1ca1a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ca1a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ca1ac: 0x70041789  pexew       $v0, $a0
    ctx->pc = 0x1ca1acu;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1ca1b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ca1b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ca1b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ca1b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ca1b8: 0xda210070  lqc2        $vf1, 0x70($s1)
    ctx->pc = 0x1ca1b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x1ca1bc: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1ca1bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1ca1c0: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x1ca1c0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1ca1c4: 0xfba100f0  sqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x1ca1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ca1c8: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1ca1c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ca1cc: 0x4be118ec  vsub.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x1ca1ccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1ca1d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ca1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca1d4: 0xc079868  jal         func_1E61A0
    ctx->pc = 0x1CA1D4u;
    SET_GPR_U32(ctx, 31, 0x1CA1DCu);
    ctx->pc = 0x1CA1D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA1D4u;
            // 0x1ca1d8: 0xfba30110  sqc2        $vf3, 0x110($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E61A0u;
    if (runtime->hasFunction(0x1E61A0u)) {
        auto targetFn = runtime->lookupFunction(0x1E61A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA1DCu; }
        if (ctx->pc != 0x1CA1DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1e61a0_0x1e6238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA1DCu; }
        if (ctx->pc != 0x1CA1DCu) { return; }
    }
    ctx->pc = 0x1CA1DCu;
    // 0x1ca1dc: 0x26230150  addiu       $v1, $s1, 0x150
    ctx->pc = 0x1ca1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1ca1e0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1ca1e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1ca1e4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ca1e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1ca1e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ca1e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ca1ec: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x1ca1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x1ca1f0: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x1ca1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x1ca1f4: 0x3c013f8e  lui         $at, 0x3F8E
    ctx->pc = 0x1ca1f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16270 << 16));
    // 0x1ca1f8: 0x3421353f  ori         $at, $at, 0x353F
    ctx->pc = 0x1ca1f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13631);
    // 0x1ca1fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ca1fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ca200: 0x8e220174  lw          $v0, 0x174($s1)
    ctx->pc = 0x1ca200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x1ca204: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x1ca204u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1ca208: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1ca208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1ca20c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1ca20cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1ca210: 0xae220174  sw          $v0, 0x174($s1)
    ctx->pc = 0x1ca210u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 372), GPR_U32(ctx, 2));
    // 0x1ca214: 0xdba30110  lqc2        $vf3, 0x110($sp)
    ctx->pc = 0x1ca214u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_1ca218:
    // 0x1ca218: 0x8e2202dc  lw          $v0, 0x2DC($s1)
    ctx->pc = 0x1ca218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 732)));
label_1ca21c:
    // 0x1ca21c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1ca21cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1ca220: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CA220u;
    {
        const bool branch_taken_0x1ca220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA220u;
            // 0x1ca224: 0x48251800  qmfc2.ni    $a1, $vf3 (Delay Slot)
        SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca220) {
            ctx->pc = 0x1CA234u;
            goto label_1ca234;
        }
    }
    ctx->pc = 0x1CA228u;
    // 0x1ca228: 0xc0723fe  jal         func_1C8FF8
    ctx->pc = 0x1CA228u;
    SET_GPR_U32(ctx, 31, 0x1CA230u);
    ctx->pc = 0x1CA22Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA228u;
            // 0x1ca22c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C8FF8u;
    if (runtime->hasFunction(0x1C8FF8u)) {
        auto targetFn = runtime->lookupFunction(0x1C8FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA230u; }
        if (ctx->pc != 0x1CA230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8FF8_0x1c8ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA230u; }
        if (ctx->pc != 0x1CA230u) { return; }
    }
    ctx->pc = 0x1CA230u;
    // 0x1ca230: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x1ca230u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1ca234:
    // 0x1ca234: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x1ca234u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1ca238: 0xc07a68e  jal         func_1E9A38
    ctx->pc = 0x1CA238u;
    SET_GPR_U32(ctx, 31, 0x1CA240u);
    ctx->pc = 0x1CA23Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA238u;
            // 0x1ca23c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E9A38u;
    if (runtime->hasFunction(0x1E9A38u)) {
        auto targetFn = runtime->lookupFunction(0x1E9A38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA240u; }
        if (ctx->pc != 0x1CA240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E9A38_0x1e9a38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA240u; }
        if (ctx->pc != 0x1CA240u) { return; }
    }
    ctx->pc = 0x1CA240u;
    // 0x1ca240: 0x700284a9  por         $s0, $zero, $v0
    ctx->pc = 0x1ca240u;
    SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1ca244: 0x8e220174  lw          $v0, 0x174($s1)
    ctx->pc = 0x1ca244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x1ca248: 0x30420380  andi        $v0, $v0, 0x380
    ctx->pc = 0x1ca248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)896);
    // 0x1ca24c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CA24Cu;
    {
        const bool branch_taken_0x1ca24c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA24Cu;
            // 0x1ca250: 0x701014a9  por         $v0, $zero, $s0 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca24c) {
            ctx->pc = 0x1CA260u;
            goto label_1ca260;
        }
    }
    ctx->pc = 0x1CA254u;
    // 0x1ca254: 0xc079868  jal         func_1E61A0
    ctx->pc = 0x1CA254u;
    SET_GPR_U32(ctx, 31, 0x1CA25Cu);
    ctx->pc = 0x1CA258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA254u;
            // 0x1ca258: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E61A0u;
    if (runtime->hasFunction(0x1E61A0u)) {
        auto targetFn = runtime->lookupFunction(0x1E61A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA25Cu; }
        if (ctx->pc != 0x1CA25Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1e61a0_0x1e6238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA25Cu; }
        if (ctx->pc != 0x1CA25Cu) { return; }
    }
    ctx->pc = 0x1CA25Cu;
    // 0x1ca25c: 0x701014a9  por         $v0, $zero, $s0
    ctx->pc = 0x1ca25cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 16)));
label_1ca260:
    // 0x1ca260: 0x7bb10160  lq          $s1, 0x160($sp)
    ctx->pc = 0x1ca260u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1ca264: 0x7bb00170  lq          $s0, 0x170($sp)
    ctx->pc = 0x1ca264u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1ca268: 0x7bb20150  lq          $s2, 0x150($sp)
    ctx->pc = 0x1ca268u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1ca26c: 0x7bb30140  lq          $s3, 0x140($sp)
    ctx->pc = 0x1ca26cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1ca270: 0x7bb40130  lq          $s4, 0x130($sp)
    ctx->pc = 0x1ca270u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1ca274: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x1ca274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1ca278: 0xc7bb01b8  lwc1        $f27, 0x1B8($sp)
    ctx->pc = 0x1ca278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x1ca27c: 0xc7ba01b0  lwc1        $f26, 0x1B0($sp)
    ctx->pc = 0x1ca27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x1ca280: 0xc7b901a8  lwc1        $f25, 0x1A8($sp)
    ctx->pc = 0x1ca280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1ca284: 0xc7b801a0  lwc1        $f24, 0x1A0($sp)
    ctx->pc = 0x1ca284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1ca288: 0xc7b70198  lwc1        $f23, 0x198($sp)
    ctx->pc = 0x1ca288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1ca28c: 0xc7b60190  lwc1        $f22, 0x190($sp)
    ctx->pc = 0x1ca28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1ca290: 0xc7b50188  lwc1        $f21, 0x188($sp)
    ctx->pc = 0x1ca290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1ca294: 0xc7b40180  lwc1        $f20, 0x180($sp)
    ctx->pc = 0x1ca294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ca298: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA298u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA29Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA298u;
            // 0x1ca29c: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C9964u: goto label_1c9964;
            case 0x1C99A0u: goto label_1c99a0;
            case 0x1C9A20u: goto label_1c9a20;
            case 0x1C9A2Cu: goto label_1c9a2c;
            case 0x1C9AC8u: goto label_1c9ac8;
            case 0x1C9AF4u: goto label_1c9af4;
            case 0x1C9AF8u: goto label_1c9af8;
            case 0x1C9B30u: goto label_1c9b30;
            case 0x1C9B58u: goto label_1c9b58;
            case 0x1C9C38u: goto label_1c9c38;
            case 0x1C9C3Cu: goto label_1c9c3c;
            case 0x1C9C6Cu: goto label_1c9c6c;
            case 0x1C9CF0u: goto label_1c9cf0;
            case 0x1C9CF4u: goto label_1c9cf4;
            case 0x1C9DA0u: goto label_1c9da0;
            case 0x1C9DB0u: goto label_1c9db0;
            case 0x1C9E98u: goto label_1c9e98;
            case 0x1C9EB4u: goto label_1c9eb4;
            case 0x1C9EC0u: goto label_1c9ec0;
            case 0x1C9F38u: goto label_1c9f38;
            case 0x1C9F80u: goto label_1c9f80;
            case 0x1C9F88u: goto label_1c9f88;
            case 0x1C9FC8u: goto label_1c9fc8;
            case 0x1C9FF8u: goto label_1c9ff8;
            case 0x1CA048u: goto label_1ca048;
            case 0x1CA088u: goto label_1ca088;
            case 0x1CA090u: goto label_1ca090;
            case 0x1CA0F0u: goto label_1ca0f0;
            case 0x1CA10Cu: goto label_1ca10c;
            case 0x1CA218u: goto label_1ca218;
            case 0x1CA21Cu: goto label_1ca21c;
            case 0x1CA234u: goto label_1ca234;
            case 0x1CA260u: goto label_1ca260;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CA2A0u;
}
