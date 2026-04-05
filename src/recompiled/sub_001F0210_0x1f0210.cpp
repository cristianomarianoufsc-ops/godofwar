#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F0210
// Address: 0x1f0210 - 0x1f02c0
void sub_001F0210_0x1f0210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0210_0x1f0210");
#endif

    ctx->pc = 0x1f0210u;

    // 0x1f0210: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f0210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f0214: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x1f0214u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1f0218: 0x4484a000  mtc1        $a0, $f20
    ctx->pc = 0x1f0218u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1f021c: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x1f021cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1f0220: 0x70041789  pexew       $v0, $a0
    ctx->pc = 0x1f0220u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1f0224: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x1f0224u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1f0228: 0x4614a342  mul.s       $f13, $f20, $f20
    ctx->pc = 0x1f0228u;
    ctx->f[13] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x1f022c: 0x4615a802  mul.s       $f0, $f21, $f21
    ctx->pc = 0x1f022cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x1f0230: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1f0230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1f0234: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f0234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f0238: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1f0238u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f023c: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x1f023cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1f0240: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1f0240u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0244: 0x46006b40  add.s       $f13, $f13, $f0
    ctx->pc = 0x1f0244u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x1f0248: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f0248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f024c: 0xe7b70048  swc1        $f23, 0x48($sp)
    ctx->pc = 0x1f024cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1f0250: 0x700417c9  prot3w      $v0, $a0
    ctx->pc = 0x1f0250u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1f0254: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f0254u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f0258: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1f0258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1f025c: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x1f025cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x1f0260: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1f0260u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1f0264: 0x460d0344  c1          0xD0344
    ctx->pc = 0x1f0264u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
    // 0x1f0268: 0xc060efc  jal         func_183BF0
    ctx->pc = 0x1F0268u;
    SET_GPR_U32(ctx, 31, 0x1F0270u);
    ctx->pc = 0x183BF0u;
    if (runtime->hasFunction(0x183BF0u)) {
        auto targetFn = runtime->lookupFunction(0x183BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0270u; }
        if (ctx->pc != 0x1F0270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183BF0_0x183bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0270u; }
        if (ctx->pc != 0x1F0270u) { return; }
    }
    ctx->pc = 0x1F0270u;
    // 0x1f0270: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x1f0270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x1f0274: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x1f0274u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x1f0278: 0x46160003  div.s       $f0, $f0, $f22
    ctx->pc = 0x1f0278u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[22];
    // 0x1f027c: 0x4600a307  neg.s       $f12, $f20
    ctx->pc = 0x1f027cu;
    ctx->f[12] = FPU_NEG_S(ctx->f[20]);
    // 0x1f0280: 0x4600ab47  neg.s       $f13, $f21
    ctx->pc = 0x1f0280u;
    ctx->f[13] = FPU_NEG_S(ctx->f[21]);
    // 0x1f0284: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x1f0284u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x1f0288: 0xc060efc  jal         func_183BF0
    ctx->pc = 0x1F0288u;
    SET_GPR_U32(ctx, 31, 0x1F0290u);
    ctx->pc = 0x1F028Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0288u;
            // 0x1f028c: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x183BF0u;
    if (runtime->hasFunction(0x183BF0u)) {
        auto targetFn = runtime->lookupFunction(0x183BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0290u; }
        if (ctx->pc != 0x1F0290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183BF0_0x183bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0290u; }
        if (ctx->pc != 0x1F0290u) { return; }
    }
    ctx->pc = 0x1F0290u;
    // 0x1f0290: 0x46160003  div.s       $f0, $f0, $f22
    ctx->pc = 0x1f0290u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[22];
    // 0x1f0294: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1f0294u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f0298: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f0298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f029c: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x1f029cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1f02a0: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x1f02a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f02a4: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1f02a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f02a8: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x1f02a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x1f02ac: 0xc7b70048  lwc1        $f23, 0x48($sp)
    ctx->pc = 0x1f02acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1f02b0: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1f02b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1f02b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f02b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f02b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F02B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F02BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F02B8u;
            // 0x1f02bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F02C0u;
}
