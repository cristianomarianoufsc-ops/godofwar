#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F30D8
// Address: 0x1f30d8 - 0x1f3390
void sub_001F30D8_0x1f30d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F30D8_0x1f30d8");
#endif

    ctx->pc = 0x1f30d8u;

    // 0x1f30d8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1f30d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1f30dc: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x1f30dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x1f30e0: 0xe7ba00d0  swc1        $f26, 0xD0($sp)
    ctx->pc = 0x1f30e0u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1f30e4: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x1f30e4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f30e8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1f30e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1f30ec: 0x46006686  mov.s       $f26, $f12
    ctx->pc = 0x1f30ecu;
    ctx->f[26] = FPU_MOV_S(ctx->f[12]);
    // 0x1f30f0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1f30f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x1f30f4: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1f30f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x1f30f8: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1f30f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x1f30fc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1f30fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1f3100: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x1f3100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x1f3104: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x1f3104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x1f3108: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f3108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f310c: 0xe7b900c8  swc1        $f25, 0xC8($sp)
    ctx->pc = 0x1f310cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1f3110: 0xe7b800c0  swc1        $f24, 0xC0($sp)
    ctx->pc = 0x1f3110u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1f3114: 0xe7b600b0  swc1        $f22, 0xB0($sp)
    ctx->pc = 0x1f3114u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1f3118: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x1f3118u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x1f311c: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x1f311cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1f3120: 0xe7b700b8  swc1        $f23, 0xB8($sp)
    ctx->pc = 0x1f3120u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1f3124: 0xc4970080  lwc1        $f23, 0x80($a0)
    ctx->pc = 0x1f3124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1f3128: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1f3128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1f312c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f312cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f3130: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f3130u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3134: 0xc459c658  lwc1        $f25, -0x39A8($v0)
    ctx->pc = 0x1f3134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1f3138: 0x249500f0  addiu       $s5, $a0, 0xF0
    ctx->pc = 0x1f3138u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
    // 0x1f313c: 0xc4b60080  lwc1        $f22, 0x80($a1)
    ctx->pc = 0x1f313cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1f3140: 0x24b400f0  addiu       $s4, $a1, 0xF0
    ctx->pc = 0x1f3140u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 240));
    // 0x1f3144: 0x46190603  div.s       $f24, $f0, $f25
    ctx->pc = 0x1f3144u;
    if (ctx->f[25] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[24] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[24] = ctx->f[0] / ctx->f[25];
    // 0x1f3148: 0xc4a10100  lwc1        $f1, 0x100($a1)
    ctx->pc = 0x1f3148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f314c: 0xc4800100  lwc1        $f0, 0x100($a0)
    ctx->pc = 0x1f314cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f3150: 0x24930070  addiu       $s3, $a0, 0x70
    ctx->pc = 0x1f3150u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x1f3154: 0x46160d41  sub.s       $f21, $f1, $f22
    ctx->pc = 0x1f3154u;
    ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[22]);
    // 0x1f3158: 0x24b20070  addiu       $s2, $a1, 0x70
    ctx->pc = 0x1f3158u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    // 0x1f315c: 0x46170501  sub.s       $f20, $f0, $f23
    ctx->pc = 0x1f315cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[23]);
    // 0x1f3160: 0x26f10070  addiu       $s1, $s7, 0x70
    ctx->pc = 0x1f3160u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 112));
    // 0x1f3164: 0x26f000f0  addiu       $s0, $s7, 0xF0
    ctx->pc = 0x1f3164u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 240));
    // 0x1f3168: 0x2416001f  addiu       $s6, $zero, 0x1F
    ctx->pc = 0x1f3168u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1f316c: 0x0  nop
    ctx->pc = 0x1f316cu;
    // NOP
