#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020C1A0
// Address: 0x20c1a0 - 0x20c200
void sub_0020C1A0_0x20c1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020C1A0_0x20c1a0");
#endif

    ctx->pc = 0x20c1a0u;

    // 0x20c1a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20c1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20c1a4: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x20c1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x20c1a8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x20c1a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x20c1ac: 0x248414d0  addiu       $a0, $a0, 0x14D0
    ctx->pc = 0x20c1acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5328));
    // 0x20c1b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20c1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x20c1b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20c1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20c1b8: 0xc05e996  jal         func_17A658
    ctx->pc = 0x20C1B8u;
    SET_GPR_U32(ctx, 31, 0x20C1C0u);
    ctx->pc = 0x20C1BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C1B8u;
            // 0x20c1bc: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C1C0u; }
        if (ctx->pc != 0x20C1C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C1C0u; }
        if (ctx->pc != 0x20C1C0u) { return; }
    }
    ctx->pc = 0x20C1C0u;
    // 0x20c1c0: 0xe4540388  swc1        $f20, 0x388($v0)
    ctx->pc = 0x20c1c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 904), bits); }
    // 0x20c1c4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x20c1c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c1c8: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x20c1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x20c1cc: 0xac50039c  sw          $s0, 0x39C($v0)
    ctx->pc = 0x20c1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 924), GPR_U32(ctx, 16));
    // 0x20c1d0: 0xc05e996  jal         func_17A658
    ctx->pc = 0x20C1D0u;
    SET_GPR_U32(ctx, 31, 0x20C1D8u);
    ctx->pc = 0x20C1D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C1D0u;
            // 0x20c1d4: 0x248415e8  addiu       $a0, $a0, 0x15E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C1D8u; }
        if (ctx->pc != 0x20C1D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C1D8u; }
        if (ctx->pc != 0x20C1D8u) { return; }
    }
    ctx->pc = 0x20C1D8u;
    // 0x20c1d8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x20C1D8u;
    {
        const bool branch_taken_0x20c1d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c1d8) {
            ctx->pc = 0x20C1DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20C1D8u;
            // 0x20c1dc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20C1F0u;
            goto label_20c1f0;
        }
    }
    ctx->pc = 0x20C1E0u;
    // 0x20c1e0: 0xac50039c  sw          $s0, 0x39C($v0)
    ctx->pc = 0x20c1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 924), GPR_U32(ctx, 16));
    // 0x20c1e4: 0xe4540388  swc1        $f20, 0x388($v0)
    ctx->pc = 0x20c1e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 904), bits); }
    // 0x20c1e8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20c1e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20c1ec: 0x0  nop
    ctx->pc = 0x20c1ecu;
    // NOP
label_20c1f0:
    // 0x20c1f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20c1f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20c1f4: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x20c1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20c1f8: 0x3e00008  jr          $ra
    ctx->pc = 0x20C1F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C1FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C1F8u;
            // 0x20c1fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20C1F0u: goto label_20c1f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20C200u;
}
