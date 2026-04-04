#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D41F8
// Address: 0x1d41f8 - 0x1d4230
void sub_001D41F8_0x1d41f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D41F8_0x1d41f8");
#endif

    ctx->pc = 0x1d41f8u;

    // 0x1d41f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d41f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d41fc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1d41fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4200: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d4200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d4204: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d4204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1d4208: 0x8c44cd58  lw          $a0, -0x32A8($v0)
    ctx->pc = 0x1d4208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x1d420c: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x1d420cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4210: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d4210u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d4214: 0x8c66001c  lw          $a2, 0x1C($v1)
    ctx->pc = 0x1d4214u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1d4218: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1d4218u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1d421c: 0xc076a84  jal         func_1DAA10
    ctx->pc = 0x1D421Cu;
    SET_GPR_U32(ctx, 31, 0x1D4224u);
    ctx->pc = 0x1DAA10u;
    if (runtime->hasFunction(0x1DAA10u)) {
        auto targetFn = runtime->lookupFunction(0x1DAA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4224u; }
        if (ctx->pc != 0x1D4224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DAA10_0x1daa10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4224u; }
        if (ctx->pc != 0x1D4224u) { return; }
    }
    ctx->pc = 0x1D4224u;
    // 0x1d4224: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d4224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d4228: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4228u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D422Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4228u;
            // 0x1d422c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D4230u;
}
