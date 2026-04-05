#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020C248
// Address: 0x20c248 - 0x20c298
void sub_0020C248_0x20c248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020C248_0x20c248");
#endif

    ctx->pc = 0x20c248u;

    // 0x20c248: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20c248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20c24c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20c24cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x20c250: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20c250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20c254: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20c254u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c258: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x20c258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20c25c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x20c25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20c260: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x20c260u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20c264: 0x0  nop
    ctx->pc = 0x20c264u;
    // NOP
    // 0x20c268: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
    ctx->pc = 0x20C268u;
    {
        const bool branch_taken_0x20c268 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20c268) {
            ctx->pc = 0x20C26Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20C268u;
            // 0x20c26c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20C28Cu;
            goto label_20c28c;
        }
    }
    ctx->pc = 0x20C270u;
    // 0x20c270: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x20c270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x20c274: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x20c274u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20c278: 0xc083068  jal         func_20C1A0
    ctx->pc = 0x20C278u;
    SET_GPR_U32(ctx, 31, 0x20C280u);
    ctx->pc = 0x20C27Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C278u;
            // 0x20c27c: 0x460c0b02  mul.s       $f12, $f1, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x20C1A0u;
    if (runtime->hasFunction(0x20C1A0u)) {
        auto targetFn = runtime->lookupFunction(0x20C1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C280u; }
        if (ctx->pc != 0x20C280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020C1A0_0x20c1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C280u; }
        if (ctx->pc != 0x20C280u) { return; }
    }
    ctx->pc = 0x20C280u;
    // 0x20c280: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x20c280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20c284: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x20c284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x20c288: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20c288u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20c28c:
    // 0x20c28c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20c28cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20c290: 0x3e00008  jr          $ra
    ctx->pc = 0x20C290u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C290u;
            // 0x20c294: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20C28Cu: goto label_20c28c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20C298u;
}
