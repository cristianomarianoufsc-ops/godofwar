#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013EC48
// Address: 0x13ec48 - 0x13ec90
void sub_0013EC48_0x13ec48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013EC48_0x13ec48");
#endif

    ctx->pc = 0x13ec48u;

    // 0x13ec48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13ec48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13ec4c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x13ec4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x13ec50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13ec50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13ec54: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x13ec54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x13ec58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13ec58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13ec5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13ec5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ec60: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13ec60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ec64: 0xc60c00f8  lwc1        $f12, 0xF8($s0)
    ctx->pc = 0x13ec64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13ec68: 0xc060ee2  jal         func_183B88
    ctx->pc = 0x13EC68u;
    SET_GPR_U32(ctx, 31, 0x13EC70u);
    ctx->pc = 0x13EC6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13EC68u;
            // 0x13ec6c: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x183B88u;
    if (runtime->hasFunction(0x183B88u)) {
        auto targetFn = runtime->lookupFunction(0x183B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EC70u; }
        if (ctx->pc != 0x13EC70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183B88_0x183b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EC70u; }
        if (ctx->pc != 0x13EC70u) { return; }
    }
    ctx->pc = 0x13EC70u;
    // 0x13ec70: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x13ec70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13ec74: 0xc60200fc  lwc1        $f2, 0xFC($s0)
    ctx->pc = 0x13ec74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13ec78: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x13ec78u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x13ec7c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x13ec7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13ec80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13ec80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13ec84: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x13ec84u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x13ec88: 0x3e00008  jr          $ra
    ctx->pc = 0x13EC88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EC8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EC88u;
            // 0x13ec8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13EC90u;
}
