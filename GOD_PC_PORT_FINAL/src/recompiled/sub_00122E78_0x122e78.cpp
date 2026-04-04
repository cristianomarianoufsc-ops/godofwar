#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00122E78
// Address: 0x122e78 - 0x1230a8
void sub_00122E78_0x122e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122E78_0x122e78");
#endif

    ctx->pc = 0x122e78u;

    // 0x122e78: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x122e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x122e7c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x122e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x122e80: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x122e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x122e84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x122e84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122e88: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x122e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x122e8c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x122e8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122e90: 0xe7b900b8  swc1        $f25, 0xB8($sp)
    ctx->pc = 0x122e90u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x122e94: 0xe7b800b0  swc1        $f24, 0xB0($sp)
    ctx->pc = 0x122e94u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x122e98: 0xe7b700a8  swc1        $f23, 0xA8($sp)
    ctx->pc = 0x122e98u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x122e9c: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x122e9cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x122ea0: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x122ea0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x122ea4: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x122ea4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x122ea8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x122ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x122eac: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x122EACu;
    SET_GPR_U32(ctx, 31, 0x122EB4u);
    ctx->pc = 0x122EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x122EACu;
            // 0x122eb0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122EB4u; }
        if (ctx->pc != 0x122EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122EB4u; }
        if (ctx->pc != 0x122EB4u) { return; }
    }
    ctx->pc = 0x122EB4u;
    // 0x122eb4: 0x3c013000  lui         $at, 0x3000
    ctx->pc = 0x122eb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12288 << 16));
    // 0x122eb8: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x122eb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x122ebc: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x122ebcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x122ec0: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x122ec0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x122ec4: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x122ec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x122ec8: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x122ec8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x122ecc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x122eccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x122ed0: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x122ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x122ed4: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x122ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x122ed8: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x122ed8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x122edc: 0x4618ad42  mul.s       $f21, $f21, $f24
    ctx->pc = 0x122edcu;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[24]);
    // 0x122ee0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x122ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x122ee4: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x122ee4u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x122ee8: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x122EE8u;
    SET_GPR_U32(ctx, 31, 0x122EF0u);
    ctx->pc = 0x122EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x122EE8u;
            // 0x122eec: 0x4601ad42  mul.s       $f21, $f21, $f1 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122EF0u; }
        if (ctx->pc != 0x122EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122EF0u; }
        if (ctx->pc != 0x122EF0u) { return; }
    }
    ctx->pc = 0x122EF0u;
    // 0x122ef0: 0x4482b800  mtc1        $v0, $f23
    ctx->pc = 0x122ef0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x122ef4: 0x4680bde0  cvt.s.w     $f23, $f23
    ctx->pc = 0x122ef4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[23], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
    // 0x122ef8: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x122ef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x122efc: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x122efcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x122f00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x122f00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x122f04: 0x4618bdc2  mul.s       $f23, $f23, $f24
    ctx->pc = 0x122f04u;
    ctx->f[23] = FPU_MUL_S(ctx->f[23], ctx->f[24]);
    // 0x122f08: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x122F08u;
    SET_GPR_U32(ctx, 31, 0x122F10u);
    ctx->pc = 0x122F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x122F08u;
            // 0x122f0c: 0x4600bdc2  mul.s       $f23, $f23, $f0 (Delay Slot)
        ctx->f[23] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122F10u; }
        if (ctx->pc != 0x122F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122F10u; }
        if (ctx->pc != 0x122F10u) { return; }
    }
    ctx->pc = 0x122F10u;
    // 0x122f10: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x122f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x122f14: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x122f14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x122f18: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x122f18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x122f1c: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x122f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x122f20: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x122f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x122f24: 0x4618a502  mul.s       $f20, $f20, $f24
    ctx->pc = 0x122f24u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[24]);
    // 0x122f28: 0x46190882  mul.s       $f2, $f1, $f25
    ctx->pc = 0x122f28u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[25]);
    // 0x122f2c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x122f2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x122f30: 0x46190002  mul.s       $f0, $f0, $f25
    ctx->pc = 0x122f30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[25]);
    // 0x122f34: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x122f34u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x122f38: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x122F38u;
    SET_GPR_U32(ctx, 31, 0x122F40u);
    ctx->pc = 0x122F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x122F38u;
            // 0x122f3c: 0x4602a500  add.s       $f20, $f20, $f2 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122F40u; }
        if (ctx->pc != 0x122F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122F40u; }
        if (ctx->pc != 0x122F40u) { return; }
    }
    ctx->pc = 0x122F40u;
    // 0x122f40: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x122f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x122f44: 0x4482b000  mtc1        $v0, $f22
    ctx->pc = 0x122f44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x122f48: 0x4680b5a0  cvt.s.w     $f22, $f22
    ctx->pc = 0x122f48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[22], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
    // 0x122f4c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x122f4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x122f50: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x122f50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x122f54: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x122f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x122f58: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x122f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x122f5c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x122f5cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x122f60: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x122f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x122f64: 0x4618b582  mul.s       $f22, $f22, $f24
    ctx->pc = 0x122f64u;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[24]);
    // 0x122f68: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x122f68u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x122f6c: 0x46190842  mul.s       $f1, $f1, $f25
    ctx->pc = 0x122f6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[25]);
    // 0x122f70: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x122f70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x122f74: 0x4601b582  mul.s       $f22, $f22, $f1
    ctx->pc = 0x122f74u;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[1]);
    // 0x122f78: 0x46190002  mul.s       $f0, $f0, $f25
    ctx->pc = 0x122f78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[25]);
    // 0x122f7c: 0xc060ee2  jal         func_183B88
    ctx->pc = 0x122F7Cu;
    SET_GPR_U32(ctx, 31, 0x122F84u);
    ctx->pc = 0x122F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x122F7Cu;
            // 0x122f80: 0x4600b580  add.s       $f22, $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x183B88u;
    if (runtime->hasFunction(0x183B88u)) {
        auto targetFn = runtime->lookupFunction(0x183B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122F84u; }
        if (ctx->pc != 0x122F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183B88_0x183b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122F84u; }
        if (ctx->pc != 0x122F84u) { return; }
    }
    ctx->pc = 0x122F84u;
    // 0x122f84: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x122f84u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x122f88: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x122f88u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x122f8c: 0xc060ee2  jal         func_183B88
    ctx->pc = 0x122F8Cu;
    SET_GPR_U32(ctx, 31, 0x122F94u);
    ctx->pc = 0x122F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x122F8Cu;
            // 0x122f90: 0x27a40024  addiu       $a0, $sp, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183B88u;
    if (runtime->hasFunction(0x183B88u)) {
        auto targetFn = runtime->lookupFunction(0x183B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122F94u; }
        if (ctx->pc != 0x122F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183B88_0x183b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122F94u; }
        if (ctx->pc != 0x122F94u) { return; }
    }
    ctx->pc = 0x122F94u;
    // 0x122f94: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x122f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x122f98: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x122f98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x122f9c: 0xc7a40020  lwc1        $f4, 0x20($sp)
    ctx->pc = 0x122f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x122fa0: 0x461518c2  mul.s       $f3, $f3, $f21
    ctx->pc = 0x122fa0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[21]);
    // 0x122fa4: 0x46140082  mul.s       $f2, $f0, $f20
    ctx->pc = 0x122fa4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x122fa8: 0x46142042  mul.s       $f1, $f4, $f20
    ctx->pc = 0x122fa8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
    // 0x122fac: 0x46141d02  mul.s       $f20, $f3, $f20
    ctx->pc = 0x122facu;
    ctx->f[20] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x122fb0: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x122fb0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x122fb4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x122fb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x122fb8: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x122fb8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x122fbc: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x122fbcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x122fc0: 0x70461b89  pcpyld      $v1, $v0, $a2
    ctx->pc = 0x122fc0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x122fc4: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x122fc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x122fc8: 0x70e81389  pcpyld      $v0, $a3, $t0
    ctx->pc = 0x122fc8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x122fcc: 0x70434cc8  ppacw       $t1, $v0, $v1
    ctx->pc = 0x122fccu;
    SET_GPR_VEC(ctx, 9, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x122fd0: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x122fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x122fd4: 0x48a91000  qmtc2.ni    $t1, $vf2
    ctx->pc = 0x122fd4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x122fd8: 0x8c85bde8  lw          $a1, -0x4218($a0)
    ctx->pc = 0x122fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294950376)));
    // 0x122fdc: 0xfba20030  sqc2        $vf2, 0x30($sp)
    ctx->pc = 0x122fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x122fe0: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x122fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x122fe4: 0x24a400c0  addiu       $a0, $a1, 0xC0
    ctx->pc = 0x122fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
    // 0x122fe8: 0xd8a100c0  lqc2        $vf1, 0xC0($a1)
    ctx->pc = 0x122fe8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 192)));
    // 0x122fec: 0x4be209bc  vmulax.xyzw $ACC, $vf1, $vf2x
    ctx->pc = 0x122fecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x122ff0: 0xd8810010  lqc2        $vf1, 0x10($a0)
    ctx->pc = 0x122ff0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x122ff4: 0x4be208bd  vmadday.xyzw $ACC, $vf1, $vf2y
    ctx->pc = 0x122ff4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x122ff8: 0xd8810020  lqc2        $vf1, 0x20($a0)
    ctx->pc = 0x122ff8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x122ffc: 0x4be208be  vmaddaz.xyzw $ACC, $vf1, $vf2z
    ctx->pc = 0x122ffcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x123000: 0xd8810030  lqc2        $vf1, 0x30($a0)
    ctx->pc = 0x123000u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x123004: 0x4be2084b  vmaddw.xyzw $vf1, $vf1, $vf2w
    ctx->pc = 0x123004u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x123008: 0xda020080  lqc2        $vf2, 0x80($s0)
    ctx->pc = 0x123008u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x12300c: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x12300cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x123010: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x123010u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x123014: 0x44022000  mfc1        $v0, $f4
    ctx->pc = 0x123014u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x123018: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x123018u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12301c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x12301cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x123020: 0x70481b89  pcpyld      $v1, $v0, $t0
    ctx->pc = 0x123020u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x123024: 0x44081800  mfc1        $t0, $f3
    ctx->pc = 0x123024u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x123028: 0x71281389  pcpyld      $v0, $t1, $t0
    ctx->pc = 0x123028u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x12302c: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x12302cu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x123030: 0x4409b000  mfc1        $t1, $f22
    ctx->pc = 0x123030u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x123034: 0x48a91000  qmtc2.ni    $t1, $vf2
    ctx->pc = 0x123034u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x123038: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x123038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x12303c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x12303cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x123040: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x123040u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x123044: 0x4be20898  vmulx.xyzw  $vf2, $vf1, $vf2x
    ctx->pc = 0x123044u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x123048: 0xd8a100c0  lqc2        $vf1, 0xC0($a1)
    ctx->pc = 0x123048u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 192)));
    // 0x12304c: 0x4be209bc  vmulax.xyzw $ACC, $vf1, $vf2x
    ctx->pc = 0x12304cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x123050: 0xd8810010  lqc2        $vf1, 0x10($a0)
    ctx->pc = 0x123050u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x123054: 0x4be208bd  vmadday.xyzw $ACC, $vf1, $vf2y
    ctx->pc = 0x123054u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x123058: 0xd8810020  lqc2        $vf1, 0x20($a0)
    ctx->pc = 0x123058u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x12305c: 0x4be208be  vmaddaz.xyzw $ACC, $vf1, $vf2z
    ctx->pc = 0x12305cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x123060: 0xd8810030  lqc2        $vf1, 0x30($a0)
    ctx->pc = 0x123060u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x123064: 0x4be2084b  vmaddw.xyzw $vf1, $vf1, $vf2w
    ctx->pc = 0x123064u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x123068: 0xda020090  lqc2        $vf2, 0x90($s0)
    ctx->pc = 0x123068u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x12306c: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x12306cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x123070: 0xfa410000  sqc2        $vf1, 0x0($s2)
    ctx->pc = 0x123070u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x123074: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x123074u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x123078: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x123078u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12307c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x12307cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x123080: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x123080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x123084: 0xc7b900b8  lwc1        $f25, 0xB8($sp)
    ctx->pc = 0x123084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x123088: 0xc7b800b0  lwc1        $f24, 0xB0($sp)
    ctx->pc = 0x123088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x12308c: 0xc7b700a8  lwc1        $f23, 0xA8($sp)
    ctx->pc = 0x12308cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x123090: 0xc7b600a0  lwc1        $f22, 0xA0($sp)
    ctx->pc = 0x123090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x123094: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x123094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x123098: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x123098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12309c: 0x3e00008  jr          $ra
    ctx->pc = 0x12309Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1230A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12309Cu;
            // 0x1230a0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1230A4u;
    // 0x1230a4: 0x0  nop
    ctx->pc = 0x1230a4u;
    // NOP
}
