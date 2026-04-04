#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002632F0
// Address: 0x2632f0 - 0x263330
void sub_002632F0_0x2632f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002632F0_0x2632f0");
#endif

    ctx->pc = 0x2632f0u;

    // 0x2632f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2632f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2632f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2632f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2632f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2632f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2632fc: 0xc096408  jal         func_259020
    ctx->pc = 0x2632FCu;
    SET_GPR_U32(ctx, 31, 0x263304u);
    ctx->pc = 0x263300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2632FCu;
            // 0x263300: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259020u;
    if (runtime->hasFunction(0x259020u)) {
        auto targetFn = runtime->lookupFunction(0x259020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263304u; }
        if (ctx->pc != 0x263304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_259020_0x259038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263304u; }
        if (ctx->pc != 0x263304u) { return; }
    }
    ctx->pc = 0x263304u;
    // 0x263304: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x263304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x263308: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x263308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x26330c: 0x24423c98  addiu       $v0, $v0, 0x3C98
    ctx->pc = 0x26330cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15512));
    // 0x263310: 0xc096402  jal         func_259008
    ctx->pc = 0x263310u;
    SET_GPR_U32(ctx, 31, 0x263318u);
    ctx->pc = 0x263314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263310u;
            // 0x263314: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259008u;
    if (runtime->hasFunction(0x259008u)) {
        auto targetFn = runtime->lookupFunction(0x259008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263318u; }
        if (ctx->pc != 0x263318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_259008_0x259020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263318u; }
        if (ctx->pc != 0x263318u) { return; }
    }
    ctx->pc = 0x263318u;
    // 0x263318: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x263318u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26331c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26331cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x263320: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x263320u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x263324: 0x3e00008  jr          $ra
    ctx->pc = 0x263324u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263324u;
            // 0x263328: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26332Cu;
    // 0x26332c: 0x0  nop
    ctx->pc = 0x26332cu;
    // NOP
}
