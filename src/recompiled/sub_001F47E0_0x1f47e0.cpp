#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F47E0
// Address: 0x1f47e0 - 0x1f4848
void sub_001F47E0_0x1f47e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F47E0_0x1f47e0");
#endif

    ctx->pc = 0x1f47e0u;

    // 0x1f47e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f47e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f47e4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1f47e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1f47e8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f47e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1f47ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f47ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f47f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f47f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f47f4: 0xc44de320  lwc1        $f13, -0x1CE0($v0)
    ctx->pc = 0x1f47f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294959904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f47f8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1f47f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f47fc: 0x460e6b42  mul.s       $f13, $f13, $f14
    ctx->pc = 0x1f47fcu;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[14]);
    // 0x1f4800: 0x46006381  sub.s       $f14, $f12, $f0
    ctx->pc = 0x1f4800u;
    ctx->f[14] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x1f4804: 0xc07d1a8  jal         func_1F46A0
    ctx->pc = 0x1F4804u;
    SET_GPR_U32(ctx, 31, 0x1F480Cu);
    ctx->pc = 0x1F4808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4804u;
            // 0x1f4808: 0x46006b07  neg.s       $f12, $f13 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F46A0u;
    if (runtime->hasFunction(0x1F46A0u)) {
        auto targetFn = runtime->lookupFunction(0x1F46A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F480Cu; }
        if (ctx->pc != 0x1F480Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1f46a0_0x1f4770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F480Cu; }
        if (ctx->pc != 0x1F480Cu) { return; }
    }
    ctx->pc = 0x1F480Cu;
    // 0x1f480c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1f480cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1f4810: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f4810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f4814: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f4814u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f4818: 0xc443e378  lwc1        $f3, -0x1C88($v0)
    ctx->pc = 0x1f4818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294959992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f481c: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x1f481cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f4820: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1f4820u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x1f4824: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f4824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4828: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1f4828u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f482c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x1f482cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1f4830: 0xe6020000  swc1        $f2, 0x0($s0)
    ctx->pc = 0x1f4830u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1f4834: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x1f4834u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
    // 0x1f4838: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f4838u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f483c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F483Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F483Cu;
            // 0x1f4840: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F4844u;
    // 0x1f4844: 0x0  nop
    ctx->pc = 0x1f4844u;
    // NOP
}
