#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00196670
// Address: 0x196670 - 0x1966b0
void sub_00196670_0x196670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196670_0x196670");
#endif

    ctx->pc = 0x196670u;

    // 0x196670: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x196670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x196674: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x196674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x196678: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x196678u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x19667c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x19667cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x196680: 0x8444505c  lh          $a0, 0x505C($v0)
    ctx->pc = 0x196680u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20572)));
    // 0x196684: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x196684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x196688: 0xc06596a  jal         func_1965A8
    ctx->pc = 0x196688u;
    SET_GPR_U32(ctx, 31, 0x196690u);
    ctx->pc = 0x19668Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196688u;
            // 0x19668c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1965A8u;
    if (runtime->hasFunction(0x1965A8u)) {
        auto targetFn = runtime->lookupFunction(0x1965A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196690u; }
        if (ctx->pc != 0x196690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001965A8_0x1965a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196690u; }
        if (ctx->pc != 0x196690u) { return; }
    }
    ctx->pc = 0x196690u;
    // 0x196690: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x196690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x196694: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x196694u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x196698: 0xc06596a  jal         func_1965A8
    ctx->pc = 0x196698u;
    SET_GPR_U32(ctx, 31, 0x1966A0u);
    ctx->pc = 0x19669Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196698u;
            // 0x19669c: 0x8444505e  lh          $a0, 0x505E($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20574)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1965A8u;
    if (runtime->hasFunction(0x1965A8u)) {
        auto targetFn = runtime->lookupFunction(0x1965A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1966A0u; }
        if (ctx->pc != 0x1966A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001965A8_0x1965a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1966A0u; }
        if (ctx->pc != 0x1966A0u) { return; }
    }
    ctx->pc = 0x1966A0u;
    // 0x1966a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1966a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1966a4: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x1966a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1966a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1966A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1966ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1966A8u;
            // 0x1966ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1966B0u;
}