label_1f3170:
    // 0x1f3170: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x1f3170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f3174: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f3174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3178: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x1f3178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f317c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f317cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3180: 0xc6ad0000  lwc1        $f13, 0x0($s5)
    ctx->pc = 0x1f3180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f3184: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1f3184u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1f3188: 0xc68f0000  lwc1        $f15, 0x0($s4)
    ctx->pc = 0x1f3188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1f318c: 0x46000b86  mov.s       $f14, $f1
    ctx->pc = 0x1f318cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[1]);
    // 0x1f3190: 0x46006b41  sub.s       $f13, $f13, $f0
    ctx->pc = 0x1f3190u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x1f3194: 0x4600d406  mov.s       $f16, $f26
    ctx->pc = 0x1f3194u;
    ctx->f[16] = FPU_MOV_S(ctx->f[26]);
    // 0x1f3198: 0x46017bc1  sub.s       $f15, $f15, $f1
    ctx->pc = 0x1f3198u;
    ctx->f[15] = FPU_SUB_S(ctx->f[15], ctx->f[1]);
    // 0x1f319c: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1f319cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x1f31a0: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x1f31a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x1f31a4: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1f31a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1f31a8: 0x46186b42  mul.s       $f13, $f13, $f24
    ctx->pc = 0x1f31a8u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[24]);
    // 0x1f31ac: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x1f31acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x1f31b0: 0x46187bc2  mul.s       $f15, $f15, $f24
    ctx->pc = 0x1f31b0u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[24]);
    // 0x1f31b4: 0xc07cc02  jal         func_1F3008
    ctx->pc = 0x1F31B4u;
    SET_GPR_U32(ctx, 31, 0x1F31BCu);
    ctx->pc = 0x1F31B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F31B4u;
            // 0x1f31b8: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F3008u;
    if (runtime->hasFunction(0x1F3008u)) {
        auto targetFn = runtime->lookupFunction(0x1F3008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F31BCu; }
        if (ctx->pc != 0x1F31BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1f3008_0x1f30d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F31BCu; }
        if (ctx->pc != 0x1F31BCu) { return; }
    }
    ctx->pc = 0x1F31BCu;
    // 0x1f31bc: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1f31bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f31c0: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x1f31c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f31c4: 0x46190002  mul.s       $f0, $f0, $f25
    ctx->pc = 0x1f31c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[25]);
    // 0x1f31c8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1f31c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1f31cc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1f31ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1f31d0: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x1f31d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1f31d4: 0x6c1ffe6  bgez        $s6, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1F31D4u;
    {
        const bool branch_taken_0x1f31d4 = (GPR_S32(ctx, 22) >= 0);
        ctx->pc = 0x1F31D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F31D4u;
            // 0x1f31d8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f31d4) {
            ctx->pc = 0x1F3170u;
            runtime->cooperativeGuestYield();
            goto label_1f3170;
        }
    }
    ctx->pc = 0x1F31DCu;
    // 0x1f31dc: 0x4617b041  sub.s       $f1, $f22, $f23
    ctx->pc = 0x1f31dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[22], ctx->f[23]);
    // 0x1f31e0: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x1f31e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x1f31e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f31e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f31e8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1f31e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f31ec: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1F31ECu;
    {
        const bool branch_taken_0x1f31ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f31ec) {
            ctx->pc = 0x1F3204u;
            goto label_1f3204;
        }
    }
    ctx->pc = 0x1F31F4u;
    // 0x1f31f4: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x1f31f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x1f31f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f31f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f31fc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1F31FCu;
    {
        const bool branch_taken_0x1f31fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F31FCu;
            // 0x1f3200: 0x4600b581  sub.s       $f22, $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f31fc) {
            ctx->pc = 0x1F3224u;
            goto label_1f3224;
        }
    }
    ctx->pc = 0x1F3204u;
