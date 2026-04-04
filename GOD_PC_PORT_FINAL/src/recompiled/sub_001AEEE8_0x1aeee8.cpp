#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AEEE8
// Address: 0x1aeee8 - 0x1aef30
void sub_001AEEE8_0x1aeee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AEEE8_0x1aeee8");
#endif

    ctx->pc = 0x1aeee8u;

    // 0x1aeee8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1aeee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1aeeec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1aeeecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1aeef0: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x1aeef0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x1aeef4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aeef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aeef8: 0x261025d0  addiu       $s0, $s0, 0x25D0
    ctx->pc = 0x1aeef8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9680));
    // 0x1aeefc: 0xc05bc5c  jal         func_16F170
    ctx->pc = 0x1AEEFCu;
    SET_GPR_U32(ctx, 31, 0x1AEF04u);
    ctx->pc = 0x1AEF00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEEFCu;
            // 0x1aef00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F170u;
    if (runtime->hasFunction(0x16F170u)) {
        auto targetFn = runtime->lookupFunction(0x16F170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEF04u; }
        if (ctx->pc != 0x1AEF04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_16f170_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEF04u; }
        if (ctx->pc != 0x1AEF04u) { return; }
    }
    ctx->pc = 0x1AEF04u;
    // 0x1aef04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1aef04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aef08: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1aef08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1aef0c: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1aef0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1aef10: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x1aef10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1aef14: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1aef14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1aef18: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1aef18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1aef1c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1aef1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1aef20: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1aef20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aef24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aef24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aef28: 0x3e00008  jr          $ra
    ctx->pc = 0x1AEF28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AEF2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEF28u;
            // 0x1aef2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AEF30u;
}
