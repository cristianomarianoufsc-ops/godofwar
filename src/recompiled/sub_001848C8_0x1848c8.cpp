#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001848C8
// Address: 0x1848c8 - 0x184920
void sub_001848C8_0x1848c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001848C8_0x1848c8");
#endif

    ctx->pc = 0x1848c8u;

    // 0x1848c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1848c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1848cc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1848ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1848d0: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x1848d0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1848d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1848d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1848d8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1848d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1848dc: 0x46007546  mov.s       $f21, $f14
    ctx->pc = 0x1848dcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[14]);
    // 0x1848e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1848e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1848e4: 0xc061122  jal         func_184488
    ctx->pc = 0x1848E4u;
    SET_GPR_U32(ctx, 31, 0x1848ECu);
    ctx->pc = 0x1848E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1848E4u;
            // 0x1848e8: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x184488u;
    if (runtime->hasFunction(0x184488u)) {
        auto targetFn = runtime->lookupFunction(0x184488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1848ECu; }
        if (ctx->pc != 0x1848ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184488_0x184488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1848ECu; }
        if (ctx->pc != 0x1848ECu) { return; }
    }
    ctx->pc = 0x1848ECu;
    // 0x1848ec: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1848ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1848f0: 0xc06115e  jal         func_184578
    ctx->pc = 0x1848F0u;
    SET_GPR_U32(ctx, 31, 0x1848F8u);
    ctx->pc = 0x1848F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1848F0u;
            // 0x1848f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184578u;
    if (runtime->hasFunction(0x184578u)) {
        auto targetFn = runtime->lookupFunction(0x184578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1848F8u; }
        if (ctx->pc != 0x1848F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184578_0x184578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1848F8u; }
        if (ctx->pc != 0x1848F8u) { return; }
    }
    ctx->pc = 0x1848F8u;
    // 0x1848f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1848f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1848fc: 0xc06119a  jal         func_184668
    ctx->pc = 0x1848FCu;
    SET_GPR_U32(ctx, 31, 0x184904u);
    ctx->pc = 0x184900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1848FCu;
            // 0x184900: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x184668u;
    if (runtime->hasFunction(0x184668u)) {
        auto targetFn = runtime->lookupFunction(0x184668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184904u; }
        if (ctx->pc != 0x184904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184668_0x184668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184904u; }
        if (ctx->pc != 0x184904u) { return; }
    }
    ctx->pc = 0x184904u;
    // 0x184904: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x184904u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x184908: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x184908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18490c: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x18490cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x184910: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x184910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x184914: 0x3e00008  jr          $ra
    ctx->pc = 0x184914u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184914u;
            // 0x184918: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18491Cu;
    // 0x18491c: 0x0  nop
    ctx->pc = 0x18491cu;
    // NOP
}