label_1f3204:
    // 0x1f3204: 0x3c01c334  lui         $at, 0xC334
    ctx->pc = 0x1f3204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49972 << 16));
    // 0x1f3208: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f3208u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f320c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f320cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f3210: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1F3210u;
    {
        const bool branch_taken_0x1f3210 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f3210) {
            ctx->pc = 0x1F3224u;
            goto label_1f3224;
        }
    }
    ctx->pc = 0x1F3218u;
    // 0x1f3218: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x1f3218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x1f321c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f321cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3220: 0x4600b580  add.s       $f22, $f22, $f0
    ctx->pc = 0x1f3220u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_1f3224:
    // 0x1f3224: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x1f3224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x1f3228: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f3228u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f322c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1f322cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f3230: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1F3230u;
    {
        const bool branch_taken_0x1f3230 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f3230) {
            ctx->pc = 0x1F3248u;
            goto label_1f3248;
        }
    }
    ctx->pc = 0x1F3238u;
    // 0x1f3238: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x1f3238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x1f323c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f323cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3240: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1F3240u;
    {
        const bool branch_taken_0x1f3240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3240u;
            // 0x1f3244: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3240) {
            ctx->pc = 0x1F3268u;
            goto label_1f3268;
        }
    }
    ctx->pc = 0x1F3248u;
label_1f3248:
    // 0x1f3248: 0x3c01c334  lui         $at, 0xC334
    ctx->pc = 0x1f3248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49972 << 16));
    // 0x1f324c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f324cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3250: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1f3250u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f3254: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1F3254u;
    {
        const bool branch_taken_0x1f3254 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f3254) {
            ctx->pc = 0x1F3268u;
            goto label_1f3268;
        }
    }
    ctx->pc = 0x1F325Cu;
    // 0x1f325c: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x1f325cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x1f3260: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f3260u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3264: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1f3264u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1f3268:
    // 0x1f3268: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x1f3268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x1f326c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f326cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3270: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x1f3270u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f3274: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1F3274u;
    {
        const bool branch_taken_0x1f3274 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f3274) {
            ctx->pc = 0x1F328Cu;
            goto label_1f328c;
        }
    }
    ctx->pc = 0x1F327Cu;
    // 0x1f327c: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x1f327cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x1f3280: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f3280u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3284: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1F3284u;
    {
        const bool branch_taken_0x1f3284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3284u;
            // 0x1f3288: 0x4600ad41  sub.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3284) {
            ctx->pc = 0x1F32B0u;
            goto label_1f32b0;
        }
    }
    ctx->pc = 0x1F328Cu;
label_1f328c:
    // 0x1f328c: 0x3c01c334  lui         $at, 0xC334
    ctx->pc = 0x1f328cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49972 << 16));
    // 0x1f3290: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f3290u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3294: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1f3294u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f3298: 0x0  nop
    ctx->pc = 0x1f3298u;
    // NOP
    // 0x1f329c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1F329Cu;
    {
        const bool branch_taken_0x1f329c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F32A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F329Cu;
            // 0x1f32a0: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f329c) {
            ctx->pc = 0x1F32B4u;
            goto label_1f32b4;
        }
    }
    ctx->pc = 0x1F32A4u;
    // 0x1f32a4: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x1f32a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x1f32a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f32a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f32ac: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x1f32acu;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_1f32b0:
    // 0x1f32b0: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x1f32b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_1f32b4:
    // 0x1f32b4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1f32b4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1f32b8: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x1f32b8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x1f32bc: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x1f32bcu;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
    // 0x1f32c0: 0x4600d406  mov.s       $f16, $f26
    ctx->pc = 0x1f32c0u;
    ctx->f[16] = FPU_MOV_S(ctx->f[26]);
    // 0x1f32c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f32c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f32c8: 0xc07cc02  jal         func_1F3008
    ctx->pc = 0x1F32C8u;
    SET_GPR_U32(ctx, 31, 0x1F32D0u);
    ctx->pc = 0x1F32CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F32C8u;
            // 0x1f32cc: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F3008u;
    if (runtime->hasFunction(0x1F3008u)) {
        auto targetFn = runtime->lookupFunction(0x1F3008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F32D0u; }
        if (ctx->pc != 0x1F32D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1f3008_0x1f30d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F32D0u; }
        if (ctx->pc != 0x1F32D0u) { return; }
    }
    ctx->pc = 0x1F32D0u;
    // 0x1f32d0: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1f32d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f32d4: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x1f32d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x1f32d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f32d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f32dc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1f32dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f32e0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1F32E0u;
    {
        const bool branch_taken_0x1f32e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f32e0) {
            ctx->pc = 0x1F32F8u;
            goto label_1f32f8;
        }
    }
    ctx->pc = 0x1F32E8u;
    // 0x1f32e8: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x1f32e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x1f32ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f32ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f32f0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1F32F0u;
    {
        const bool branch_taken_0x1f32f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F32F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F32F0u;
            // 0x1f32f4: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f32f0) {
            ctx->pc = 0x1F331Cu;
            goto label_1f331c;
        }
    }
    ctx->pc = 0x1F32F8u;
