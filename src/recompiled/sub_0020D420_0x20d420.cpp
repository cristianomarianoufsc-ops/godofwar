#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020D420
// Address: 0x20d420 - 0x20d530
void sub_0020D420_0x20d420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020D420_0x20d420");
#endif

    ctx->pc = 0x20d420u;

    // 0x20d420: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x20d420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x20d424: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x20d424u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x20d428: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x20d428u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x20d42c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20d42cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20d430: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x20d430u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x20d434: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x20d434u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x20d438: 0xe7b80080  swc1        $f24, 0x80($sp)
    ctx->pc = 0x20d438u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x20d43c: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x20d43cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x20d440: 0x4616ae00  add.s       $f24, $f21, $f22
    ctx->pc = 0x20d440u;
    ctx->f[24] = FPU_ADD_S(ctx->f[21], ctx->f[22]);
    // 0x20d444: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x20d444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x20d448: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x20d448u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x20d44c: 0x700584a9  por         $s0, $zero, $a1
    ctx->pc = 0x20d44cu;
    SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 5)));
    // 0x20d450: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x20d450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x20d454: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x20d454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x20d458: 0x70068ca9  por         $s1, $zero, $a2
    ctx->pc = 0x20d458u;
    SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 6)));
    // 0x20d45c: 0x7007a4a9  por         $s4, $zero, $a3
    ctx->pc = 0x20d45cu;
    SET_GPR_VEC(ctx, 20, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 7)));
    // 0x20d460: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x20d460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x20d464: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x20d464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x20d468: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x20d468u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x20d46c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20d46cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20d470: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x20d470u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x20d474: 0xc061084  jal         func_184210
    ctx->pc = 0x20D474u;
    SET_GPR_U32(ctx, 31, 0x20D47Cu);
    ctx->pc = 0x20D478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D474u;
            // 0x20d478: 0xe7b70078  swc1        $f23, 0x78($sp) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x184210u;
    if (runtime->hasFunction(0x184210u)) {
        auto targetFn = runtime->lookupFunction(0x184210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D47Cu; }
        if (ctx->pc != 0x20D47Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184210_0x184210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D47Cu; }
        if (ctx->pc != 0x20D47Cu) { return; }
    }
    ctx->pc = 0x20D47Cu;
    // 0x20d47c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x20d47cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x20d480: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x20d480u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x20d484: 0x70029ca9  por         $s3, $zero, $v0
    ctx->pc = 0x20d484u;
    SET_GPR_VEC(ctx, 19, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x20d488: 0x701024a9  por         $a0, $zero, $s0
    ctx->pc = 0x20d488u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 16)));
    // 0x20d48c: 0x70112ca9  por         $a1, $zero, $s1
    ctx->pc = 0x20d48cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 17)));
    // 0x20d490: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x20d490u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x20d494: 0xc061084  jal         func_184210
    ctx->pc = 0x20D494u;
    SET_GPR_U32(ctx, 31, 0x20D49Cu);
    ctx->pc = 0x20D498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D494u;
            // 0x20d498: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x184210u;
    if (runtime->hasFunction(0x184210u)) {
        auto targetFn = runtime->lookupFunction(0x184210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D49Cu; }
        if (ctx->pc != 0x20D49Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184210_0x184210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D49Cu; }
        if (ctx->pc != 0x20D49Cu) { return; }
    }
    ctx->pc = 0x20D49Cu;
    // 0x20d49c: 0x4616ab01  sub.s       $f12, $f21, $f22
    ctx->pc = 0x20d49cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[22]);
    // 0x20d4a0: 0x700294a9  por         $s2, $zero, $v0
    ctx->pc = 0x20d4a0u;
    SET_GPR_VEC(ctx, 18, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x20d4a4: 0x701124a9  por         $a0, $zero, $s1
    ctx->pc = 0x20d4a4u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 17)));
    // 0x20d4a8: 0x70142ca9  por         $a1, $zero, $s4
    ctx->pc = 0x20d4a8u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 20)));
    // 0x20d4ac: 0xc061084  jal         func_184210
    ctx->pc = 0x20D4ACu;
    SET_GPR_U32(ctx, 31, 0x20D4B4u);
    ctx->pc = 0x20D4B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D4ACu;
            // 0x20d4b0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x184210u;
    if (runtime->hasFunction(0x184210u)) {
        auto targetFn = runtime->lookupFunction(0x184210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D4B4u; }
        if (ctx->pc != 0x20D4B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184210_0x184210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D4B4u; }
        if (ctx->pc != 0x20D4B4u) { return; }
    }
    ctx->pc = 0x20D4B4u;
    // 0x20d4b4: 0x4617c302  mul.s       $f12, $f24, $f23
    ctx->pc = 0x20d4b4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[24], ctx->f[23]);
    // 0x20d4b8: 0x70028ca9  por         $s1, $zero, $v0
    ctx->pc = 0x20d4b8u;
    SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x20d4bc: 0x701324a9  por         $a0, $zero, $s3
    ctx->pc = 0x20d4bcu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 19)));
    // 0x20d4c0: 0x70122ca9  por         $a1, $zero, $s2
    ctx->pc = 0x20d4c0u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 18)));
    // 0x20d4c4: 0xc061084  jal         func_184210
    ctx->pc = 0x20D4C4u;
    SET_GPR_U32(ctx, 31, 0x20D4CCu);
    ctx->pc = 0x20D4C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D4C4u;
            // 0x20d4c8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x184210u;
    if (runtime->hasFunction(0x184210u)) {
        auto targetFn = runtime->lookupFunction(0x184210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D4CCu; }
        if (ctx->pc != 0x20D4CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184210_0x184210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D4CCu; }
        if (ctx->pc != 0x20D4CCu) { return; }
    }
    ctx->pc = 0x20D4CCu;
    // 0x20d4cc: 0x4617ab02  mul.s       $f12, $f21, $f23
    ctx->pc = 0x20d4ccu;
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[23]);
    // 0x20d4d0: 0x700284a9  por         $s0, $zero, $v0
    ctx->pc = 0x20d4d0u;
    SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x20d4d4: 0x701224a9  por         $a0, $zero, $s2
    ctx->pc = 0x20d4d4u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 18)));
    // 0x20d4d8: 0x70112ca9  por         $a1, $zero, $s1
    ctx->pc = 0x20d4d8u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 17)));
    // 0x20d4dc: 0xc061084  jal         func_184210
    ctx->pc = 0x20D4DCu;
    SET_GPR_U32(ctx, 31, 0x20D4E4u);
    ctx->pc = 0x20D4E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D4DCu;
            // 0x20d4e0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x184210u;
    if (runtime->hasFunction(0x184210u)) {
        auto targetFn = runtime->lookupFunction(0x184210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D4E4u; }
        if (ctx->pc != 0x20D4E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184210_0x184210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D4E4u; }
        if (ctx->pc != 0x20D4E4u) { return; }
    }
    ctx->pc = 0x20D4E4u;
    // 0x20d4e4: 0x701024a9  por         $a0, $zero, $s0
    ctx->pc = 0x20d4e4u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 16)));
    // 0x20d4e8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x20d4e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x20d4ec: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x20d4ecu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x20d4f0: 0xc061084  jal         func_184210
    ctx->pc = 0x20D4F0u;
    SET_GPR_U32(ctx, 31, 0x20D4F8u);
    ctx->pc = 0x20D4F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D4F0u;
            // 0x20d4f4: 0x70022ca9  por         $a1, $zero, $v0 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184210u;
    if (runtime->hasFunction(0x184210u)) {
        auto targetFn = runtime->lookupFunction(0x184210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D4F8u; }
        if (ctx->pc != 0x20D4F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184210_0x184210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D4F8u; }
        if (ctx->pc != 0x20D4F8u) { return; }
    }
    ctx->pc = 0x20D4F8u;
    // 0x20d4f8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x20d4f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20d4fc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x20d4fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20d500: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x20d500u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20d504: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x20d504u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20d508: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x20d508u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20d50c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20d50cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20d510: 0xc7b80080  lwc1        $f24, 0x80($sp)
    ctx->pc = 0x20d510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x20d514: 0xc7b70078  lwc1        $f23, 0x78($sp)
    ctx->pc = 0x20d514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x20d518: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x20d518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x20d51c: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x20d51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x20d520: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x20d520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20d524: 0x3e00008  jr          $ra
    ctx->pc = 0x20D524u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D524u;
            // 0x20d528: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20D52Cu;
    // 0x20d52c: 0x0  nop
    ctx->pc = 0x20d52cu;
    // NOP
}
