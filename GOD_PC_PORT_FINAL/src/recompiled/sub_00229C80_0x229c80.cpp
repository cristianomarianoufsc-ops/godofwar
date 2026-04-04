#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00229C80
// Address: 0x229c80 - 0x229cc8
void sub_00229C80_0x229c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229C80_0x229c80");
#endif

    ctx->pc = 0x229c80u;

    // 0x229c80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x229c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x229c84: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x229c84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x229c88: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x229c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x229c8c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x229c8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x229c90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x229c90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229c94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x229c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x229c98: 0xc08aaf6  jal         func_22ABD8
    ctx->pc = 0x229C98u;
    SET_GPR_U32(ctx, 31, 0x229CA0u);
    ctx->pc = 0x229C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229C98u;
            // 0x229c9c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x22ABD8u;
    if (runtime->hasFunction(0x22ABD8u)) {
        auto targetFn = runtime->lookupFunction(0x22ABD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229CA0u; }
        if (ctx->pc != 0x229CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_22abd8_0x22ac10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229CA0u; }
        if (ctx->pc != 0x229CA0u) { return; }
    }
    ctx->pc = 0x229CA0u;
    // 0x229ca0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x229ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229ca4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x229ca4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x229ca8: 0xc08a6b4  jal         func_229AD0
    ctx->pc = 0x229CA8u;
    SET_GPR_U32(ctx, 31, 0x229CB0u);
    ctx->pc = 0x229CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229CA8u;
            // 0x229cac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x229AD0u;
    if (runtime->hasFunction(0x229AD0u)) {
        auto targetFn = runtime->lookupFunction(0x229AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229CB0u; }
        if (ctx->pc != 0x229CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00229AD0_0x229ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229CB0u; }
        if (ctx->pc != 0x229CB0u) { return; }
    }
    ctx->pc = 0x229CB0u;
    // 0x229cb0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x229cb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x229cb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x229cb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x229cb8: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x229cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x229cbc: 0x3e00008  jr          $ra
    ctx->pc = 0x229CBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x229CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229CBCu;
            // 0x229cc0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x229CC4u;
    // 0x229cc4: 0x0  nop
    ctx->pc = 0x229cc4u;
    // NOP
}