label_1f32f8:
    // 0x1f32f8: 0x3c01c334  lui         $at, 0xC334
    ctx->pc = 0x1f32f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49972 << 16));
    // 0x1f32fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f32fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3300: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f3300u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f3304: 0x0  nop
    ctx->pc = 0x1f3304u;
    // NOP
    // 0x1f3308: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1F3308u;
    {
        const bool branch_taken_0x1f3308 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F330Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3308u;
            // 0x1f330c: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3308) {
            ctx->pc = 0x1F3324u;
            goto label_1f3324;
        }
    }
    ctx->pc = 0x1F3310u;
    // 0x1f3310: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x1f3310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x1f3314: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f3314u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3318: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f3318u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1f331c:
    // 0x1f331c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1f331cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1f3320: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x1f3320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3324:
    // 0x1f3324: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1f3324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f3328: 0x46190002  mul.s       $f0, $f0, $f25
    ctx->pc = 0x1f3328u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[25]);
    // 0x1f332c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f332cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f3330: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1f3330u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f3334: 0xe6e10080  swc1        $f1, 0x80($s7)
    ctx->pc = 0x1f3334u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 128), bits); }
    // 0x1f3338: 0xe6e20168  swc1        $f2, 0x168($s7)
    ctx->pc = 0x1f3338u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 360), bits); }
    // 0x1f333c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1f333cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1f3340: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1f3340u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1f3344: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1f3344u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f3348: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1f3348u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f334c: 0xe6e10100  swc1        $f1, 0x100($s7)
    ctx->pc = 0x1f334cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 256), bits); }
    // 0x1f3350: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1f3350u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f3354: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1f3354u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f3358: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x1f3358u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f335c: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x1f335cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f3360: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x1f3360u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f3364: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f3364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f3368: 0xc7ba00d0  lwc1        $f26, 0xD0($sp)
    ctx->pc = 0x1f3368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x1f336c: 0xc7b900c8  lwc1        $f25, 0xC8($sp)
    ctx->pc = 0x1f336cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1f3370: 0xc7b800c0  lwc1        $f24, 0xC0($sp)
    ctx->pc = 0x1f3370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1f3374: 0xc7b700b8  lwc1        $f23, 0xB8($sp)
    ctx->pc = 0x1f3374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1f3378: 0xc7b600b0  lwc1        $f22, 0xB0($sp)
    ctx->pc = 0x1f3378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1f337c: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x1f337cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f3380: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x1f3380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f3384: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3384u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3384u;
            // 0x1f3388: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F3170u: goto label_1f3170;
            case 0x1F3204u: goto label_1f3204;
            case 0x1F3224u: goto label_1f3224;
            case 0x1F3248u: goto label_1f3248;
            case 0x1F3268u: goto label_1f3268;
            case 0x1F328Cu: goto label_1f328c;
            case 0x1F32B0u: goto label_1f32b0;
            case 0x1F32B4u: goto label_1f32b4;
            case 0x1F32F8u: goto label_1f32f8;
            case 0x1F331Cu: goto label_1f331c;
            case 0x1F3324u: goto label_1f3324;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F338Cu;
    // 0x1f338c: 0x0  nop
    ctx->pc = 0x1f338cu;
    // NOP
}
